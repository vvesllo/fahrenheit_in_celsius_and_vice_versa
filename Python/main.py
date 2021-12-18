option = input(
"""
Enter option:
\t1. Fahrenheit in Celsius
\t2. Celsius in Fahrenheit
"""
)

if option == "1":
	# Tc = 5/9 * (Tf - 32)
	Tf = int(input("Enter degrees in Fahrenheit:\n"))
	Tc = 5/9 * (Tf - 32)
	print(f"{Tf}F° = {Tc}C°")
elif option == "2":
	# Tf = 9/5 * Tc + 32
	Tc = int(input("Enter temperature in Celsius:\n"))
	Tf = 9/5 * Tc + 32
	print(f"{Tc}C° = {Tf}F°")
else:
	print(f"Invalid option: {option}")

input()