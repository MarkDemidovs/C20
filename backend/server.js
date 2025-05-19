const express = require('express')
const app = express();
const PORT = 5000;
const cors = require('cors');

app.use(cors())

app.get("/api/quote/", (req,res) => {
	res.json({quote: "Do not let your hearts be troubled. Trust in God; trust also in me."});
})

app.listen(PORT, () => {
	console.log("The server is running on port 5000 localhost.");
})
