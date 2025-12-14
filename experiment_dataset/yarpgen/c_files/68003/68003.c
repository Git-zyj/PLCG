/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    arr_9 [i_0] [i_1] = (arr_8 [i_1] [i_1] [i_1 - 1] [i_1 - 2]);

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_14 = (arr_1 [i_0]);
                        var_15 = (min(var_15, (var_9 == var_2)));
                        arr_13 [i_0] [i_3] [i_3] = var_9;
                        arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [5] = (arr_12 [i_0] [i_1 + 1] [i_2] [i_3]);
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_16 ^= (~(1 && var_13));
                        var_17 *= (arr_4 [i_1] [i_1] [i_2]);
                        var_18 = (((arr_7 [i_0] [i_1 - 1] [i_2] [i_4]) ? (arr_7 [i_4] [i_4] [i_4] [i_4]) : 3568754489));
                    }
                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        arr_20 [i_0] [i_5] = (arr_0 [2]);

                        for (int i_6 = 1; i_6 < 10;i_6 += 1)
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_6] [i_6] [i_6] = (((arr_5 [i_6 + 1] [i_5 - 2] [i_1 - 1] [i_1 - 2]) + (arr_5 [i_6 - 1] [i_5 + 1] [i_1 - 3] [i_0])));
                            var_19 = 125;
                        }
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        var_20 += 2416836736;
                        arr_27 [i_0] [i_7] [i_1] = (arr_17 [i_0]);
                        var_21 = (arr_3 [10]);
                        var_22 = ((-84 ? var_7 : (arr_26 [i_1 - 3] [i_1] [i_1 - 1])));
                    }
                }

                for (int i_8 = 3; i_8 < 9;i_8 += 1)
                {
                    var_23 = ((9916959406875390980 ? 2588411176 : 165));

                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        var_24 &= (min(1721321115, ((((~-913111558) < (arr_16 [6]))))));
                        arr_34 [i_0] [i_0] [i_8] [i_8] = (-79 / (min((arr_22 [i_8] [i_0] [i_8]), 3497270712)));
                    }
                }
                for (int i_10 = 0; i_10 < 12;i_10 += 1)
                {

                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 12;i_11 += 1)
                    {
                        arr_41 [i_0] [i_11] [i_10] [i_10] [i_1] [i_10] = ((1837256078 ? (arr_12 [i_1 - 1] [i_1] [i_1 - 2] [i_10]) : (arr_5 [i_0] [i_1] [i_10] [i_11])));
                        var_25 = (((arr_15 [i_10] [i_11] [i_10] [6] [i_10]) * (arr_2 [i_1] [i_1 - 3])));
                        var_26 = var_11;
                        arr_42 [i_1] [i_1] [i_1] = 118452408;
                    }
                    var_27 = ((!(arr_33 [i_1 + 1] [i_1 + 1] [i_10] [i_10])));
                    arr_43 [i_0] [i_0] [i_0] [i_0] = (arr_21 [i_0] [6] [i_10] [i_10] [i_10]);
                    arr_44 [i_0] [i_10] [i_10] [i_10] = min(1, 0);
                }
                var_28 = ((((((arr_22 [0] [0] [0]) * var_1))) ? 25 : var_2));
                var_29 = var_6;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        for (int i_13 = 0; i_13 < 23;i_13 += 1)
        {
            {
                var_30 = (min((min((arr_46 [i_12]), 3)), (((arr_47 [i_12]) ? (arr_48 [i_13] [i_13] [i_13]) : (arr_46 [i_12])))));
                var_31 = (max(var_31, ((min(((((var_3 ? 10 : var_12)) <= (((((arr_45 [i_12] [15]) + 2147483647)) >> (((arr_47 [i_12]) - 84)))))), ((!((min(8, (arr_47 [i_12])))))))))));
                var_32 = var_5;
                arr_50 [i_13] [i_13] [i_13] = (min(((((var_7 == (arr_49 [i_13]))) ? 13162089613649469886 : (arr_48 [i_13] [i_13] [9]))), ((~(min(var_3, (arr_49 [i_13])))))));
                var_33 ^= (((arr_47 [i_12]) < (((((arr_49 [i_12]) ? 13 : var_13))))));
            }
        }
    }
    var_34 = var_12;
    var_35 = var_13;
    var_36 = (((((var_10 >> (((var_0 * var_10) - 1945990860))))) ? ((((var_1 != (min(var_5, 7543143925141820012)))))) : (min(var_11, 4258122827275353762))));
    #pragma endscop
}
