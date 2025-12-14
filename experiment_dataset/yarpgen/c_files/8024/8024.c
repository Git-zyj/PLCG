/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8024
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_1;
    var_21 = ((((!(var_9 || -1))) ? (min((6218 / -14), 18)) : ((max((var_6 < var_14), var_9)))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_22 = (arr_0 [i_0]);
        arr_3 [i_0] = ((var_14 % ((var_0 ? (arr_1 [i_0] [i_0]) : (max(var_13, 35184371957760))))));
        var_23 = ((((((max((arr_0 [i_0]), var_17))) ? (arr_0 [i_0]) : (((arr_1 [3] [i_0]) / (arr_2 [17])))))) ? (arr_1 [i_0] [i_0]) : (((((arr_2 [i_0]) + (arr_0 [i_0]))) << (18446744073709551596 - 18446744073709551564))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] [i_2] [i_0] = ((arr_1 [i_0] [i_1]) ? (arr_2 [2]) : (max((((arr_0 [i_2]) ? (arr_6 [i_1] [i_1] [i_1] [i_0]) : var_13)), 43183)));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_24 = var_16;
                        arr_12 [i_3] [i_2] [i_2] = (((((((min(var_0, var_7))) && var_15))) << ((((min((max(var_13, var_9)), var_9))) - 107))));
                        arr_13 [i_0] [i_0] [i_0] [7] [i_0] [i_2] = (arr_4 [i_3] [i_2] [i_0]);
                        var_25 = (max((arr_9 [i_2] [i_1] [i_1] [i_1] [i_1] [i_1]), (arr_1 [i_2] [i_2])));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        arr_16 [7] [4] [3] [i_2] [i_4] = (arr_10 [i_2] [i_1] [7] [6]);
                        arr_17 [i_4] [i_2] [i_2] [i_0] = ((var_7 - (238 && 22352)));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_2] [i_0] = var_19;
                    }
                    /* vectorizable */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        arr_21 [i_0] [i_0] [9] [i_2] = (-32767 - 1);
                        var_26 += ((!((((arr_6 [i_0] [i_0] [i_2] [i_5]) ? (arr_9 [i_5] [i_0] [i_1] [i_2] [i_2] [i_5]) : 235)))));
                        arr_22 [i_1] [i_1] [i_1] [i_2] [i_1] [6] = var_18;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_27 = (var_10 ? (arr_24 [i_0] [i_0] [17] [2] [i_6]) : (arr_11 [i_0] [i_0] [13] [i_0] [i_5] [i_0]));
                            arr_25 [3] [i_1] [i_2] [i_2] [i_6] = (32755 ? (arr_11 [i_6] [i_5 - 2] [i_5 + 3] [i_5 - 1] [i_5 - 1] [i_5 + 1]) : (arr_11 [1] [i_5 + 2] [i_5 + 1] [i_5] [i_5 - 2] [i_5 + 1]));
                        }
                        for (int i_7 = 2; i_7 < 17;i_7 += 1) /* same iter space */
                        {
                            arr_28 [i_2] [i_2] = (((arr_6 [i_0] [i_0] [i_0] [i_0]) ? var_19 : (arr_5 [i_1] [i_2] [14])));
                            var_28 = (238 != 127);
                            var_29 = (arr_15 [i_1] [i_2] [i_2] [i_7 + 1] [i_7] [1]);
                            var_30 = 22331;
                        }
                        for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
                        {
                            arr_32 [i_0] [i_1] [2] [i_2] [9] [2] = var_17;
                            arr_33 [i_8] [i_5 + 2] [i_2] [i_2] [i_1] [i_0] = (!var_8);
                        }
                    }
                    arr_34 [7] [i_1] [i_2] [i_1] = (((((-((var_7 + (arr_15 [i_0] [i_2] [i_0] [i_0] [10] [i_0])))))) ? (var_12 + 3) : var_14));
                    arr_35 [i_1] [i_1] [i_1] [i_2] = ((((((var_6 ? (arr_11 [i_1] [i_1] [1] [i_1] [i_0] [i_2]) : 19))) ? (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]) : (max((-2147483647 - 1), (arr_15 [i_2] [i_2] [i_2] [i_1] [i_2] [6]))))));
                }
            }
        }
        var_31 *= var_19;
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        arr_39 [i_9] [i_9] = min((((arr_27 [i_9]) ? var_3 : (arr_36 [i_9 + 3] [i_9]))), -4096);
        var_32 = (min(var_32, ((((arr_29 [i_9] [i_9] [18] [i_9]) <= (((32755 ? ((((arr_2 [i_9]) ? (arr_38 [i_9 + 3] [i_9 + 2]) : (arr_7 [i_9] [i_9])))) : -1346478137995308210))))))));
        arr_40 [i_9] [0] = (3 > 28);
    }
    #pragma endscop
}
