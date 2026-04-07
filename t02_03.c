// 12S25037 - Laura Lubis

#include <stdio.h>

typedef struct {
    char op;
    double accumulator;
    double initial;
    int count;
} Operation;

static double apply_operation(Operation *state, double value)
{
    if (state->op == '+') {
        state->accumulator += value;
    } else if (state->op == '-') {
        state->accumulator -= value;
    } else if (state->op == '*') {
        state->accumulator *= value;
    }
    return state->accumulator;
}

int main(int _argv, char **_argc)
{
    Operation state = {0, 0.0, 0.0, 0};
    if (scanf(" %c", &state.op) != 1) {
        return 0;
    }

    if (state.op == '+' || state.op == '-') {
        state.accumulator = 0.0;
        state.initial = 0.0;
    } else if (state.op == '*') {
        state.accumulator = 1.0;
        state.initial = 1.0;
    } else {
        return 0;
    }

    printf("%c\n", state.op);

    double value;
    while (state.count < 5 && scanf("%lf", &value) == 1) {
        if (value == -1.0) {
            printf("%.0f\n", value);
            printf("%.0f\n", 0.0);
            break;
        }

        double result = apply_operation(&state, value);
        printf("%.0f\n", value);
        printf("%.0f\n", result);
        state.count++;
    }

    return 0;
}
