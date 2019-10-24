# for any polygon set 'num_sides' variable
import turtle

polygon = turtle.Turtle()

num_sides = 8
side_length = 70
angle = 360.0 / num_sides

polygon.pencolor("red")
for i in range(num_sides):

    polygon.forward(side_length)
    polygon.right(angle)

turtle.done()
