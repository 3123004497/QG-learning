#2024/1/17  python数据结构
# 白天带娃，晚上学习，作业有时候可能会晚点交 [手动狗头]

#字符串（String）:字符串是Python中用于表示文本的数据类型。它们是不可变的，意味着一旦创建，不能更改其中的字符。
s = "Hello, World!"

print(s[0])  # 输出: H
print(s[2:5])  # 输出: llo
#切片操作`s[2:5]`表示从索引2开始到索引5之前（不包括5）的所有字符，最下面有例子

#列表（List）:列表是Python中的有序集合，可以包含不同类型的元素。它们是可变的，意味着你可以更改、添加或删除其中的元素。
my_list = [1, "apple", 3.14, True]
print(my_list[1])  # 输出: apple
print(my_list[2:4])  # 输出: [3.14, True]

#字典（Dictionary）:字典是Python中的无序集合，用于存储键值对。键是唯一的，而值可以是任何数据类型：数字、字符串、列表、字典等。
person = {"name": "Alice", "age": 30}
print(person["name"])  # 输出: Alice
print(person.keys())  # 输出: dict_keys(['name', 'age'])
#上行代码用了keys()来获取字典中的所有建

#元组（Tuple）:元组与列表类似，也是有序的集合，但元组是不可变的，一旦创建，不能更改其中的元素。
coordinates = (3, 4)
print(coordinates[0])  # 输出: 3

#集合（Set）:集合是一个无序的、不重复元素的集合。它们主要用于消除重复的元素。
colors = {"red", "green", "blue"}
print(colors)  # 输出: {'red', 'green', 'blue'}

#切片（Slice）:切片用于从序列（如字符串、列表和元组）中提取一段子序列。它使用`start:stop:step`语法。
s = "Hello, World!"
print(s[2:6])  # 输出: lloW
print(s[::2])  # 输出: H, o, r, W, d (每隔一个字符)
