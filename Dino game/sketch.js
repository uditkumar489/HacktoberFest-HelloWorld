var dino;
var gameOver=0;
var plants = [];
var distan =0
var count;//Distance b/w plants
function setup() {
  // put the initial conditions here
  createCanvas(1500,750);
  dino = new Dino();
  plants.push(new Plant());



}

function draw() {
  // drawing code


  background(0);
  dino.show();
  dino.update();
  fill(0);
  stroke(200);
  line(0,565,1500,565);
  textSize(32);
  fill(40,200,40);
  text("Impact :",100,100);
  text(gameOver,230,100);
  textSize(25);
  text("Press space to jump",1200,100);
  text("Distance :",1200,150);
  text(distan,1330,150);
  count =random(54,56);
  count =floor(count);
  console.log(count);
  if(frameCount % count == 0){
    plants.push(new Plant());
    distan+=10;

  }
  for(var i=plants.length-1; i>=0; i--){
    plants[i].show();

    plants[i].update();
    if( dino.y+15 > 565-plants[i].h && plants[i].x==60 ){
     gameOver+=1;
    }

    if (plants[i].offScreen()){
      plants.splice(i,1);
    }

  }
}

function keyPressed(){
  if(key == " "){
     if(dino.y==550){
      dino.velocity=12;
     }
  }
}
