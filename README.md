# DS — Data Structures (Lab)

Lab work for the **Data Structures** course as part of my B.E. in Artificial Intelligence & Data Science at Vidyavardhini College of Engineering & Technology (Mumbai University).

All experiments are implemented in **C** and cover the foundational linear data structures.

## Experiments

| # | Topic | File |
|---|---|---|
| 1 | Stack implementation using arrays | [`Ex_01/STACK_ARRAY_IMPL.c`](Ex_01/STACK_ARRAY_IMPL.c) |
| 2 | Infix → postfix conversion (stack application) | [`Ex_02/CON_INF_TO_POST.c`](Ex_02/CON_INF_TO_POST.c) |
| 3 | Postfix expression evaluation | [`Ex_03/EVAL_POST.c`](Ex_03/EVAL_POST.c) |
| 4 | Linear queue using arrays | [`Ex_04/LIN_Q_ARR_IMPL.c`](Ex_04/LIN_Q_ARR_IMPL.c) |
| 5 | Circular queue using arrays | [`Ex_05/CIR_Q_ARR_IMPL.c`](Ex_05/CIR_Q_ARR_IMPL.c) |
| 6 | Singly linked list — insertion, deletion, traversal | [`Ex_06/SIN_LL.C`](Ex_06/SIN_LL.C) |

## Compile & run

Any standard C compiler works:

```bash
gcc Ex_01/STACK_ARRAY_IMPL.c -o stack
./stack
```

For each experiment, navigate to its folder and follow the same pattern.

## Concepts demonstrated

- Stack operations (`push`, `pop`, `peek`) and a real application (expression conversion & evaluation)
- Queue variants — linear vs. circular — and the rationale behind circular queues
- Pointer-based dynamic memory allocation for linked structures
- Standard input parsing in C

---

*Coursework reference repository. Not intended as a portfolio project — see my pinned repos for production-grade work.*
