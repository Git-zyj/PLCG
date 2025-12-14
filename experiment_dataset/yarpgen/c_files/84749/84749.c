/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((65535 ? var_6 : (((var_7 << (4294967295 - 4294967275))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_3] [i_2 - 3] [i_2] [i_2] [i_0] [i_0] = (((arr_7 [i_2 + 1] [i_2 - 2] [i_2 + 1] [i_3 + 1] [i_3 + 3]) != (arr_0 [i_3])));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = 31038;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_11 = var_2;
                                var_12 = (((arr_3 [i_0]) != (arr_3 [i_5])));
                            }
                        }
                    }
                }
            }
        }

        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            arr_21 [i_0] [i_0] = ((~((var_0 ? var_0 : var_0))));
            arr_22 [i_0] = 31028;
            /* LoopNest 3 */
            for (int i_8 = 3; i_8 < 12;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        {
                            var_13 &= ((-31028 || (arr_5 [i_7 + 4] [i_7 + 3] [12] [i_8 + 1])));
                            var_14 = (max(var_14, (((var_6 ? (arr_17 [i_9] [i_9] [i_8] [i_7 + 1] [7] [i_0]) : ((((arr_8 [i_10] [i_7] [i_7] [14]) != (arr_27 [12] [i_7 + 2])))))))));
                            var_15 = (arr_8 [i_7 + 4] [i_7 + 1] [i_7 - 1] [i_0]);
                            arr_31 [i_10] [2] [i_9] [i_0] [i_7 + 1] [i_0] [i_0] = (-4 >= 11);
                        }
                    }
                }
            }
            arr_32 [i_0] [i_7] [i_0] = (arr_18 [i_0] [i_0] [i_7] [i_7 - 1] [i_7 + 4]);
        }
        var_16 = (((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]) ? var_5 : (arr_1 [i_0] [i_0])));
        /* LoopNest 2 */
        for (int i_11 = 2; i_11 < 12;i_11 += 1)
        {
            for (int i_12 = 1; i_12 < 14;i_12 += 1)
            {
                {
                    var_17 *= ((~(-32767 - 1)));
                    var_18 = 599592851;
                }
            }
        }
        arr_37 [i_0] [i_0] = (arr_3 [i_0]);
    }
    for (int i_13 = 0; i_13 < 24;i_13 += 1)
    {
        var_19 = ((90 ? 16827683879822262120 : ((1604184810 - ((54 ? (-2147483647 - 1) : 2243375525))))));
        arr_41 [10] = (max(((((max((arr_39 [i_13] [i_13]), 660032608))) | (max(5, 1619060193887289495)))), 445852740));
    }
    #pragma endscop
}
