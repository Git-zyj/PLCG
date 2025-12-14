/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((((((((arr_2 [i_0] [i_0]) ? 1 : var_1))) ? 1 : (arr_2 [i_0] [i_0])))) ? (arr_2 [i_0] [i_0]) : (((((-2147483647 - 1) + (arr_0 [i_0]))) + ((var_4 ? (arr_2 [8] [8]) : var_7)))));
        arr_4 [i_0] [i_0] = ((~((1 ? (arr_2 [i_0] [9]) : (6815407620162469596 | -8)))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] [1] = var_0;
        arr_10 [i_1] = ((var_1 <= (arr_2 [i_1] [i_1])));
        arr_11 [1] [i_1] = var_1;
    }
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_2] = ((+(((arr_16 [i_2]) ? (min(var_4, 11631336453547082025)) : (((var_0 ? var_6 : 23952)))))));
                    var_11 &= (~var_4);
                }
            }
        }
    }
    #pragma endscop
}
