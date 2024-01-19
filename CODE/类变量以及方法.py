class myclass:
    class_goal="数学不要再挂科"  #声明类变量

    @classmethod    #定义类方法前要这样修饰
    def class_method(cls):
        print(f"这是一个类方法，类变量是:{cls.class_goal}")
myclass.class_method()  #调用类方法