/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89195
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89195 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89195
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 &= var_6;
    var_15 = (((((var_7 ? (var_9 | var_3) : var_13))) < (var_3 | var_11)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((977 ? (arr_4 [i_0] [i_2]) : ((var_9 ? var_6 : (arr_6 [i_0] [i_1] [i_2] [i_2]))))));
                    var_16 = (((((var_1 ? (arr_0 [i_2]) : var_7))) ? (arr_4 [i_0] [i_2]) : ((978 ? 16393 : 92))));
                }
            }
        }
    }
    var_17 = (max(var_17, ((((((var_12 + 1) - 7544899973453668864))) < (((var_3 + var_12) - var_10))))));
    var_18 = (((((var_10 | (var_12 - var_13)))) ? var_6 : (-106 / 983)));
    #pragma endscop
}
