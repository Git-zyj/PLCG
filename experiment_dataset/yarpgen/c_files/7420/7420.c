/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7420
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7420 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7420
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = ((2993818368925862162 ? ((max(var_10, 1204))) : (((~2993818368925862162) ? (((var_2 ? -49595292 : var_2))) : (max(5017032699764616604, var_10))))));
    }
    var_12 = var_1;
    #pragma endscop
}
