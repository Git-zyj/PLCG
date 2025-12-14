/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_14;
    var_20 = (min(var_20, (((max(var_15, (((var_3 ? var_2 : var_1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = var_16;
                var_22 = (2491 & -15);
                arr_8 [0] = (((arr_3 [i_0 + 4]) ? 92 : var_8));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_23 = (!2147483631);
                    var_24 = ((~(var_3 & 2147483647)));
                    var_25 = 2147483647;
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 4; i_4 < 9;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                var_26 = var_14;
                                var_27 = var_14;
                                var_28 = (min(var_28, (((((min((17 || var_10), var_5))) >= var_11)))));
                            }
                        }
                    }
                    var_29 = (max(var_11, (arr_4 [i_1 - 1] [i_0 - 2])));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    var_30 = (((arr_15 [i_6] [i_0 + 1]) * var_14));
                    var_31 = (((((var_16 ? (arr_17 [i_6] [i_6] [i_0] [i_0] [i_0]) : var_12))) || var_5));
                }
            }
        }
    }
    var_32 ^= var_1;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_9 = 0; i_9 < 13;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_33 = ((((max(0, (arr_20 [i_7] [i_7] [6] [i_10] [6] [i_7])))) << (((arr_20 [i_7] [i_8] [i_7] [i_7] [i_11] [i_7]) - 9636))));
                                var_34 &= var_13;
                            }
                        }
                    }
                }
                var_35 = var_8;
            }
        }
    }
    #pragma endscop
}
