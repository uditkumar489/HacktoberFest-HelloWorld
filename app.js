const yargs= require('yargs')
const chalk = require('chalk');
const notes = require('./notes.js');
// const msg = getNotes();
// console.log(msg);
yargs.version('1.1.0')
//to add notes
yargs.command({
    command:'add',
    describe:'Add a new note',
    builder:{
        title:{
            describe:"Note title",
            demandOption : true,
            type: 'string'
        },
        body:{
            describe:'write your note here',
            demandOption: true,
            type:'string'
        }
    },
    handler(argv) { notes.addNote(argv.title,argv.body)}
    
})
//to remove notes
yargs.command({
    command:'remove',
    describe:'to remove the note',
    handler: function(argv){
        notes.removeNote(argv.title)}
})
//to list notes
yargs.command({
    command: 'list',
    describe:'to list the notes',
    handler: function(){ notes.listNote()}
})
//to read notes
yargs.command({
    command:'read',
    describe:'read the note',
    handler(argv) { notes.readNote(argv.title)}
})
yargs.parse()
//console.log(yargs.argv)//this command returns the handler function value












// add = require('./utils.js');
// //fs.writeFileSync('notes.txt','this is done by node.js');//thisWasForWritingfreshMessageeverytime
// //fs.appendFileSync('notes.txt','So I am trying to append the messages');
// const sum = add(4,-2);
// console.log(sum);