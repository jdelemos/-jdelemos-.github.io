// Function to test JS functionality
function helloWorld() {
    alert("Hello, world!");
}

// Function to increase text size
function makeTextBigger() {
    let textArea = document.getElementById("textInput");
    textArea.style.fontSize = "24pt";
}

// Function to apply FancyShmancy or BoringBetty styling
function applyStyle() {
    let textArea = document.getElementById("textInput");
    let fancy = document.getElementById("fancy").checked;

    if (fancy) {
        textArea.style.fontWeight = "bold";
        textArea.style.color = "blue";
        textArea.style.textDecoration = "underline";
    } else {
        textArea.style.fontWeight = "normal";
        textArea.style.color = "black";
        textArea.style.textDecoration = "none";
    }
}

// Function to uppercase text and add "-Moo" to last words of sentences
function mooifyText() {
    let textArea = document.getElementById("textInput");
    let text = textArea.value.toUpperCase();

    let sentences = text.split(".");
    text = sentences.map(sentence => {
        let words = sentence.trim().split(" ");
        if (words.length > 0) {
            words[words.length - 1] += "-Moo";
        }
        return words.join(" ");
    }).join(". ");

    textArea.value = text;
}
