/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58409
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58409 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58409
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((!var_10) ? var_11 : (((!75) ? -var_2 : (((max(var_0, var_5))))))));
    var_13 = (((((~var_11) + ((var_8 ? 37233 : var_1)))) >> (var_3 + 14524)));
    var_14 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_15 = ((((min(((((arr_4 [18] [3]) <= var_2))), (((arr_1 [i_1]) | var_7))))) ? ((max(var_5, var_0))) : var_6));

                for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
                {
                    var_16 = ((75 >= 124) ? (var_0 + var_7) : (max(((var_6 ? var_7 : var_10)), (((arr_7 [i_0] [i_1] [6]) ? (arr_2 [i_1] [i_2]) : 97)))));
                    var_17 = (((min(var_2, -1)) ^ (!var_5)));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
                {
                    var_18 = ((!(arr_6 [i_0])));
                    var_19 = ((-4 ? var_4 : (var_2 && var_5)));

                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {
                        var_20 = (arr_2 [i_1] [i_1]);
                        arr_13 [i_4] [i_3] [i_3] [15] = var_0;
                        arr_14 [i_1] [i_3] = ((-2125086965424991691 - ((var_6 ? var_0 : (arr_3 [i_0] [i_0] [5])))));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            var_21 = ((+(((arr_5 [i_4]) ? var_1 : var_2))));
                            var_22 = ((!(arr_11 [i_4] [i_4] [i_3] [i_3])));
                            arr_17 [i_0] [i_0] [9] [i_3] [i_0] = ((((((arr_2 [i_4] [i_4]) / 23))) & var_9));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_23 &= (((((arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]) ? 115 : var_4)) >> (((arr_5 [10]) - 40741))));
                            var_24 = ((!(var_0 <= var_7)));
                            var_25 = -var_4;
                        }
                    }
                }
                for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                {
                    arr_23 [i_0] [i_0] [i_0] [11] = (arr_12 [i_0]);
                    arr_24 [i_0] [i_1] [i_1] [i_7] = (((3 / (arr_18 [i_0]))));
                }
                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    var_26 = ((-((-14 * (((arr_16 [i_8] [5] [i_8] [i_8] [i_8]) / var_4))))));
                    var_27 = 2496968575;
                    arr_27 [i_0] [i_1] [i_8] = ((~(((!(arr_6 [i_8]))))));
                }
                var_28 = ((-((-17 ? 6798654652968415699 : 253))));

                for (int i_9 = 3; i_9 < 20;i_9 += 1) /* same iter space */
                {
                    var_29 |= ((!((!(((arr_1 [i_1]) && (arr_18 [i_0])))))));
                    arr_30 [i_1] [i_1] [i_9] [i_1] = 87;
                }
                for (int i_10 = 3; i_10 < 20;i_10 += 1) /* same iter space */
                {
                    var_30 = (arr_16 [i_10 - 3] [i_10 - 3] [i_10 - 2] [i_10 - 2] [i_10 + 1]);
                    var_31 = max((!var_0), var_4);
                    var_32 = ((!((max((arr_21 [i_10 - 1] [i_10 + 1] [i_10] [i_10]), (arr_3 [i_10 - 3] [i_10 - 3] [i_1]))))));
                }
            }
        }
    }
    var_33 = ((-((((min(var_10, var_4)) >= (-124 && var_1))))));
    #pragma endscop
}
