import random
import string 	# provides access to string constants containing different character groups 

# random strong password generator 

num = random.randint(1, 10)

print(num)   
 

# define password characteristics 
password_length = 12
lower_case = string.ascii_lowercase
upper_case = string.ascii_uppercase
digits = string.digits
symbols = string.punctuation

letters = string.ascii_letters   

char = 'B'
if char in letters:
	print(f"{char} is an alphanumeric character in string.ascii_letters")  


all_possible_chars = lower_case + upper_case + digits + symbols 
password = ""

for _ in range(password_length): 
	# fill empty password var by using random.choice() to return a randomly selected element from the specified sequence 
	password += random.choice(all_possible_chars)   

print(f"Your random password is: {password}")