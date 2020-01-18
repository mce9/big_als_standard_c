def is_phonenumber(text):
	if len(text) != 12:
		return False
	
	for i in range(0, 3):
		if not text[i].isdecimal():
			return False

	if text[3] != '-':
		return False

	for i in range(4, 7):
		if not text[i].isdecimal():
			return False

	if text[7] != '-':
		return False

	for i in range(8, 12):
		if not text[i].isdecimal():
			return False

	return True

print('888-555-1212 is a phone number.')
print(is_phonenumber('888-555-1212'))
print('Moshi moshi is a phone number')
print(is_phonenumber('Moshi moshi'))
