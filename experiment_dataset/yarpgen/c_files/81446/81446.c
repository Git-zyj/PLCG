/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81446
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(((((max(var_10, var_9))) ? var_5 : var_9)), ((max((max(var_8, var_10)), var_5)))));

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        var_13 ^= (max(((var_10 ? var_4 : var_4)), var_1));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_14 -= ((((var_5 ? var_3 : var_6))) ? var_3 : ((var_8 ? var_11 : var_6)));
            var_15 = (max(var_15, (((222 ? 43 : ((9223372036854775807 ? 411047490 : 12359)))))));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        {
                            arr_13 [i_3] [i_2] [i_3] [0] = var_2;
                            var_16 -= ((var_11 ? var_3 : var_0));
                            arr_14 [1] [12] [i_3] [i_2] [i_2] [i_2] [i_2] = ((var_0 ? var_1 : var_2));
                        }
                    }
                }
            }
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 23;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_17 &= (var_4 ? var_0 : var_5);
                            arr_23 [i_0 - 2] [i_1] [19] [0] [i_6] [i_7] = var_2;
                        }
                    }
                }
            }
        }
    }
    for (int i_8 = 2; i_8 < 12;i_8 += 1)
    {
        var_18 = var_1;
        var_19 = ((3872335109 ? ((-88 ? -230013144 : 29)) : -642615694));
    }
    for (int i_9 = 4; i_9 < 17;i_9 += 1)
    {
        /* LoopNest 3 */
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    {
                        arr_40 [i_11] |= ((-9223372036854775803 ? -9223372036854775782 : (max(-9223372036854775803, 64515))));
                        var_20 *= ((var_8 ? ((((min(var_4, var_8))) ? ((var_6 ? var_3 : var_10)) : ((var_10 ? var_3 : var_2)))) : (((((var_1 ? var_2 : var_5))) ? var_8 : ((var_4 ? var_6 : var_10))))));
                        var_21 = (max(var_8, ((var_10 ? ((max(var_5, var_11))) : (max(var_4, var_7))))));
                        var_22 = (max(var_22, (((var_7 ? var_0 : (((min(var_6, var_5)) ? (max(var_8, -9223372036854775807)) : (((min(var_8, var_6)))))))))));
                    }
                }
            }
        }
        var_23 -= ((((max(9223372036854775802, ((24539 ? -9223372036854775803 : 9223372036854775802))))) ? 0 : (max(((9223372036854775802 ? -116 : 0)), 7))));
    }
    #pragma endscop
}
