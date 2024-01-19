print("      类与实例化")
class Student:
    def __init__(self,name,score):
        self.name =name
        self.score=score
        self.age=18                   #新增age属性

    def say_score(self):

        print("{}的分数为{}".format(self.name,self.score))

s1 = Student("张三",80)
s1.say_score()
print(s1.name,s1.score,s1.age)

s2=Student("李四",90)
s2.address="广工西生活区"     #独立增加新属性


