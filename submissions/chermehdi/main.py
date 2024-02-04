with open("input.txt", "r") as input_file, open("output.txt", "w") as output_file:
    t = int(input_file.readline().strip())
    output_file.write(str(t * 2) + "\n")
