
var d=new Date();
console.log([d.getDate(), d.getMonth()+1, d.getFullYear()].join('/'));

function clock(){

    var fullDate = new Date();
    var hrs=fullDate.getHours();
    var min=fullDate.getMinutes();
    var sec=fullDate.getSeconds();

    var week=["Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"];
    var day=fullDate.getDate();
    var month=fullDate.getMonth()+1;
    var year=fullDate.getFullYear();
    var weekday=fullDate.getDay();
    
    if(hrs<10){
        hrs="0"+hrs;
    }

    if(min<10){
        min="0"+min;
    }

    if(sec<10){
        sec="0"+sec;
    }


    if(day<10){
        day="0"+day;
    }

    if(month<10){
        month="0"+month;
    }


    document.getElementById('hrs').innerHTML=hrs;
    document.getElementById('mins').innerHTML=":"+min;
    document.getElementById('secs').innerHTML=":"+sec;


    document.getElementById('day').innerHTML=day;
    document.getElementById('month').innerHTML="/"+month;
    document.getElementById('year').innerHTML="/"+year;
    
    document.getElementById('weekday').innerHTML=week[weekday];
    
}

setInterval(clock,1000);
