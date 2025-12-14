/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84909
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84909 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84909
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (-(arr_1 [i_0]));
        arr_4 [i_0] = ((((((arr_1 [6]) <= 5)) ? ((min((arr_2 [6]), -97))) : 9339)));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        arr_9 [10] [i_1] = ((-var_13 == ((var_16 ^ (arr_2 [i_1])))));
        arr_10 [i_1] = var_17;
    }
    var_18 = (((min(1, (~-100))) >> 0));
    #pragma endscop
}
