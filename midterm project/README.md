# Midterm project
---
### Sunday 27 Feb update
I have finalized the story for the game I will be making. The story will have the user as a character that woke up to find themselves turning into a chicken. To turn back into a human, the chicken boy seeks help from a witch but the witch has a condition, the chicken must find the witch’s cat. 
To stop themselves from turning into a chicken forever, they must collect human items such as books. And if they collect items like eggs they lose human points. The user should collect these times before time runs out or the game will be lost. 
 
The sprites I will be using in this project are made by 9E0 on itch.io and the font for text will be Press Start 2P from fonts.google.com

For now, I have started by importing the assets and loading them into the sketch. this includes loading the sprites and running them as well as testing out that the font works. 

[link to the editior](https://editor.p5js.org/daniaezz/sketches/ZxQcNvoE3) 


<img width="707" alt="Screen Shot 2022-02-27 at 12 40 58 PM" src="https://user-images.githubusercontent.com/90758857/155875163-9076c6f3-58c9-45ae-ba61-db1e1dc35c64.png">


# Final Project Documentation

## [play it](https://editor.p5js.org/daniaezz/full/U-2Sr8tZR)
## [code](https://editor.p5js.org/daniaezz/sketches/U-2Sr8tZR)
---
### Disclaimer
The sprites and backgrounds used in this project do not belong to me. they were obtained from itch.io. credits to [9E0](https://9e0.itch.io/) on itch.io for the sprites. The background was made by [saukgp](https://saurabhkgp.itch.io/) and this is the link to the [background](https://saurabhkgp.itch.io/pixel-art-forest-background-simple-seamless-parallax-ready-for-2d-platformer-s)



### Inspiration
For this assignment, I started out by looking for a sprite of a pixel cat that I can use for the game. From there I stumbled upon a few other sprites that I really liked and decided to make up a story using these sprites. The story I came up with was the story of a boy who turned into a chicken and to turn back into a human he must find the witch’s cat. Initially I thought of having the game. I decided to make the game into a maze because it felt like it would compliment the story well. 


### Sprites
I started out by loading the sprites. I struggled to find a way to reflect the images so that they would be in the proper orientation depending on whether the user is moving to the right or left. I tried using push(); and pop(); and translating the origin to the x and y coordinates of the image then using scale (-1, 1) to reflect it, however this didn't work as the image would translate to a different position every time the user switched sides. To solve this problem I decided to simply reflect the images myself and made a different png for each orientation. 


### User input processing 
Initially, I used keyCode to detect user input and generate an outcome depending on that input. But I quickly found out that keyCode was inaccurate as the sprites would continue moving for a very short amount of time after the key was released. And it also proved to be problematic when registering the movement of 2 buttons at the same time, for example the up and left arrow for jumping. To avoid these problems I used a dictionary in the chiken class (where I did most of the collision detection and input processing) along with the function isPressed() to change the values in this dictionary. This solution seemed more reliable than using keyCode alone and provided a smoother experience. 

### Game Class
I did not create this class until I realised that restarting the game became extremely difficult as I would have to run almost everything in the set up each time I wanted to restart the game. From there the game class was born. I added almost everything that I had in the setup function initially and instead ran these functions in the setup and again when restarting the game. This class helped me cut down on a considerable amount of code. However I think I could've used functions instead of classes and still achieve the same results and make the code cleaner. 

### Chiken class
Although running all the checks through the Chiken class is probably not the most efficient or reliable method, I found it easier to do checks in the class rather than the display function. I created the platform check and the blockers check in the chicken class and then ran these checks in a display function for the class and this function was running in the drae function of the sketch.

### Platform and blocker classes
These were the most helpful classes as I had to create multiple instances of each of these objects to create the maze. I appended these objects into an array and iterated through this array to display these objects. 


### Standing problems
The only issue I still haven't found a solution for is a diagonal check for the blocker. The user will be able to pass through the blockers if they approach it from an edge. I tried solving 
this problem by placing platforms on top of the blockers instead of beside them but I have not found another solution for this. 


## Images from the game (SPOILER WARNING)

<img width="1242" alt="Screen Shot 2022-03-10 at 6 10 19 PM" src="https://user-images.githubusercontent.com/90758857/157679608-5cd65074-91bb-4271-9617-2aafcc1b932a.png">


<img width="1245" alt="Screen Shot 2022-03-10 at 6 10 54 PM" src="https://user-images.githubusercontent.com/90758857/157679927-01b8cd45-f8ff-4928-9728-b92c00462ae7.png">
 


<img width="522" alt="Screen Shot 2022-03-10 at 6 12 34 PM" src="https://user-images.githubusercontent.com/90758857/157679962-8685526c-9e78-4ca8-8f9a-166eaf771cab.png">

<img width="1242" alt="Screen Shot 2022-03-10 at 6 11 47 PM" src="https://user-images.githubusercontent.com/90758857/157679975-57b78368-c31a-4509-ba7f-ba0d928eb242.png">
