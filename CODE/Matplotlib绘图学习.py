import numpy as np
import matplotlib.pyplot as plt
x=np.array([1,2,3,4,5])
y=np.array([2,5,4,1,3])
plt.scatter(x,y)
plt.title('Scatter Plot')
plt.xlabel('X Label')
plt.ylabel('Y Label')
plt.show()


x = np.linspace(-np.pi, np.pi, 100)
y = np.sin(x)
plt.plot(x, y)
plt.title('Curve Plot')
plt.xlabel('X Label')
plt.ylabel('Y Label')
plt.show()

labels = ['A', 'B', 'C', 'D']
y_values = np.array([10, 30, 20, 40])
plt.bar(labels, y_values)
plt.title('Bar Chart')
plt.xlabel('X Label')
plt.ylabel('Y Label')
plt.show()

labels = ['A', 'B', 'C', 'D']
sizes = np.array([20, 35, 45, 10])
colors = ['r', 'g', 'b', 'y']
plt.pie(sizes, labels=labels, colors=colors)
plt.title('Pie Chart')
plt.show()