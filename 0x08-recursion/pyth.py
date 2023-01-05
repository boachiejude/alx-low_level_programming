def puts_recursion(s, i=0):
    if i >= len(s):
        print("\n")
        return
    print(s[i], end="")
    puts_recursion(s, i + 1)

puts_recursion("Puts with recursion")