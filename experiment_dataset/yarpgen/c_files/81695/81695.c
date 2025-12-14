/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_6 ? (min(576460614864470016, 11151045343800815689)) : var_4));

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_16 = ((7295698729908735932 ? 1273246335 : -11679));
        var_17 = (((((!(((7295698729908735926 ? var_2 : 7)))))) ^ (((7295698729908735926 < (arr_1 [i_0]))))));
        arr_2 [i_0] = ((((max((~48), (arr_0 [2])))) < ((((arr_0 [15]) ? -2 : 64710)))));
    }
    #pragma endscop
}
