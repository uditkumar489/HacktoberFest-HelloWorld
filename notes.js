const fs = require('fs')
const chalk = require('chalk')
//const getNotes= () => "Your notes...";



const addNote = function (title,body)
{
    
const notes = loadNotes()
//const duplicateNotes = notes.filter(function (notes){
//return notes.title === title})
const duplicateNote = notes.find((note) => note.title ===title)
if(!duplicateNote){
    
    notes.push({
        title: title,
        body: body
    })
    saveNotes(notes)
    console.log(chalk.green.inverse('note added!'))}
else{console.log(chalk.red.inverse('title already taken!'))}
    
}

const removeNote = function(title)
{
    const notes = loadNotes()
    const notesToKeep = notes.filter(function(notes){return notes.title !== title})
    saveNotes(notesToKeep)
    if(notesToKeep.length === notes.length)
    console.log(chalk.inverse.red("No note found!"))
    else 
    console.log(chalk.inverse.green("Note removed!"))
}


const saveNotes= function(notes)
{
    const dataJSON = JSON.stringify(notes)
    fs.writeFileSync('notes.json', dataJSON)
}


const loadNotes = function() 
{
    try {
        const dataBuffer = fs.readFileSync('notes.json')
        const dataJSON = dataBuffer.toString()
        return JSON.parse(dataJSON)
    } catch(e)
    {
        return [] 
    }
}

listNote = () => {
    console.log(chalk.magenta.inverse("Your Notes..."))
    const notes = loadNotes()
    notes.forEach(element => { console.log(chalk.cyanBright(element.title))
        
    });
}
 
readNote = (title) => {
    const notes = loadNotes()
    noteToRead = notes.find((note) => note.title === title)
    if(!noteToRead){
        console.log(chalk.red("No note found!"))
    } else{
    console.log(chalk.magenta(noteToRead.title))
    console.log(noteToRead.body)}
}


module.exports= 
{
     addNote : addNote,
     removeNote: removeNote,
     listNote: listNote,
     readNote : readNote
}