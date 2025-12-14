/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (var_15 / 1);

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_19 = 1;

                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        arr_13 [i_2] [i_3] [i_1] [i_2] = (((((arr_3 [i_1 + 2]) | (((min((arr_8 [i_0] [i_1] [i_1] [i_1]), 1)))))) >= (arr_6 [i_0] [i_1])));

                        for (int i_4 = 1; i_4 < 19;i_4 += 1)
                        {
                            var_20 *= (arr_10 [i_0] [i_1] [i_0] [i_0] [i_0]);
                            var_21 += (((arr_11 [i_0] [i_0]) ? (arr_11 [i_1] [i_3]) : (arr_3 [1])));
                            var_22 = (min(6805068340833648241, ((min(var_17, (arr_9 [i_1] [i_4] [i_4 + 3]))))));
                        }
                    }
                    var_23 = ((-(min((arr_6 [i_0] [i_1]), (arr_11 [i_1 + 2] [i_1 + 2])))));
                }
            }
        }

        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            arr_20 [i_0] [i_0] = (((((max(1, (arr_11 [i_0] [i_0]))) ? ((-6972 ? (arr_12 [i_0] [i_0] [i_5] [i_5]) : 8706797092137867041)) : (arr_5 [i_0]))) - (((((((arr_15 [13] [i_5] [i_0] [i_5] [16] [0] [i_5]) && (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) & (arr_10 [i_0] [i_5] [i_0] [i_0] [i_0]))))));
            arr_21 [i_0] = (((arr_17 [i_0] [i_5] [i_5]) ? (((((min(var_5, var_5))) << (arr_15 [i_0] [i_5] [i_5] [i_0] [i_0] [i_0] [i_0])))) : (((arr_4 [i_0] [i_0] [i_5]) ? (arr_0 [i_5]) : var_5))));
            arr_22 [i_0] [i_5] = (((((((min(var_1, var_17))) ? ((min(23626, var_5))) : (arr_4 [i_0] [i_0] [i_5])))) == var_7));
            var_24 = ((min((arr_17 [i_0] [i_5] [i_0]), var_8)));
        }
        /* vectorizable */
        for (int i_6 = 2; i_6 < 19;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 22;i_7 += 1) /* same iter space */
            {
                var_25 = (~var_2);
                var_26 = (arr_10 [i_0] [12] [i_7] [i_6 + 3] [i_6 + 3]);
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1) /* same iter space */
            {
                arr_31 [i_6] [i_6] = (~760485397);
                arr_32 [i_0] [i_0] [i_8] [i_6 - 2] = (((arr_15 [i_8] [i_6] [i_6] [7] [i_6] [i_6] [i_6 - 1]) ? (arr_15 [i_8] [i_6] [i_8] [17] [17] [i_0] [i_6 - 1]) : (arr_15 [i_0] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6 + 3])));
                var_27 = 1;
                var_28 = (arr_26 [i_6 - 1]);
            }
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 22;i_10 += 1)
                {
                    {

                        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                        {
                            arr_42 [i_6 - 2] [i_11] = (arr_9 [i_11] [i_6 + 3] [i_9 + 3]);
                            var_29 = (((((var_10 - (arr_18 [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])));
                        }
                        for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                        {
                            var_30 = (((arr_40 [i_9 + 2] [i_9 + 2]) ? (arr_40 [i_9 + 3] [i_9 + 3]) : (arr_40 [i_9 + 4] [i_12])));
                            var_31 = (arr_33 [19] [i_9 + 3] [19] [i_6 - 2]);
                        }
                        var_32 = (arr_8 [i_6 + 1] [i_6 + 2] [i_9 + 4] [i_9]);
                        var_33 = 114;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_13 = 1; i_13 < 18;i_13 += 1)
        {
            var_34 = var_14;
            var_35 = 76;
            arr_48 [0] [i_13] [i_13] = var_12;
        }
        var_36 = var_9;
    }
    for (int i_14 = 1; i_14 < 1;i_14 += 1)
    {
        var_37 = (arr_30 [i_14] [i_14] [i_14]);
        var_38 = (arr_36 [1]);
        arr_52 [i_14] = ((~(arr_45 [i_14] [i_14])));
    }
    for (int i_15 = 3; i_15 < 18;i_15 += 1)
    {
        var_39 = (((min(-31432, -25697))));
        arr_55 [i_15] = (min((((arr_54 [i_15 - 2]) / (arr_54 [i_15 + 1]))), ((max((arr_54 [i_15 - 1]), (arr_54 [i_15 - 1]))))));
    }
    var_40 -= -23628;
    #pragma endscop
}
