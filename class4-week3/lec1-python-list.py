lst = list();

lst.append("Potato")
print(lst)

lst.append("Corn")
print(lst)

lst.append("Sassafrass")
print(lst)

print("Length: ", len(lst))

print("Potato?", lst.index("Potato"))
# print("Potatooooooo?", lst.index("Potatooooooo"))

if "Corn" in lst:
  print("Corn in lst")
else:
  print("Corn not in lst")


if "Coooooooorn" in lst:
  print("Coooooooorn in lst")
else:
  print("Coooooooorn not in lst")