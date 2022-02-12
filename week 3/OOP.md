# Object Orientend Programming Assignment

#### [code](https://editor.p5js.org/daniaezz/sketches/ynVTZAsaZ)
#### [view on the web](https://editor.p5js.org/daniaezz/full/ynVTZAsaZ)
---
The inspiration behind this code is the ripples created when something touches the surface of the water. At first, I wanted to have the ripples produced only when the mouse is pressed however, I decided to make them produce automatically in addition to being produced on mouse press. The problems I ran into with regards to the design is that I didn’t know how to replicate how a ripple looks like. I hadn’t thought about changing the opacity till I realised I needed to find a way to make the ripples disappear gradually. Another problem that does not impact that output, but I thought would be helpful to have is removing the ripples that disappeared from the array.  I realised that the length of the array continued growing endlessly and feared that this would impact the performance of the code. After a few google searches on how to remove objects from an array, I decided to use a for loop and splice to reduce the size of the array.

