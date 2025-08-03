Got it! Here's a clean and simple `README.md` for your **Crypotnix** project — no credits, no license, just the essentials:

---

### 📄 `README.md`

```markdown
# 🔐 Crypotnix - Custom Cipher Language

**Crypotnix** is a symbolic cipher language that encodes English letters into unique symbol+number combinations. It is implemented in C with separate files for encoding, decoding, and the main interface.

---

## 📁 Project Structure

```

crypotnix/
├── main.c         // Menu and user interaction
├── encoder.c      // Encoding logic
├── decoder.c      // Decoding logic
├── encoder.h      // Shared function declarations
└── README.md      // Project description

````

---

## 🔤 Crypotnix Cipher Table

| Letter | Code |   | Letter | Code |   | Letter | Code |
|--------|------|---|--------|------|---|--------|------|
|   A    |  @1  |   |   J    |  !0  |   |   S    |  }9  |
|   B    |  #2  |   |   K    |  ~1  |   |   T    |  <0  |
|   C    |  $3  |   |   L    |  `2  |   |   U    |  >1  |
|   D    |  %4  |   |   M    |  +3  |   |   V    |  /2  |
|   E    |  ^5  |   |   N    |  -4  |   |   W    |  ?3  |
|   F    |  &6  |   |   O    |  =5  |   |   X    |  :4  |
|   G    |  *7  |   |   P    |  [6  |   |   Y    |  ;5  |
|   H    |  (8  |   |   Q    |  ]7  |   |   Z    |  |6  |
|   I    |  )9  |   |   R    |  {8  |   |        |      |

- Case-insensitive
- Only letters are encoded; other characters remain unchanged

---

## ⚙️ Build Instructions

```bash
gcc main.c encoder.c decoder.c -o crypotnix
````

---

## ▶️ Run the Program

```bash
./crypotnix
```

Choose to encode or decode a message and follow the prompts.

---

## 🧪 Example

```
Welcome to Crypotnix
1. Encode
2. Decode
Enter your choice: 1
Enter text (no spaces): HELLO
Encoded: (8^5`2`2=5
```

