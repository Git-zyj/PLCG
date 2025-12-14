/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/662
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(max((-2697426288487445220 & var_2), ((-20670 ? 65532 : var_18))))));
    var_21 = var_6;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_11 [i_1] = (arr_3 [23] [i_1] [i_1]);
                        var_22 = ((-(max(((min(-128, 65533))), (max(14, (arr_9 [i_0] [i_1])))))));
                        arr_12 [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = (((max(((((arr_9 [i_0] [i_1]) ? (arr_4 [i_1]) : var_13))), 0))) ? (((-(arr_2 [i_1] [i_1])))) : -1427356430015195459);
                        arr_13 [i_0] |= 4294967281;
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        var_23 = 1526535787;
                        arr_16 [i_1] [i_1] = ((arr_3 [1] [i_2 + 1] [i_2 + 1]) ? (!1) : (arr_2 [i_2 + 1] [i_1]));
                    }
                    for (int i_5 = 3; i_5 < 24;i_5 += 1)
                    {
                        var_24 = (min(var_24, ((max(4294967281, 4294967281)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                        {
                            var_25 = (((arr_6 [i_5] [i_5]) < (arr_14 [i_0] [i_1] [18] [i_5] [i_0])));
                            var_26 = (((arr_14 [i_2] [i_2] [i_5] [i_5 - 1] [i_6]) ? 4294967281 : (arr_14 [i_0] [i_2] [i_2] [i_5 - 3] [i_0])));
                        }
                        for (int i_7 = 0; i_7 < 25;i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_1] = (((arr_14 [i_5 - 3] [i_1] [i_1] [i_2 - 1] [i_7]) ? 43 : var_16));
                            var_27 = (+(((((arr_9 [i_2] [i_1]) ? -1005120144754051683 : (arr_6 [i_7] [i_2]))) / ((min(22, 16))))));
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 25;i_9 += 1)
                        {
                            {
                                var_28 = (max((max(var_19, 2)), (((var_18 < (min(-6489367440024551539, (arr_5 [i_1]))))))));
                                var_29 |= ((2061713707 ? ((-3132 | (11 << 0))) : 1802540995));
                                var_30 = ((!((var_10 == (max((arr_0 [i_0] [i_9]), (arr_23 [i_0] [i_0] [1] [i_0] [i_0] [i_0] [i_1])))))));
                            }
                        }
                    }
                    var_31 = (((((((min(1599736000, 103))) ? ((-(arr_3 [13] [15] [i_0]))) : 15621))) + (max((((!(arr_15 [i_0] [i_0] [i_1] [i_2] [i_2])))), (min(18446744073709551603, 2061713697))))));
                    var_32 = (min((min(((max(-1224699799, 236))), 4294967295)), (((arr_21 [i_2 + 1] [i_0] [i_2] [1] [5]) - (arr_15 [i_2 + 1] [0] [i_0] [i_1] [i_0])))));
                    var_33 = (arr_20 [i_0] [24] [i_2] [i_2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
