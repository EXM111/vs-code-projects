# ==========================================
# 实验03 语法与变量类型2
# 姓名：李明（学号：2026002）
# ==========================================

# 先定义实验背景里给出的初始数据
name = "li ming"
purchase_id = 2026002
fruit_list = ["apple", "banana", "orange"]  # 水果名称列表
buy_counts = [2, 3, 1]                      # 购买数量列表
# 水果价格：苹果 4.0，香蕉 2.5，橙子 5.0
fruit_prices = {"apple": 4.0, "banana": 2.5, "orange": 5.0}
budget = 30.0                               # 采购预算


# ------------------------------------------
# 任务1：计算采购费用
# ------------------------------------------
print("========== 任务1：计算采购费用 ==========")

# 1. 计算采购总金额
# 公式：总金额 = (苹果单价 * 数量) + (香蕉单价 * 数量) + (橙子单价 * 数量)
# 这里直接用列表索引来算，方便新手理解：0是苹果，1是香蕉，2是橙子
total_cost = (fruit_prices["apple"] * buy_counts[0]) + \
             (fruit_prices["banana"] * buy_counts[1]) + \
             (fruit_prices["orange"] * buy_counts[2])

print(f"采购总金额为：{total_cost} 元")

# 2. 计算剩余预算
remaining_budget = budget - total_cost
print(f"剩余预算为：{remaining_budget} 元")

# 3. 计算水果装袋数量（使用整除运算符 //，10个装一袋吧，假设每袋最多装2个水果）
# 实验要求里写“计算水果装袋数量”，这里假设每袋装2个水果（为了演示算术运算符）
total_fruits = sum(buy_counts) # 总水果数量
bags = total_fruits // 2       # 使用 // 整除运算符
print(f"一共买了 {total_fruits} 个水果，每袋装2个，可以装 {bags} 袋。")

# 4. 比较运算符和逻辑运算符：判断是否超出预算
is_over_budget = total_cost > budget
# 逻辑运算符演示：既没超预算，且剩余的钱还能买一个苹果
can_buy_more = (total_cost < budget) and (remaining_budget >= fruit_prices["apple"])
print(f"是否超出预算：{is_over_budget}")
print(f"是否还能再买一个苹果（逻辑与运算）：{can_buy_more}")

# 5. 演示运算符优先级
# 使用括号和不使用括号的对比，括号的优先级最高
calc_test1 = 2 + 3 * 4     # 先乘除后加减，结果是 14
calc_test2 = (2 + 3) * 4   # 括号优先，结果是 20
print(f"运算符优先级测试：2+3*4={calc_test1}，(2+3)*4={calc_test2}")


# ------------------------------------------
# 任务2：处理采购数据
# ------------------------------------------
print("\n========== 任务2：处理采购数据 ==========")

# 1. 使用 zip() 将水果名称与购买数量配对
# zip 返回的是一个迭代器，为了方便查看，转换成列表或者字典
fruit_pairs = list(zip(fruit_list, buy_counts))
print("zip配对结果：", fruit_pairs)

# 也可以转换成字典，方便后续通过名字查数量
fruit_buy_dict = dict(zip(fruit_list, buy_counts))
print("转换为字典：", fruit_buy_dict)

# 2. 使用 eval() 计算预先给定的算术表达式
# 模拟一个表达式字符串，比如算一下总价折扣
expression = "4.0 * 2 + 2.5 * 3 + 5.0 * 1"
eval_result = eval(expression) # eval 可以把字符串当成代码来运行
print(f"使用eval计算表达式 '{expression}'，结果是：{eval_result}")


# ------------------------------------------
# 任务3：管理水果价格
# ------------------------------------------
print("\n========== 任务3：管理水果价格 ==========")

# 1. 使用 get() 和 setdefault() 查询、添加价格
# 查询已存在的价格（苹果）
apple_price = fruit_prices.get("apple", 0.0)
print(f"查询苹果价格（get）：{apple_price}")

# 查询不存在的价格（比如西瓜 watermelon），返回设置的默认值 0.0
watermelon_price = fruit_prices.get("watermelon", 0.0)
print(f"查询西瓜价格（get，不存在）：{watermelon_price}")

# 使用 setdefault() 添加一个新水果价格（如果没有则添加并返回新值，如果有则返回原值）
# 添加西瓜价格 6.5
fruit_prices.setdefault("watermelon", 6.5)
print(f"使用 setdefault 添加西瓜后，西瓜价格：{fruit_prices['watermelon']}")
print(f"现在的水果价格字典：{fruit_prices}")

# 2. 普通字典与 OrderedDict 的区别
# 自 Python 3.7 起，普通字典默认就是有序的（插入顺序），所以两者在顺序上表现一致
# 但是 OrderedDict 在相等性判断上更严格，它要求顺序也完全一致才算相等
from collections import OrderedDict

dict1 = {"a": 1, "b": 2}
dict2 = {"b": 2, "a": 1}

# 普通字典只比较内容，不比较顺序
print(f"普通字典 dict1 == dict2 : {dict1 == dict2}") # True

odict1 = OrderedDict([("a", 1), ("b", 2)])
odict2 = OrderedDict([("b", 2), ("a", 1)])
# 有序字典不仅比较内容，还会比较顺序
print(f"OrderedDict odict1 == odict2 : {odict1 == odict2}") # False


# ------------------------------------------
# 任务4：输出采购账单
# ------------------------------------------
print("\n========== 任务4：输出采购账单 ==========")

print("=" * 30)
print("          采购账单")
print("=" * 30)
print(f"姓名：{name}")       # 字符串格式化
print(f"编号：{purchase_id}")
print("-" * 30)
print(f"{'水果名称':<8} {'购买数量':<8} {'单价(元)':<8}")
print("-" * 30)

# 使用 zip 循环输出每种水果的信息
for fruit, count in zip(fruit_list, buy_counts):
    price = fruit_prices.get(fruit, 0.0)
    print(f"{fruit:<10} {count:<12} {price:<10}")

print("-" * 30)
print(f"采购总金额：{total_cost:.2f} 元")
print(f"剩余预算：  {remaining_budget:.2f} 元")
print("-" * 30)

# 判断输出
if is_over_budget:
    print("警告：您的采购已经超出预算！")
else:
    print("恭喜：您的采购在预算范围内。")
print("=" * 30)


# 思考题 1：普通字典和 OrderedDict 在 Python 3.7 之后还有区别吗？

# 解答： 在 Python 3.7 及之后的版本中，普通字典已经保证了插入顺序（即遍历时按放入的顺序输出），所以在顺序表现上它们几乎一样。
# 但是，它们有一个核心区别：OrderedDict 在判断两个字典是否相等时，不仅要求内容一样，还要求顺序完全一致，
# 而普通字典只要内容一样就判定为相等。在做严格顺序比较的场景下，OrderedDict 仍然有用。



# 思考题 2：在任务2中，我们使用了 zip() 函数将水果名称和数量配对。
# 请问 zip() 函数返回的是什么类型的数据？如果两个列表的长度不一样，zip() 会怎么处理？

# 解答：
# zip() 函数返回的是一个迭代器（zip对象），而不是列表。
# 所以我们在代码里用 list() 把它转换成列表，或者用 dict() 转换成字典才能直观地看到结果。
# 如果传入的两个列表长度不一样，zip() 会以较短的列表为准，多余的元素会被直接忽略掉（截断）。
# 比如 zip([1, 2, 3], ['a', 'b']) 的结果只能是 (1, 'a') 和 (2, 'b')，数字 3 会丢失。



# 思考题 3：任务3中代码 fruit_prices.get("watermelon", 0.0) 里的第二个参数 0.0 有什么作用？如果省略它会怎样？

# 解答： 第二个参数 0.0 是默认返回值。它的作用是：当字典中查不到 "watermelon" 这个键时，不报错，
# 而是返回我们指定的 0.0。如果省略这个参数（写成 fruit_prices.get("watermelon")），查不到时会默认返回 None。
# 这样做的好处是可以避免代码因为找不到键而崩溃（报 KeyError 错误）。