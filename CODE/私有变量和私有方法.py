class myclass:
    def __init__(self):
        self.__private_var = "私有变量"
    def get__private_var(self):  #访问私有变量
        return self.__private_var

    def _private_method(self):
        print("私有方法")

    def print__private_var(self):
        print(self.__private_var)
s1 = myclass()
s1.print__private_var() # 打印私有变量
s1._private_method()  #调用私有方法