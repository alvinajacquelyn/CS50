num = input("Number: ")

def luhn_algo():
    ###num = 4003600000000014
    new_num = ""
    total = 0
    for i in range(len(num)-1,-1,-1):
        each_num = int(num[i])
        if i %2 == 0:
            new_char = each_num *2
            if new_char > 9:
                new_char = str(new_char)
                for j in range(len(new_char)):
                    separate_char = int(new_char[j])
                    total+=separate_char
            else:
                total+= new_char

        else:
            new_char  = each_num
            total += new_char

    #print(total)
    if total%10 == 0:
        return num

    else:
        return "INVALID"

luhn_algo()

first_digit = int(num[0])
second_digit = int(num[1])
if first_digit == 4 and (len(num) == 16 or len(num) == 13):
    print("VISA")

elif len(num) == 16:
    print("MASTERCARD")

elif len(num) == 15 and (first_digit == 3 and (second_digit ==4 or second_digit ==7)):
    print("AMEX")

else:
    print("INVALID")



