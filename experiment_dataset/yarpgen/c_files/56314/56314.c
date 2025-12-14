/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56314
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_4 [17] [17] = (((arr_2 [i_0]) ^ ((var_9 ? var_12 : 51728))));
        arr_5 [1] = -0;
    }
    /* LoopNest 2 */
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_10 [9] [i_2] [7] = (((((5627 / ((min(-5628, 57539)))))) ? (((var_8 ? var_9 : var_7))) : var_7));

                for (int i_3 = 3; i_3 < 19;i_3 += 1)
                {
                    var_18 = (((((7716037795868013084 ? 109 : 8388608))) != (min(((var_15 ? var_11 : 70)), 5628))));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_19 = ((-(arr_1 [i_2])));
                        var_20 = -var_4;

                        for (int i_5 = 3; i_5 < 20;i_5 += 1)
                        {
                            arr_18 [2] [i_4] [i_2] [i_2] [20] [i_1] = (((var_4 / var_4) ? var_10 : var_11));
                            arr_19 [i_2] [i_4] [i_3 - 1] [2] [i_2] [i_2] = (((((var_13 ? var_11 : var_7))) ? (var_15 / var_7) : (arr_6 [i_4])));
                        }
                    }
                    var_21 = ((-(min(-var_7, -var_10))));
                }
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    var_22 = ((var_13 ? var_14 : (min(0, (7997 / -53329546)))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_23 &= (--var_16);
                                var_24 = (max(var_24, (~2967436384537695575)));
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_9 = 2; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 18;i_11 += 1)
                        {
                            {
                                var_25 = (max(var_25, ((min((max(((var_10 ? var_0 : 24)), (arr_27 [i_1] [i_1 - 2] [i_11 + 2] [i_10] [i_11] [i_9 - 2] [i_9]))), ((((869724149 ? 2101179772 : 1700263049051733931)))))))));
                                var_26 = ((!(((17411 ? 4178962599771029265 : 5628)))));
                                var_27 = (min(((-(((arr_35 [i_1 - 1] [i_1 - 1] [i_9] [i_2] [i_11] [i_9 - 2] [i_9]) ? var_15 : 1621983284)))), ((((min(var_5, 16675006626478655029))) ? (var_6 / var_9) : (max(var_0, var_13))))));
                            }
                        }
                    }
                }
                var_28 = (max((((((192 ? (arr_1 [1]) : var_6))) ? -var_17 : (((var_10 ? var_13 : 3713019701703792467))))), ((min((var_2 + var_10), (~5627))))));
                var_29 = var_11;
            }
        }
    }
    var_30 = var_1;
    var_31 = -var_5;
    var_32 = -var_12;
    #pragma endscop
}
