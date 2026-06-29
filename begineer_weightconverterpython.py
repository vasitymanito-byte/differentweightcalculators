user_number = int(input("Please enter how many time you want the program to run: "))
while(user_number != 0):

    for user_number in range(4):
        weight = int(input("Please type your weight: "))
        weight_choice = input("(L)bs or (K)g: ")
        if weight == 00:
            break

        if weight_choice.upper() == "L":
            converted = weight / 2.20462
            print(f"You are {converted:.2f} kilos")
        elif weight_choice.upper() == "K":
            converted = weight * 2.20462
            print(f"You are {converted:.2f} lbs")
        else:
            print("Invalid choice. Please enter 'L' for Lbs or 'K' for Kg.")