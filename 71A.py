#Sri Rama Jayam
t = int(input())
l_res = []
for i in range(t):
    s = input()
    s_new = ""
    if len(s)>10:
        s_new = s[0]+str(len(s)-2)+s[len(s)-1]
    else:
        s_new = s
    l_res.append(s_new)

for i in l_res:
    print(i)
