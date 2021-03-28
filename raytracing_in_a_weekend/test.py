from PIL import Image

#img_path = "H:/coding/raytracing_in_a_weekend/raytracing_in_a_weekend/raytracing_in_a_weekend/test.ppm"
img = Image.open("H:/coding/raytracing_in_a_weekend/raytracing_in_a_weekend/raytracing_in_a_weekend/test.png")
#img = Image.open("H:/coding/raytracing_in_a_weekend/raytracing_in_a_weekend/raytracing_in_a_weekend/test.ppm")
#img.save("H:/coding/raytracing_in_a_weekend/raytracing_in_a_weekend/raytracing_in_a_weekend/test.jpg")

img.save("H:/coding/raytracing_in_a_weekend/raytracing_in_a_weekend/raytracing_in_a_weekend/test.jpg")
img.show()
