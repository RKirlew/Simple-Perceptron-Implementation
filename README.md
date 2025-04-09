# 🧠 Simple Perceptron in C++

This project is a basic implementation of a **Perceptron**, one of the earliest types of artificial neural networks, using **C++**. It demonstrates how individual inputs with associated weights can be combined, passed through an activation function, and used to simulate decision-making — just like a biological neuron.

---

## 📜 History: Frank Rosenblatt and the Perceptron

**Frank Rosenblatt** (1928–1971) was an American psychologist and a pioneer in the field of **Artificial Intelligence**.

In **1957**, Rosenblatt developed the **Perceptron**, one of the first models of an artificial neural network, on an **IBM 704 computer** at the **Cornell Aeronautical Laboratory**.

Inspired by the way neurons work in the human brain, Rosenblatt proposed that:

- Neurons receive **electrical signals** as input.
- They process and **store information**.
- And based on this input and learned weights, they make **decisions**.

His Perceptron model introduced the idea of **weighted input values**, a **threshold**, and a **binary output** (0 or 1). When the weighted sum of inputs exceeds the threshold, the Perceptron “fires” — producing a `1`; otherwise, it outputs `0`.

This simple idea laid the foundation for the field of **neural networks and deep learning**.

---

## 🧩 How It Works

This C++ program creates a `Perceptron` class with:

- **Inputs**: A vector of `BNode` objects, each containing a `value` and a `weight`.
- **Bias**: A small constant added to the sum to shift the decision boundary.
- **Threshold**: The value the weighted sum must exceed for the Perceptron to activate.
- **Methods**:
  - `calculate()` – computes the weighted sum + bias.
  - `activate()` – returns `1` if the sum is ≥ threshold, else `0`.

---

## 🧪 Example Run

```cpp
BNode input1(1.0f, 0.7f);
BNode input2(0.5f, 0.4f);
std::vector<BNode> inputs = {input1, input2};

Perceptron p(0.2f, 1.5f, inputs);

float result = p.calculate();  // outputs: Weighted Sum + Bias = ...
int output = p.activate();     // outputs: Activated or Not Activated
```

---

## 📁 File Structure

```bash
.
├── BNode.h          # Simple struct with input value and weight
├── Perceptron.h     # Perceptron class declaration
├── Perceptron.cpp   # Perceptron method definitions
├── main.cpp         # Main entry point to test the perceptron
├── README.md        # This file
```

---

## 🚀 How to Compile

Using `g++`:

```bash
g++ main.cpp Perceptron.cpp -o perceptron
./perceptron
```

---

## 🧠 Concepts Covered

- Weighted inputs
- Activation threshold
- Binary output (step function)
- Object-oriented C++ design
- Simple neural network fundamentals

---

## 📚 Further Reading

- [Wikipedia: Perceptron](https://en.wikipedia.org/wiki/Perceptron)
- [History of AI: Frank Rosenblatt](https://en.wikipedia.org/wiki/Frank_Rosenblatt)

---

Feel free to improve or expand this into a multi-layer perceptron in the future!
