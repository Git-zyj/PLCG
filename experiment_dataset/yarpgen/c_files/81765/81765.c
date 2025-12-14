/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_6 [i_0] = (((arr_2 [i_1]) ? (min(((max(4, 9))), var_4)) : ((min((var_13 ^ 872813469), (arr_2 [i_0]))))));
                var_18 = (min(var_18, (((max(var_3, ((max(var_11, var_5)))))))));
            }
        }
    }
    var_19 = (min(var_19, var_14));

    for (int i_2 = 1; i_2 < 21;i_2 += 1)
    {
        arr_9 [i_2] = var_17;
        var_20 = (((((!(arr_7 [i_2 - 1])))) >> ((((min((arr_7 [i_2 - 1]), var_6))) - 194))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    var_21 = (max(var_21, (((((arr_17 [i_3 + 2] [i_4 - 2]) ? (arr_13 [i_4 - 1]) : 252))))));

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        var_22 = (max(((max(4, 6))), (~var_5)));
                        var_23 = (max(var_23, ((min(((min((arr_20 [7] [i_3 + 1] [6] [10] [10] [i_3 - 2]), (~var_12)))), ((((max(5493, 0))) ? (((arr_7 [i_5]) ? var_17 : var_15)) : ((var_10 ? var_3 : var_15)))))))));

                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            var_24 = (min(var_24, (((min((arr_8 [i_4 - 1] [i_4 - 3]), (max(var_11, 188))))))));
                            arr_26 [i_4] [1] [3] [i_6] [3] = (min((-64 >= 21), (arr_13 [i_7])));
                            var_25 = (19278 - 150);
                            arr_27 [i_3] [i_4] [i_5] [i_5] [i_7] [11] = (var_0 ? (((arr_21 [i_4] [i_4] [i_4] [0] [i_4] [2]) + (arr_16 [i_4 - 2] [i_4] [i_4 - 3]))) : var_12);
                        }
                        for (int i_8 = 1; i_8 < 18;i_8 += 1)
                        {
                            var_26 ^= var_17;
                            arr_30 [i_3 + 1] [i_4] [9] [i_4] [i_3 + 1] [i_8] = -60042;
                            var_27 = (max(var_27, ((max(148, var_17)))));
                            arr_31 [i_3 - 2] [10] [i_4] [i_3] = (min((var_0 & var_2), var_2));
                            var_28 = (min(var_28, var_4));
                        }
                        for (int i_9 = 4; i_9 < 19;i_9 += 1)
                        {
                            var_29 ^= (((((((min(4, 60042))) ? (~69) : (arr_12 [i_3])))) <= ((min(var_15, var_5)))));
                            var_30 -= (((((((((arr_10 [i_6] [i_9]) ? (arr_25 [i_3 + 1] [i_4] [i_5] [11] [i_9]) : var_0))) ? (min(var_10, var_17)) : 65024))) && (arr_25 [i_3 - 1] [i_3 - 1] [1] [7] [i_9])));
                        }
                        for (int i_10 = 1; i_10 < 18;i_10 += 1)
                        {
                            var_31 = (max(3, 0));
                            var_32 = (min(1819310546, (4 | 2035449696)));
                            var_33 = var_14;
                        }
                        var_34 = (max(var_34, var_6));
                    }
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        var_35 = ((-493805708 ? 1072822097 : 252));
                        arr_41 [i_4] [i_4] [6] = (((((min(var_3, var_6)))) ? (arr_36 [11] [11] [i_5] [i_4] [7]) : var_1));
                    }
                    var_36 = ((-19535 ? 31434 : 6030));
                }
            }
        }
        var_37 = (min(var_37, -969884838));

        /* vectorizable */
        for (int i_12 = 2; i_12 < 18;i_12 += 1)
        {
            var_38 = var_2;
            var_39 ^= ((var_16 ? ((((arr_44 [i_3 - 2]) ? (arr_24 [i_3] [6] [i_3]) : var_6))) : var_11));
        }
        /* vectorizable */
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            arr_48 [i_3] = var_11;
            arr_49 [i_3] = var_10;

            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                arr_54 [i_3] [i_3] = ((!(arr_43 [9] [i_3 + 1] [i_3 - 1])));
                arr_55 [i_3 + 2] [i_3 + 2] [17] = var_3;
            }
            var_40 = (min(var_40, (31434 <= var_6)));
        }
        var_41 = var_0;
        var_42 = var_1;
    }
    var_43 = (max(var_43, var_11));
    #pragma endscop
}
