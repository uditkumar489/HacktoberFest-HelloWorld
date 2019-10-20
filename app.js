require('dotenv').config();
const app = require('express')();
const mongoose = require('mongoose');
const bodyParser = require('body-parser');
const logger = require('morgan');
const cors = require('cors');

// Local Imports
const UserRouter = require('./routes/user.router');

// DB Connection
mongoose.connect(`mongodb://localhost/algofocus`)
    .then(() => console.log('*Connected to DB'))
    .catch((err) => console.log(err));

// Middlewares
app.use(cors());
app.use(logger('dev'));
app.use(bodyParser.json());


// Routes
app.use('/user', UserRouter);

// Server
app.listen(process.env.PORT, process.env.HOST, () => {
    console.log(`*Server running on port ${process.env.PORT}...`);
});