/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_1 ? ((min(var_6, -6544))) : ((31 ? -107 : var_13))))) ? ((-8 ? (var_9 && var_14) : (31 || 7792))) : var_2));
    var_16 = (min(var_4, 7813));
    var_17 ^= var_14;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_1] &= var_10;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_18 = ((-1 ? 27443 : 99));
                            var_19 = (((-101 ? 25 : -1)));
                            var_20 = ((27443 ? ((-115 ? (arr_11 [i_0]) : -100)) : (~-1)));
                            arr_12 [i_2] [i_2] = ((((((~(arr_11 [i_0 - 1])))) ? var_11 : (arr_9 [i_0] [i_0]))));

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                var_21 = (max(var_21, var_0));
                                arr_16 [i_0] [i_1] [i_2] [i_4 + 4] = ((((min((arr_7 [i_2] [i_2] [i_2]), var_0))) ? ((min(1, (min(var_6, (arr_13 [i_0] [i_1] [i_2] [i_3] [i_4 - 1])))))) : ((max((((-8 && (arr_2 [i_0] [i_1])))), (max(-1, 98)))))));
                                var_22 = (max(var_22, (((125 ? (min(var_5, var_8)) : ((22 ? (arr_5 [i_1] [i_4]) : (arr_5 [i_0] [i_1]))))))));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 1;i_5 += 1)
                            {
                                arr_20 [i_2] [15] [15] [i_0] [i_2] = (((!var_7) | (((!(arr_11 [i_0]))))));
                                var_23 = ((-36 ? -27465 : ((var_6 ? 23048 : (arr_14 [i_5] [i_5] [i_3] [1] [i_1] [i_0] [1])))));
                                var_24 = (~-3430);
                            }
                            for (int i_6 = 2; i_6 < 20;i_6 += 1)
                            {
                                var_25 -= ((7792 && (!-113)));
                                var_26 ^= ((((min((arr_21 [i_0] [i_0] [i_0 - 1] [i_6] [i_0 - 1]), -100))) ? ((31 ? var_14 : (!1))) : 15));
                                var_27 = (min(var_27, ((min(((((min(var_5, var_4))) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (((arr_18 [i_1] [i_1] [i_2] [i_3] [0] [i_3] [i_2]) ? var_2 : -1)))), 3)))));
                                arr_23 [i_2] [i_2] = (arr_11 [i_6 - 1]);
                            }
                        }
                    }
                }
                arr_24 [i_0] [i_0] = (arr_10 [i_0] [i_1] [i_1]);
                var_28 = var_12;
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_7] [10] [0] [1] = var_2;
                            arr_31 [i_0 - 1] [1] [i_0] [i_0 - 1] &= ((var_10 != (var_11 && var_4)));
                            var_29 = (min(var_29, ((((max(var_5, (1 != -69))))))));
                            var_30 = ((((((27443 >= var_1) ? ((-1 ? var_7 : (arr_7 [i_1] [i_7] [i_8]))) : (var_13 < var_8)))) ? -56 : -111));
                            var_31 = (max(((40 ? 63 : -71)), var_7));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
