/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96485
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96485 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96485
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((((var_16 ? 14 : var_11))) ? var_6 : (max(-915321234, var_8))))) * -var_5));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_18 = (arr_1 [i_0]);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_19 |= ((var_6 ? ((((((arr_1 [i_3]) + 2147483647)) >> (-1 + 12)))) : -11));
                        arr_11 [i_0] [i_3] [i_0] [i_3] [i_3] [i_0] = (max(((~(arr_9 [i_0] [i_0] [i_1 + 1] [i_3]))), ((~(arr_9 [i_1] [i_1 + 2] [i_1 + 3] [14])))));
                        var_20 &= (max(((min((((arr_9 [i_0] [i_1] [i_0] [i_3]) ? (arr_7 [i_0] [i_2] [i_1] [i_0]) : var_4)), (arr_0 [i_0])))), (min((((arr_10 [i_0] [i_1] [i_3]) ? 1313933859 : -5829796219420739358)), 1))));
                        arr_12 [i_3] [i_0] [i_0] [i_0] &= ((var_14 ? (((((241057080 ? (arr_9 [i_0] [i_1] [i_2] [i_0]) : (arr_10 [i_0] [i_1] [i_2])))) ? (!var_6) : 28605)) : (((min(var_6, 902008966))))));
                        var_21 = ((-((1 ? -42 : 1))));
                    }
                }
            }
            var_22 += ((-((((min(var_14, var_2))) ? ((max((arr_10 [i_0] [i_0] [i_0]), 11820))) : 215))));

            for (int i_4 = 1; i_4 < 15;i_4 += 1)
            {
                arr_15 [i_4 + 2] [i_0] [i_0] [i_0] = (arr_13 [i_0] [i_4] [i_4] [i_1 - 1]);

                /* vectorizable */
                for (int i_5 = 2; i_5 < 15;i_5 += 1)
                {
                    arr_19 [i_5] [i_0] [i_1] [i_4 - 1] [i_1] &= (arr_16 [i_5] [i_5 + 3] [i_5 + 2] [i_5]);
                    arr_20 [i_0] [i_0] [i_1 + 3] [i_0] [i_5] = 16843078998633542076;

                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        arr_24 [i_0] = (((arr_22 [i_0] [i_5 - 2] [i_4] [i_0] [i_0] [i_0]) ? (arr_13 [i_5] [i_4 + 3] [i_5 - 1] [i_1 + 1]) : ((var_5 ? 1 : (arr_2 [i_0])))));
                        arr_25 [i_0] [i_5 + 2] [i_0] [0] [i_0] [i_0] [i_0] = (arr_17 [i_5] [i_1 + 2]);
                    }
                    arr_26 [i_0] [i_5] = ((var_14 ? (arr_23 [i_5 + 1] [i_5] [i_5 + 1] [i_5] [i_5] [i_5 + 1] [4]) : (arr_9 [i_4 + 1] [i_4] [i_5] [9])));
                }
                arr_27 [i_0] [i_0] = (arr_21 [i_4] [i_1] [i_1] [i_1] [i_0]);
                arr_28 [i_0] [i_0] [i_0] [i_0] = var_4;
            }
        }
    }
    #pragma endscop
}
