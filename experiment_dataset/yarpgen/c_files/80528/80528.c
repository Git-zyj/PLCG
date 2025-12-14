/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((((((var_3 ? var_7 : var_10))) ? ((var_4 ? var_0 : var_9)) : (var_5 % var_1))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_7 [i_0] [2] [6] [i_2] = ((max((max(var_4, var_9)), (var_6 & var_3))) * var_1);
                    arr_8 [i_0] [i_0] = ((!(--1)));
                    arr_9 [0] [i_1] [i_1] [i_1] = ((~var_5) & (((((var_7 ? var_8 : var_0)) & var_4))));
                    arr_10 [8] [8] [9] = (((var_11 == var_10) == -var_0));
                }
            }
        }
    }
    #pragma endscop
}
