/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91185
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {

                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_1] [i_1] [i_2 + 1] [i_3] [i_4] = (39189 % 13194139533312);
                            var_20 = (min(var_20, (2376145889 + var_14)));
                        }

                        for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_1 - 1] [i_2 - 2] [i_1] [1] = ((((((arr_6 [i_0] [i_0] [i_3] [i_0]) << (var_6 - 3967267193)))) ? (1818259225 << var_3) : (var_13 <= var_5)));
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_5] [i_1] [i_2 - 1] = (arr_4 [i_0] [i_0] [i_1]);
                            var_21 = (min(var_21, (arr_10 [i_0])));
                        }
                        for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
                        {
                            var_22 = ((arr_8 [i_0] [i_0] [i_1]) ? 12 : ((0 ? -1 : 1)));
                            var_23 = 2368269718567820270;
                            var_24 = ((arr_2 [i_1] [i_2 - 1] [i_1]) * (arr_10 [i_2 + 1]));
                            var_25 = (arr_11 [i_1] [i_2 - 2] [i_3] [i_6]);
                        }
                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_1] [i_2] = (((0 % var_13) ? (arr_0 [i_1 + 2]) : var_13));
                            var_26 = (max(var_26, 1));
                            var_27 = (-127 - 1);
                        }
                        var_28 = (arr_21 [i_0] [i_1 + 1] [0] [i_1] [i_1] [0]);
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 24;i_8 += 1)
                    {
                        var_29 = -5489661427248156818;
                        var_30 = ((((~(arr_1 [i_8]))) >> 1));
                        arr_29 [i_8] [i_1] [i_0] = ((var_3 >= (((-41 && (arr_19 [i_1] [i_0] [i_1 + 2] [i_2] [i_1] [i_8]))))));

                        for (int i_9 = 0; i_9 < 24;i_9 += 1)
                        {
                            var_31 = var_12;
                            arr_32 [i_1] = ((-var_10 ? 511 : -6954));
                            arr_33 [i_0] [i_1] [i_2] [i_8] [1] = (((arr_3 [8] [i_1 + 1]) || -1346439703));
                        }
                        for (int i_10 = 0; i_10 < 24;i_10 += 1)
                        {
                            var_32 = var_10;
                            arr_37 [i_0] [i_1] [i_2] [i_8] [13] = (0 && 170);
                        }
                        for (int i_11 = 0; i_11 < 0;i_11 += 1)
                        {
                            arr_42 [i_0] [i_1] [i_2] [i_0] [i_11] = ((var_14 < (!4543)));
                            var_33 = (((arr_35 [i_0] [i_1] [7] [i_8] [i_11]) >= var_16));
                            var_34 += (((((var_11 ? 35 : (arr_22 [i_0] [i_0] [i_2] [i_0] [i_11] [i_11] [i_2 - 2])))) ? ((35 ? 1 : var_0)) : (1745876182 == 1)));
                        }

                        for (int i_12 = 0; i_12 < 1;i_12 += 1)
                        {
                            var_35 = ((+(((arr_5 [i_2]) * var_14))));
                            arr_45 [i_2] [i_1] [i_2] [i_8] [i_1] [2] = 47;
                            var_36 = (arr_11 [i_1 + 1] [i_2] [i_2 + 1] [i_2 + 1]);
                        }
                    }
                    arr_46 [i_0] [21] [i_1 + 1] [i_1] = 86;
                    arr_47 [i_0] [i_2] [i_1] [22] &= (((((arr_38 [i_2] [8] [i_2 + 1]) || (arr_38 [i_1 + 1] [i_2] [i_2 + 1]))) && (arr_38 [i_2 - 1] [i_2] [i_2 + 1])));
                }
            }
        }
    }
    #pragma endscop
}
