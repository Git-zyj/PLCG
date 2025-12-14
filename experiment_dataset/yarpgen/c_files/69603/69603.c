/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = var_5;
                var_11 += (~255);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_12 &= (((-125 + var_2) ? (arr_7 [i_2 - 4]) : var_1));
                var_13 = (-127 - 1);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_18 [i_6] [i_6] [i_5] [i_3] [i_2] [i_3] [i_2] &= 1;
                            arr_19 [i_5] [i_5] [i_3] [i_5] [i_3] |= -9223372036854775804;
                        }
                    }
                }
            }
            var_14 *= (((arr_15 [i_2] [10]) ? -119 : ((-(-127 - 1)))));
            var_15 = 255;
        }
        var_16 ^= (((1 ? -51 : -5)));
        var_17 = var_0;
    }
    #pragma endscop
}
