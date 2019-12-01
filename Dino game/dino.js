function Dino(){
 this.y=550;
 this.x=60;
 this.gravity =.5;
 this.velocity=12;
 
 this.show = function(){
  fill(200,40,60);
  ellipse(this.x ,this.y, 30, 30);
 }

 this.update =function(){
   this.velocity-=this.gravity;
   this.y-=this.velocity;

   if(this.y>550){
     this.velocity=0;
     this.y=550;
   }
 }
}
