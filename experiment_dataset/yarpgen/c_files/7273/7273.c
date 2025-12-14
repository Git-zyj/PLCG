/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7273
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 = var_17;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = var_13;
        arr_5 [9] = ((!(((((!(arr_0 [i_0]))) ? (((var_0 || (arr_1 [1])))) : ((max((arr_1 [i_0]), var_13))))))));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_21 = (max(var_21, (!143)));
        var_22 &= (((!0) || (((arr_6 [i_1]) == 2096994558))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_23 = (min(-8, ((((((arr_7 [i_2] [i_2]) ? 147 : var_5))) ? ((109 ? (arr_14 [i_1] [i_1] [i_1]) : 18)) : (arr_7 [i_1] [i_1])))));

                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_24 = (((arr_9 [20]) ? ((143 ? var_12 : ((((!(arr_12 [i_2]))))))) : -1761138944));
                        var_25 = (arr_11 [i_4]);
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                    {
                        var_26 ^= (-(((arr_8 [i_1]) ? (arr_10 [i_1] [i_2]) : (arr_8 [i_3]))));
                        var_27 = 143;
                        var_28 = (109 < 1);
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                    {
                        var_29 ^= (arr_7 [i_1] [i_1]);

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_30 ^= ((((min(var_9, (arr_23 [i_1] [i_2] [i_3] [i_6]))))) < (arr_24 [i_1] [i_3] [i_6] [i_7]));
                            var_31 = (((arr_12 [i_1]) ? (((13835058055282163712 < ((min(1, (arr_16 [i_1] [i_2] [i_3] [i_3] [i_2] [i_7]))))))) : (((!((min(234, 4294967275))))))));
                            arr_27 [i_7] [i_2] [i_3] [i_6] = ((((142 ? 3503137674 : 1))) || (((var_12 ? (arr_18 [i_2] [i_3] [i_7]) : (arr_18 [i_2] [i_3] [i_6])))));
                        }

                        for (int i_8 = 1; i_8 < 24;i_8 += 1)
                        {
                            var_32 = ((var_9 < (((-46 == ((((773111618 == (arr_15 [1] [1]))))))))));
                            var_33 = ((7806750774930568026 ? 16492674416640 : 110));
                        }
                    }
                    arr_30 [8] [i_2] [i_2] = ((min((arr_12 [i_2]), -30011)));
                    arr_31 [i_1] [i_1] [i_1] = (arr_19 [i_1] [i_2] [i_1] [i_1]);
                    var_34 *= ((((((var_4 || 243) || (((arr_18 [i_1] [i_1] [i_1]) == var_9))))) < (max((max(110, (arr_10 [i_1] [i_2]))), 0))));
                }
            }
        }
    }
    var_35 = ((var_17 || (((var_5 ? (~4611686018427387908) : var_0)))));
    var_36 = (1 < 98);
    #pragma endscop
}
