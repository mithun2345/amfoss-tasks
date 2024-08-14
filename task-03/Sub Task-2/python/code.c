
with open('input.txt', 'r') as input_file:
    content = input_file.read()
with open('output.txt', 'a') as output_file:
    output_file.write(content)

print(" successfully copied from input to output")
