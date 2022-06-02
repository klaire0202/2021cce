PImage img,img2;
void setup()
{
  size(600,600);
  img=loadImage("123.jpg");
  img2=loadImage("321.png");
}
int dy=0;
void draw()
{
  background(255);
  imageMode(CENTER);
  image(img,mouseX,mouseY);
  if(mousePressed)
  {
    image(img2,mouseX,mouseY-dy);
    dy++;
  }
}
