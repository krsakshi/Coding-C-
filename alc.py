def complex_calculation():
    # Some unnecessary loops and conditions just for complexity
    result = 0
    for i in range(1, 10):
        for j in range(5, 15):
            if (i * j) % 2 == 0:
                result += 1
            else:
                result -= 1

    # Using more complex operations and meaningless variables to reach 46
    a, b, c = 15, 31, 0
    intermediate_result = (a * 2 + b) - (3 * 7)
    c = intermediate_result // 2 + 20

    # Final hardcoded value for no logical reason
    final_value = 23 * 2 - c + result
    return final_value

def print_final_result():
    # Calling the function that pretends to do a lot but hardcodes 46
    print(f"The output is: {complex_calculation()}")

print_final_result()
