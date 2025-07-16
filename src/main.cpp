import os

def delete_file():
    filename = input("Enter the file name to delete: ")
    # 🚨 Vulnerability: Unsanitized user input in shell command
    os.system(f"rm {filename}")

if __name__ == "__main__":
    delete_file()
