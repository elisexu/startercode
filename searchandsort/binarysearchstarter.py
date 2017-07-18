import csv
import string

# Open the CSV File and read it in.
f = open('countries.csv')
data = f.read()

# Split the data into an array of countries.
countries = data.split('\n')

length = len(countries)
print(countries[1])
print(countries)

# START SEARCH ALGORITHM HERE
# Take user input for a country they want to find, and use binary search to find that country. If the 
# user enters a country that isn't in your list, your program should handle that accordingly.
