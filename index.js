const express = require('express');
const mongoose = require('mongoose');
const bodyParser = require('body-parser');

const app = express();
const PORT = process.env.PORT || 3000;

// Connect to MongoDB Cloud Database
mongoose.connect('YOUR_MONGODB_CONNECTION_STRING', {
  useNewUrlParser: true,
  useUnifiedTopology: true,
});

// Create a schema for the forum posts
const postSchema = new mongoose.Schema({
  username: String,
  content: String,
});

const Post = mongoose.model('Post', postSchema);

app.set('view engine', 'ejs');
app.use(bodyParser.urlencoded({ extended: true }));

// Serve the homepage
app.get('/', async (req, res) => {
  const posts = await Post.find();
  res.render('index', { posts });
});

// Handle form submission
app.post('/addpost', async (req, res) => {
  const { username, content } = req.body;
  const post = new Post({ username, content });
  await post.save();
  res.redirect('/');
});

app.listen(PORT, () => {
  console.log(`Server is running on http://localhost:${PORT}`);
});
