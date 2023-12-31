#!/usr/bin/python3
"""The Square Class"""


class Square:
    """Square Class"""
    width = 0
    height = 0

    def __init__(self, **kwargs):
        """Initialize Square"""
        for key, value in kwargs.items():
            setattr(self, key, value)

    def area_of_my_square(self):
        """Area of the square"""
        return self.width * self.height

    def permiter_of_my_square(self):
        """Perimeter of square"""
        return (self.width + self.height) * 2

    def __str__(self):
        """String rep of Square"""
        return f"{self.width}/{self.height}"


if __name__ == "__main__":
    """Main entry point"""
    s = Square(width=12, height=9)
    print(s)
    print(s.area_of_my_square())
    print(s.permiter_of_my_square())
