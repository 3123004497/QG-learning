## Pandas库学习

#### Pandas 读取数据：


```python
import pandas as pd

# 读取 CSV 文件
data = pd.read_csv('data.csv')

# 读取 Excel 文件
data = pd.read_excel('data.xlsx')

# 读取 JSON 文件
data = pd.read_json('data.json')


```
- 从 SQL 数据库读取数据


```python
import pandas as pd
import sqlalchemy as db

# 创建数据库连接
engine = db.create_engine('mysql+pymysql://username:password@localhost:3306/database_name')

# 读取数据表中的数据
data = pd.read_sql('SELECT * FROM table_name', engine)
```
- 从 HTML 文件读取数据


```python
import pandas as pd
from bs4 import BeautifulSoup
import requests

# 获取 HTML 页面内容
response = requests.get('http://example.com')
html = response.text

# 使用 BeautifulSoup 解析 HTML 内容
soup = BeautifulSoup(html, 'html.parser')
table = soup.find('table')  # 根据实际情况修改标签名和选择器等参数来定位表格元素

rows = table.find_all('tr')  # 获取表格行元素列表，每一行表示一行数据记录

data = []  # 存储每行数据的列表，每个元素是一个字典，键为列名，值为对应列的值

for row in rows:  # 遍历每一行数据记录，获取每列的值并存储到字典中，最后将字典添加到列表中作为一行数据记录
    cols = row.find_all('td')  # 根据实际情况修改标签名和选择器等参数来定位单元格元素，获取单元格值列表，每一列表示一列数据字段的值，存储到字典中，最后将字典添加到列表中作为一行数据记录。最后将列表转换为 DataFrame。
注意，这里需要自己定义列名。如果表格中没有列名，需要手动添加。
```

#### 清洗数据

1.**查看数据摘要**：

使用 `describe()` 函数查看数据的统计摘要。


```python
df.describe()
```
2.**处理缺失值**：

* 使用* `dropna()` 函数***删除**包含缺失值的**行**或**列**。
* 使用 `fillna()` 函数**填充**缺失值。例如，用*平均值、中位数*或*特定值*填充。


```python
# 删除包含缺失值的行
df = df.dropna()

# 用特定值填充缺失值，例如0
df = df.fillna(0)
```
3.**处理重复行**：

使用 `duplicated()` 和 `drop_duplicates()` 函数处理**重复行**。


```python
# 标记重复行
df[df.duplicated()]

# 删除重复行
df = df.drop_duplicates()
```
4.**数据类型转换**：

使用 `astype()` 函数**转换数据类型**。例：将字符串列转换为整数或浮点数列。


```python
df['column_name'] = df['column_name'].astype(int)
```
5.**字符串处理**：

使用 Pandas 的字符串方法（如 `str.replace()`, `str.split()`, `str.lower()`, `str.upper()` 等）处理**字符串列**。

6.**筛选数据**：

使用布尔索引**筛选**数据。例：选择年龄大于30的行。


```python
df[df['age'] > 30]
```
7.**排序数据**：

使用 `sort_values()` 函数对数据进行**排序**。例如，按年龄升序排序。

8.**分组和聚合**：
使用 **`groupby()` 和聚合函数（如 `sum()`, `mean()`, `count()` 等**）按特定**列**对数据进行**分组**和**聚合**。

9.**重塑数据**：使用 `pivot()`, `pivot_table()`, `melt()` 等函数重塑数据。例如，将宽格式数据转换为长格式数据。