/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77548
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_9;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 = ((554153860399104 % ((((((arr_0 [1]) > (arr_0 [i_0]))) ? ((max(var_1, (arr_1 [i_0] [i_0])))) : var_8)))));
        var_12 &= (((~28) > ((((arr_1 [1] [1]) >= var_7)))));
        var_13 = (((((var_7 || (arr_1 [i_0] [i_0])))) / (((var_4 != (arr_1 [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 21;i_1 += 1)
    {
        var_14 = -37;
        var_15 = (arr_3 [i_1 + 2] [i_1]);
        var_16 = (((((arr_2 [i_1] [i_1 + 4]) % 16383)) / var_5));
    }
    #pragma endscop
}
