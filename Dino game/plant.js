function Plant(){
  this.x= width;

  this.w=20; //width
  this.h=random(80,130); //height
  this.speed = 15;
  this.show = function(){
    fill(200);
    noStroke();
    rect(this.x,565-this.h,this.w,this.h);

  }
  this.update = function(){
    this.x-=this.speed;
  }
  this.offScreen= function(){
    if(this.x < -this.w){
      return true;
    }else{
      return false;
    }

}
}
