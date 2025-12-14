/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_16 -= var_10;
                            arr_12 [i_1] [i_1] [i_1] [i_1] = ((((var_8 && (arr_3 [i_0 + 4] [i_1] [i_2 + 3]))) ? 104 : (max(((var_12 ? var_3 : (arr_10 [i_0] [i_0] [i_2] [i_2] [i_3]))), (arr_1 [i_0 + 1])))));
                            arr_13 [i_0] [i_0] = ((((arr_9 [i_2 - 1]) + (arr_9 [i_2 + 2]))));
                            var_17 = -7095;
                        }
                    }
                }

                for (int i_4 = 1; i_4 < 24;i_4 += 1) /* same iter space */
                {
                    arr_16 [i_0] [i_1] [i_1] = (arr_4 [i_4 + 1] [i_4] [i_0 + 3]);
                    var_18 += -var_2;
                    var_19 = (min(var_19, (((~(arr_15 [i_0 + 4] [i_0 - 1]))))));
                    arr_17 [i_0] [i_0] = (((arr_14 [i_4 - 1] [i_4 - 1]) ? (arr_14 [i_4 + 1] [i_4 - 1]) : 3430459995));
                }
                /* vectorizable */
                for (int i_5 = 1; i_5 < 24;i_5 += 1) /* same iter space */
                {
                    arr_21 [i_0] [i_0] = (!var_6);

                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        arr_24 [15] [i_6] [i_6] [15] = -50;
                        var_20 = (min(var_20, (((-50 ? (~50) : (arr_8 [i_0] [i_0] [i_5] [i_5 + 1] [i_6] [i_6]))))));
                    }
                    var_21 = (min(var_21, ((((arr_1 [i_1]) ? var_5 : (arr_20 [i_0] [i_0 + 4] [i_5 + 1]))))));
                }

                for (int i_7 = 1; i_7 < 22;i_7 += 1)
                {

                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_30 [i_8] [i_0] [i_7] [i_8] = 1550594598;
                        var_22 = (max(var_22, 14747459125649205174));

                        /* vectorizable */
                        for (int i_9 = 3; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_23 = (min(var_23, (((!(arr_33 [i_0 - 1]))))));
                            arr_35 [i_0] [i_8] [i_1] [i_8] [i_8] [i_7] [i_7] = var_5;
                        }
                        /* vectorizable */
                        for (int i_10 = 3; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_39 [i_0 + 2] [i_0] [23] [i_0 + 4] [i_8] = ((((arr_23 [i_0 + 3] [i_1] [i_8] [i_10 + 2] [i_1]) ? var_0 : 85)));
                            var_24 ^= 72056494526300160;
                            var_25 = (((((var_14 ? (arr_27 [i_8] [i_8] [i_7] [i_1] [i_8]) : 3923186684082827347))) ? (((var_2 ? var_7 : 54235))) : 1584079759));
                        }
                    }
                    for (int i_11 = 1; i_11 < 24;i_11 += 1)
                    {
                        var_26 += (arr_40 [i_0] [i_1] [i_0] [i_0] [i_1]);
                        var_27 = (min(var_27, ((((!(arr_9 [i_11 - 1])))))));
                    }
                    var_28 = ((((!((((arr_10 [i_0 - 1] [12] [i_1] [i_7 - 1] [i_7]) ^ var_14))))) ? (arr_26 [i_0 + 4] [i_0] [i_7 + 2]) : var_10));
                    arr_42 [i_0] = min((min(var_1, (arr_23 [i_0] [i_7 + 3] [i_1] [i_0 + 4] [i_7]))), var_6);
                }
                var_29 = (arr_10 [i_0] [i_0] [i_0] [i_1] [i_1]);
            }
        }
    }
    var_30 = 122;
    #pragma endscop
}
