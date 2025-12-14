/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82455
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82455 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82455
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += var_5;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = ((((var_7 ? (((arr_3 [i_0] [i_1]) ? (arr_0 [i_0]) : var_0)) : var_6))) ? -48 : ((min((arr_2 [i_0]), var_13))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_10 [i_0] [i_1] [i_2] [i_0] [i_4] [i_0] = (!-48);
                                var_17 = ((~(arr_8 [i_0] [i_1] [i_1] [i_4 + 1])));
                                var_18 = var_10;
                                var_19 = -1687509710;
                                arr_11 [i_0] [i_4] [i_0] [i_0] [i_4] = (arr_4 [i_0 + 1] [i_0 + 1] [0] [i_0]);
                            }
                        }
                    }
                    arr_12 [7] [i_0] [i_0] [i_2] = (var_1 ? ((var_1 ? var_5 : var_8)) : (((2084316629091994918 ? -21014 : var_0))));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 16;i_5 += 1) /* same iter space */
                {
                    arr_17 [i_0] [i_1] [i_0] [i_0] = (((arr_16 [i_0] [i_5 - 1] [i_5 - 1]) != (arr_14 [i_1] [i_5 + 2] [i_5 + 3] [i_5])));
                    arr_18 [i_0] [i_1] [i_5 + 3] [i_0] = ((9240332082660961006 ? var_10 : (var_2 % var_9)));
                    var_20 = ((((((arr_4 [i_0 + 2] [i_0 + 2] [i_5 + 1] [i_0]) > (arr_8 [i_0] [i_1] [i_1] [i_1])))) ^ (((!(arr_14 [13] [i_1] [i_0] [i_1]))))));
                    var_21 *= ((var_2 ? (var_10 * 0) : var_8));
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1) /* same iter space */
                {
                    var_22 = (max(var_22, (((!(((((min(-1461, 70))) ? ((16362427444617556698 ? 2240726457976880098 : var_5)) : (((min((arr_15 [i_0]), (arr_2 [2])))))))))))));
                    var_23 += (min((!67), (((1460 ? 120 : 117)))));
                    var_24 |= ((-((((arr_0 [2]) > (arr_20 [i_0 - 1] [6] [i_6] [i_6 + 4]))))));
                    arr_21 [i_0 + 2] [i_0] [i_0] = ((var_6 % (94 & 17527107438157321038)));
                }
                for (int i_7 = 1; i_7 < 16;i_7 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            {
                                var_25 = (min(var_25, (((41 | (((((max(47, (arr_20 [i_0] [18] [i_7] [i_0])))) == (var_10 > var_3)))))))));
                                var_26 = (max(((!(arr_16 [i_0] [i_0] [i_0]))), (!-735112039)));
                            }
                        }
                    }
                    arr_29 [i_0] [i_1] [i_7 + 1] = (((((-1480 % var_0) + ((max(var_4, -73))))) < var_13));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 1;i_11 += 1)
                        {
                            {
                                var_27 &= ((711609488 & (arr_26 [i_10] [i_0 + 1] [i_7 + 4] [i_10] [6] [14])));
                                var_28 = (arr_35 [i_0 + 2] [19] [i_0 + 2] [i_7 + 1] [i_10] [12]);
                            }
                        }
                    }
                    var_29 -= var_0;
                    var_30 -= (min((arr_7 [i_0] [16] [i_1] [i_1]), (max((arr_32 [i_0 - 1] [i_0 + 2] [14] [i_7 + 4]), (arr_32 [i_0] [i_0] [4] [i_0])))));
                }
                var_31 = (~94);
            }
        }
    }
    #pragma endscop
}
