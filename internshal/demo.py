

import rembg
def remove_background(image_path):
    try:
        with open(image_path, "rb") as input_file:
            input_data = input_file.read()
        output_data = rembg.remove(input_data)
        return Image.open(io.BytesIO(output_data))
    except Exception as e:
        messagebox.showerror("Error", f"Failed to remove background: {e}")
        return None

