import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
plt.rcParams['font.sans-serif']=['SimHei']
plt.rcParams['axes.unicode_minus']=False


train =pd.read_csv('Titanic_train.csv')
#查看数据摘要
train_result=train.describe()
print(train_result)
#查看每一列的数据类型和总和
train.info()


#数据可视化
total_data=train['Survived'].value_counts()
plt.figure(figsize=(8,8))
plt.pie(total_data,autopct='%.2f%%',labels=['死亡','存活'],colors=['r','g'],pctdistance=0.4,labeldistance=0.6,shadow=True,explode=[0,0.1],textprops=dict(size=15))
plt.title('总体生还率')
Text=(0.5,1.0,'总体生还率')
plt.show()

#不同兄弟姐妹和配偶数量的乘客的生还率
SibSp_range=train['SibSp']
SibSp_num,_ =np.histogram(SibSp_range,range=[0,8],bins=9)
SibSp_survived=[]
for SibSp in range(0,9,1):
    survived_num=train.loc[(SibSp_range>=SibSp-1)&(SibSp_range<=SibSp)]['Survived'].sum()
    SibSp_survived.append(survived_num)
print(SibSp_survived)
print(SibSp_num)
plt.figure(figsize=(12,6))
plt.bar(np.arange(0,9,1)+0.5,SibSp_num,width=1,label='总人数',alpha=0.7)
plt.bar(np.arange(0,9,1)+0.5,SibSp_survived,width=1,label='生还人数')
plt.xticks(range(0,9,1))
plt.yticks(range(0,610,20))
plt.xlabel('兄弟姐妹和配偶数量',position=(0.95,0),fontsize=15)
plt.ylabel('人数',position=(0,0.95),fontsize=15)
plt.title('不同兄弟姐妹和配偶数量的乘客的生还率')
plt.grid(True,linestyle=':',alpha=0.5)
plt.show()

#生存者中的男女比例
Sex_count=train.groupby(by='Survived')['Sex'].value_counts()
for Sex in Sex_count.index:
    Sex_survived=Sex_count.loc[1]   #只选出生还者，后面再分生还者的性别
#print(Sex_survived)
plt.figure(figsize=(8,8))
plt.pie(Sex_survived,autopct='%.2f%%',labels=['女','男'],colors=['#FFB6C1','b'],pctdistance=0.4,labeldistance=0.6,shadow=True,explode=[0,0.1],textprops=dict(size=15))
plt.title('生存者中的男女比例')
Text=(0.5,1.0,'生存者中的男女比例')
plt.show()

#男女人数对比
Sex_count=train.groupby(by='Sex')['Survived'].value_counts()
for Sex in Sex_count.index:
    female_total=Sex_count.loc['female'][0]+Sex_count.loc['female'][1]
    male_total=Sex_count.loc['male'][0]+Sex_count.loc['male'][1]
#print(female_total)
#print(male_total)
# 绘制条形图
plt.bar(x= ['女性人数', '男性人数'], height=[female_total,male_total])
plt.title('男女人数对比')
plt.xlabel('性别')
plt.ylabel('总人数')
plt.show()