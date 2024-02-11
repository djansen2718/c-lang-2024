dct = dict();

dct["z"] = "value for z"
print(dct)
print(dct["z"])


dct["a"] = "A"
dct["j"] = "J"
dct["m"] = "M"
dct["x"] = "X"

print(dct)
print("Lenth of dct: " , len(dct))

print("z", dct.get("z",404))
print("y", dct.get("y", 404))

print("\n\n Dump...")
for key in dct:
  print(key + " = " + dct[key])