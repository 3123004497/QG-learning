class Person:  #父类
    def __init__(self, name, age):
        self.name = name
        self.age = age

    def say_age(self):
        print("{} 年龄{}".format(self.name,self.age))
    def say_name(self):
        print("报告老师，我是",self.name)

#class Student(Person):
   # pass

class Student(Person):
    def __init__(self,name,age,score):
        Person.__init__(self,name,age)  #调用父类的内容 方法1
        #super(Student,self).__init__(name,age)   #调用父类的内容 方法2
        print("创建Student")
        self.score = score
    def say_score(self):
        print("张宇的分数是",self.score)
    def ay_name(self):  #重写父类方法
        print("报告老师，我是",self.name)




s1= Student("张宇",18,94)
s1.say_age()
#print(dir(s1))  #查看包含的属性
s1.say_score()
s1.say_name()

class A:
    pass
class B(A):
    pass
class C(B):
    pass
print(C.mro())  #通过类方法 mro()输出这个类的继承属性