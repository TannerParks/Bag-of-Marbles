# Bag-of-Marbles

A marble can be defined by the following properties:
* Color
* Size    (small or large)
* Design  (clear, sparkly, galaxy, etc.)
* Material  (glass or plastic)

I wanted to make a class for marbles with the above properties but C++ is a lot different than what I'm used to and I didn't have enough time to implement it so the marbles are only represented by colors in this project and then those colors are put into a list called "bag". 

Marbles are added by asking the user to type in a color from the given list then I used bag.push_back(color) to add that color to the list.

To remove marbles I needed to iterate through the list of marbles to remove only the first occurrence of that color. Once the first occurrence is found I used bag.erase(iter) to erase it from the list.

Since this program just saves strings to a list, I had to make sure that those strings were colors so if a user types in anything other than a color (like a number) the program will loop back around and tells them to make sure they entered a color. 

After subtracting marbles from an empty list the program doesn't loop back around to the menu. I think it might have something to do with it getting stuck at the iteration part of that code. A fix for this would be to have the program check the size of the list and if the list is empty have a message pop up that says "The bag is empty" then loop back around to the main menu.
