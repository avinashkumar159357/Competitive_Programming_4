#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int n,sum_of_pts=4;
long long edge_pts=sum_of_pts/2;
void solve(){
    cin>>n;  
    while (n--)
    {
        edge_pts=edge_pts+(edge_pts-1);
    }
    cout<<edge_pts*edge_pts; 
}    
    /*never use pow funciton
pow() returns a double.

For large values this causes precision errors, so some test cases fail.

Example:

pow(33,2) → 1088.999999

Then it prints wrong after implicit conversion.*/
    


int main() {
    ios :: sync_with_stdio(0);
    cin.tie(0);
    
    int t=1;
    while(t--) {
        solve();
    }

}    


//////////////////////////////////////////////////////////////////////
7️⃣ Contest Implementation (Fastest)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long side = (1LL << n) + 1;
    cout << side * side;
}
```
////////////////////////////////////////////////
/*Here is the **contest shortcut** many experienced **Codeforces** coders use to detect this formula instantly.

---

# 🧠 The “Resolution Doubling” Trick

Whenever you see:

* a **square**
* **midpoints added**
* the square divided into **4 smaller squares**
* the process repeated **n times**

Think of it as **doubling the resolution of a grid**.

---

# 1️⃣ Start With Segments

Initial square:

```
•------•
|      |
|      |
•------•
```

Segments per side:

```
1
```

Points per side:

```
2
```

---

# 2️⃣ What Midpoints Actually Do

Adding a midpoint **splits every segment into two**.

So each iteration:

```
segments = segments × 2
```

---

# 3️⃣ After n Iterations

```
segments = 2^n
```

---

# 4️⃣ Convert Segments → Points

If a line has `k` segments, it has:

```
k + 1 points
```

So:

```
points_per_side = 2^n + 1
```

---

# 5️⃣ Total Points

Because it's a square grid:

```
total_points = (points_per_side)^2
```

Final result:

[
(2^n + 1)^2
]

---

# 6️⃣ The 5-Second Contest Method

When reading the problem:

1. See **square subdivision**
2. Think **resolution doubles**
3. Write immediately

```
side = 2^n + 1
answer = side * side
```

No loops needed.

---

# 7️⃣ Visual Pattern (Good to Memorize)

| Iteration | Points per side | Total points |
| --------- | --------------- | ------------ |
| 0         | 2               | 4            |
| 1         | 3               | 9            |
| 2         | 5               | 25           |
| 3         | 9               | 81           |
| 4         | 17              | 289          |
| 5         | 33              | 1089         |

Notice:

```
2 → 3 → 5 → 9 → 17 → 33
```

Each step:

```
next = previous*2 - 1
```

---

# 8️⃣ Fastest C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long side = (1LL << n) + 1;
    cout << side * side;
}
```

Key trick:

```
1LL << n = 2^n
```

---

# ⚡ Pro Competitive Programming Tip

Whenever a problem involves:

* **adding midpoints**
* **grid refinement**
* **terrain generation**
* **fractal subdivision**

Try checking:

```
2^n
2^n + 1
4^n
```

Many ICPC / Codeforces problems secretly reduce to one of these.

---

If you'd like, I can also show you a **very famous ICPC geometry trick where `(2^n + 1)^2` appears again but the problem looks completely different**. It's a great pattern to know.
*/