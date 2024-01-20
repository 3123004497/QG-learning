class Animal:
    def shout(self):
        print("动物叫了一声")

class Dog(Animal):
    def shout(self):
        print("小狗:汪汪~")

class Dragon(Animal):
    def shout(self):
        print("龙:芜湖~")

def animalShout(a):
    a.shout()    #会产生多态，即传入对象不同则调用的方法不同

animalShout(Dog())
animalShout(Dragon())