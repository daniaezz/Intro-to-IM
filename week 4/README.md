# Generative Text Art
## inspired by [text rain](http://camilleutterback.com/projects/text-rain/)

[code](https://editor.p5js.org/daniaezz/sketches/_WNj7mjO0)

[full screen](https://editor.p5js.org/daniaezz/full/_WNj7mjO0)

---


For this project, I struggled coming up with an idea for a generative text art work. Initially I had the idea to animate the text in such a way that the animation would loop however that idea seemed static and uninspiring. Hence I started searching for ideas and stumbled across the interactive art work known as “Text Rain”. Text Rain consisted of poems about people’s relationships with their bodies, it broke down the poems into letters and displayed falling down like rain. As the user interacted with the projection, the letters would stop on top of them. Occasionally the audience would be able to form words using the letters. I thought this piece was an interesting way to portray interactive text as people would usually regard text as something with no interactivity. 

The text I chose for this assignment was completely random. I started out by breaking the text down into a list of alphabets and removing any unnecessary characters like commas and empty spaces. Then I created a class for the letters to be able to move them down easily. I used for loops to create an instance of the class for each letter in the chosen text. I wanted each letter to have different speeds and for some to appear closer than others. I did this by choosing random speeds and making some of the letters larger than the others. 

As I tried the algorithm, I realised that it slowed down as it kept running. This was because I kept adding more letters on display without removing the ones that had already passed the borders of the screen. To solve this problem I used a for loop that would remove the letters that can't be seen from the list of displayed letters. 

Another thing I struggled with was making the text stop. At first I decided to make a class function that would stop the text and this function would be triggered when the mouse is pressed. However this didn't work as the function to make the text go down was still in use. I decided to use a variable to make the text stop, when the variable is 0 the text would go down as usual and when it is 1 the pressed letters would stop. I decided to increase the radius of the stopped text so that the user might be able to form words using more than stopped letters since the letters would continue falling when the mouse is released and it would be harder to form words.  

I really enjoyed working on this assignment especially since it illuminates interactive text in such a way that everyone has a different experience interacting with this project and depending on where and when they press/release new words would be made even if they were not present in the used text.

<!-- ![Uploading Screen Shot 2022-02-21 at 1.22.14 AM.png…]() -->
<img width="703" alt="Screen Shot 2022-02-21 at 1 22 57 AM" src="https://user-images.githubusercontent.com/90758857/154864828-2b264889-e98d-420a-8455-5fbd2fe6785c.png">


https://user-images.githubusercontent.com/90758857/154864891-39c4a4da-6160-491e-9633-f6cd22c51c55.mov

