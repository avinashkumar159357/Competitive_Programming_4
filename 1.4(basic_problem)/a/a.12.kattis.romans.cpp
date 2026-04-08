#include<bits/stdc++.h>
#include<cmath>
using namespace std;

void solve(){
    double x;                  //this is a problem to trap you with floating point precision error
    cin >> x;
    double y = x * 5280000.0 / 4854.0;
    cout << (long long)round(y);

}

int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    

/*
# Key Lessons from This Problem

## 1️⃣ Floating-Point Numbers Are Not Exact

Computers store decimals in **binary**, so some numbers cannot be stored exactly.

Example:

```
20.267 → may become 20.266999999...
```

When you multiply by large numbers, the small error becomes larger.

**Takeaway:**
Floating-point calculations may give slightly wrong values.

---

## 2️⃣ Use the Correct Rounding Function

| Function   | Meaning                              |
| ---------- | ------------------------------------ |
| `ceil(x)`  | always round **up**                  |
| `floor(x)` | always round **down**                |
| `round(x)` | round to **nearest integer (.5 up)** |

In this problem the statement says **“closest integer (.5 rounded up)”**, so the correct choice is:

```
round()
```

---

## 3️⃣ Avoid Multiple Rounding Steps

Your earlier code rounded several times:

```
round → round → ceil
```

This can introduce extra errors.

**Better approach:**

1. Do the calculation.
2. Round **once at the end**.

---

## 4️⃣ Integer Arithmetic Is Often Safer

The input had **at most 3 decimal places**.

So instead of:

```
20.267
```

we can store:

```
20267
```

and do calculations using integers.

Benefits:

* No floating-point errors
* Exact rounding

This is a **very common competitive programming trick**.

---

## 5️⃣ Understand Compiler vs Logic Errors

Error you saw:

```
multiple definition of main
```

Meaning:

* There were **two `main()` functions**.
* A C++ program must have **only one `main()`**.

This is a **compilation error**, not a logic error.

---

## 6️⃣ Convert Problem Statements Into Math

From the problem:

```
1 English mile = 5280 feet
1 Roman mile = 4854 feet
1 Roman mile = 1000 paces
```

We derived:

```
paces = X × 5280000 / 4854
```

**Key skill:**
Text → Formula → Code.

---

# Simple Strategy for Similar Problems

If a problem has:

* decimals
* rounding
* precise output

Ask yourself:

1️⃣ Can I **avoid floating-point numbers**?
2️⃣ Can I **convert values to integers**?
3️⃣ Can I **round only once at the end**?
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = s.find('.');
    long long x;

    if (pos == string::npos)
        x = stoll(s) * 1000;
    else {
        string a = s.substr(0, pos);
        string b = s.substr(pos + 1);
        while (b.size() < 3) b += '0';
        x = stoll(a) * 1000 + stoll(b.substr(0,3));
    }

    long long num = x * 5280000;
    long long den = 4854 * 1000;

    cout << (num + den/2) / den << "\n";

}

//the above program is another safer way to do the above question problem (from chatgpt)