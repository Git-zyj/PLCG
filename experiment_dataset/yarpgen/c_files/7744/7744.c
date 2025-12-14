/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (~var_9);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = (!137);

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                var_17 = arr_4 [i_2 - 1];
                var_18 = ((((max((arr_0 [i_2 + 1]), (arr_0 [i_2 + 1])))) + (arr_9 [i_2 + 1] [i_2] [i_2])));
                arr_12 [i_0] [i_2] [i_0] = (136 <= ((-(var_7 >> 1))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_16 [i_0] [i_0] [1] [i_0] = (((((arr_0 [i_0]) - (arr_0 [1]))) % (arr_15 [i_0] [i_0] [i_0] [i_0])));
                arr_17 [i_0] [i_1] = (arr_0 [i_0]);
            }
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                arr_20 [1] [0] [i_4] [1] = ((((((arr_1 [i_4]) & (arr_10 [i_0] [i_0] [i_1] [8])))) ? (((arr_1 [i_0]) ? (arr_1 [i_4]) : (arr_10 [i_0] [i_0] [i_0] [6]))) : -144));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = (((max((arr_25 [i_0] [i_0] [i_1] [i_4] [i_5] [i_6]), (arr_25 [i_0] [i_6] [i_4] [i_6] [i_6] [i_6]))) ? (((!(arr_25 [i_4] [i_1] [i_4] [i_6] [i_1] [i_6])))) : (((arr_25 [i_5] [i_1] [i_5] [i_5] [i_4] [i_6]) ? 121 : (arr_25 [i_0] [i_1] [i_4] [i_5] [i_5] [i_6])))));
                            arr_26 [i_6] = (var_11 ^ 226);
                            arr_27 [i_6] = ((var_14 ? ((min(102, 1))) : ((1 ? (arr_10 [i_0] [i_0] [i_0] [i_6]) : (arr_10 [i_0] [3] [i_4] [i_6])))));
                        }
                    }
                }

                for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
                {
                    arr_32 [i_7] [1] [1] [i_4] [i_1] [1] = ((((arr_7 [i_0]) ? (arr_7 [i_0]) : (arr_7 [i_0]))));
                    arr_33 [i_7] [i_1] [i_0] [6] [6] [i_4] = 1;
                    var_20 = arr_0 [i_1];
                    var_21 = ((arr_7 [i_4]) >= (arr_30 [i_0] [i_0] [i_0] [i_0]));
                }
                for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_22 = ((!(((131 ? (arr_18 [i_8] [i_0] [i_0]) : (arr_18 [i_0] [i_0] [i_0]))))));
                    var_23 ^= 1;
                    arr_36 [i_8] = 163;
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    arr_39 [i_0] [i_4] [i_1] [10] [i_9] = (((((((125 + (arr_31 [i_0] [i_9])))) ? (arr_37 [i_9] [i_9] [i_9]) : ((max(1, (arr_4 [i_0])))))) >> 1));
                    var_24 = ((((min((arr_22 [1] [1] [i_9]), (arr_22 [i_0] [i_0] [i_9])))) ? (((arr_22 [8] [i_1] [i_1]) ? (arr_22 [i_9] [i_0] [i_0]) : (arr_22 [i_0] [i_0] [i_0]))) : (((arr_22 [i_0] [i_0] [i_0]) ? (arr_22 [i_9] [i_4] [i_0]) : (arr_22 [i_0] [i_0] [i_4])))));
                    arr_40 [i_0] [i_0] [i_0] = (arr_4 [i_9]);
                }
                arr_41 [i_4] [i_0] [i_0] [i_0] |= (((arr_35 [i_0] [1] [1] [i_0]) & ((225 ? (255 == 238) : (((arr_2 [i_0]) ? 1 : (arr_14 [i_0] [i_1] [1] [i_4])))))));
            }
            /* LoopNest 2 */
            for (int i_10 = 1; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        arr_48 [i_11] [i_1] = (((arr_37 [i_0] [i_0] [i_10 - 1]) ? ((((arr_6 [i_0] [i_0]) < (var_1 < 1)))) : (arr_30 [i_0] [i_1] [i_10 - 1] [i_11])));
                        var_25 = ((1 > (1 == 235)));
                        var_26 = arr_34 [i_0] [i_0] [i_0] [i_11] [i_0] [i_0];
                    }
                }
            }
        }
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            arr_51 [i_0] [1] [i_12] = (arr_44 [i_0]);
            var_27 = ((min(((1 ? 1 : 12)), 1)) >= (max((arr_42 [i_0]), 1)));
            var_28 = (max(var_28, (((arr_49 [i_0] [i_12] [i_0]) <= (arr_10 [i_0] [i_0] [i_12] [i_12])))));
        }
        var_29 = arr_25 [1] [i_0] [i_0] [i_0] [i_0] [1];
    }
    for (int i_13 = 0; i_13 < 14;i_13 += 1)
    {
        var_30 = (((arr_53 [i_13]) >> (((!((max((arr_52 [i_13]), (arr_53 [i_13])))))))));
        arr_54 [i_13] = ((((~(arr_52 [i_13]))) | (arr_53 [i_13])));
        var_31 = arr_52 [i_13];
    }
    var_32 = ((-((1 ? 1 : 1))));
    #pragma endscop
}
