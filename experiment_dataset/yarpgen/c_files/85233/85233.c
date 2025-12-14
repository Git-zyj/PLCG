/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85233
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85233 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85233
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] = (((var_3 ? (arr_1 [i_0]) : 99)));
        var_13 = 1;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 14;i_3 += 1)
                {
                    {
                        var_14 *= arr_7 [i_0 + 3] [i_0 + 3] [i_0 + 3];
                        arr_12 [i_0] [i_1] [i_2] [i_1] = ((-((-(arr_3 [i_0] [i_0])))));
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        var_15 += ((((((var_2 ? var_12 : (arr_13 [i_4]))) ? (arr_15 [i_4] [i_4]) : (arr_14 [i_4])))));
        arr_16 [i_4] = ((((0 * ((max(1, 1)))))) && (((~((65 ? 241 : 1))))));
    }
    var_16 = var_11;
    #pragma endscop
}
