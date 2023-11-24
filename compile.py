import subprocess

def compile_c_program(c_file_path, output_file_path):
    try:
        # Compile the C program using gcc (we will check later for gcc if installed)
        subprocess.check_output(['gcc', c_file_path, '-o', output_file_path])
        print(f"Compiled {c_file_path} successfully! Executable saved as {output_file_path}")
    except subprocess.CalledProcessError as e:
        #Print the error message (If compilation failed)
        print(f"Compilation failed:( :  {e}")

# Example usage: compile 'WiPowerButton.c' and save the executable as 'WiPowerButton' (Will add arguments To this script later to make it more flexible)
compile_c_program('WiPowerButton.c', 'WiPowerButton')
