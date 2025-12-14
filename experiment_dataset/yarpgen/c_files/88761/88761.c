/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_20 = (((max(((max(70, (arr_0 [i_0])))), (arr_2 [i_0 + 1])))) || (arr_1 [i_0]));
                var_21 = (min(var_21, (((((((arr_2 [i_0 + 2]) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))) % (((70 - var_9) + (arr_4 [12]))))))));
                var_22 = (arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_23 = ((70 & (min((arr_2 [i_0 + 3]), -20907))));
                            var_24 = (((-(arr_9 [i_0] [i_1] [i_1] [1] [i_3] [i_3]))));
                            var_25 += ((min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))));

                            for (int i_4 = 0; i_4 < 14;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = min((arr_0 [i_0]), (arr_0 [i_0]));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = (((min(18, (arr_4 [i_0])))));
                                arr_14 [9] [i_3] [i_0] [i_1] [i_0 + 3] = (max(var_17, ((((arr_2 [i_0 - 2]) ? (arr_3 [i_0]) : (arr_3 [i_0 + 1]))))));
                            }
                            for (int i_5 = 0; i_5 < 14;i_5 += 1)
                            {
                                var_26 = (arr_2 [i_0]);
                                var_27 = (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0]);
                                arr_18 [i_0] [i_3] [i_5] = (arr_3 [i_0 - 1]);
                                var_28 = (max(var_28, (((+((((arr_10 [i_2] [i_1] [i_0] [i_0] [i_2] [i_1]) > (arr_8 [0])))))))));
                            }
                        }
                    }
                }
            }
        }
    }

    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        var_29 = (arr_19 [i_6] [i_6]);
        arr_21 [i_6] [i_6] = ((-(((arr_19 [i_6] [i_6]) ? (arr_19 [i_6] [i_6]) : (arr_19 [i_6] [i_6])))));
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        var_30 ^= (max((max((arr_22 [i_7]), (-17 | var_19))), (!3026417168)));
        var_31 = -20907;
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1)
    {
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    var_32 ^= (arr_24 [i_8]);
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 10;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 12;i_12 += 1)
                        {
                            {
                                arr_38 [i_9] [i_11] [i_9] [i_9] [i_9] [i_9] = (arr_10 [i_11 - 3] [i_12 - 3] [i_12] [i_12 - 3] [i_12] [i_12 + 1]);
                                arr_39 [i_8] [i_11] [i_11] [i_8] [i_11] [i_8] = ((arr_34 [i_11 + 2] [i_11 + 3] [i_12 - 3]) ? (((arr_27 [i_12 - 2]) ? ((5812 / (arr_26 [i_9] [i_9] [i_9]))) : ((27 ? (arr_28 [i_8]) : 51)))) : (arr_26 [i_12] [i_11 - 1] [i_10]));
                                arr_40 [i_8] [i_8] [i_8] [i_11] [i_8] [i_8] = (((~(arr_15 [i_12 + 1] [i_9] [i_10] [12] [i_11 - 1] [i_9]))) - (((arr_11 [i_11] [i_11 + 3] [i_11] [i_11 + 1] [i_11]) & 59729)));
                                arr_41 [i_8] [0] [i_9] [i_10] [i_11] [i_11] [i_12] |= ((!(arr_19 [i_12 - 1] [i_12 - 2])));
                                var_33 = (max(((max((arr_15 [1] [1] [i_10] [i_10] [i_9] [i_8]), (arr_15 [i_8] [i_9] [i_10] [i_9] [i_12] [i_11 + 3])))), (max(((((arr_16 [i_11] [i_11 - 3]) / -17867))), (min(4194303, -20907))))));
                            }
                        }
                    }
                    arr_42 [i_9] [i_9] [0] = (min(5, (((!(arr_8 [4]))))));
                }
            }
        }
        var_34 ^= (arr_30 [i_8] [i_8] [i_8]);
        var_35 = (max(var_35, ((min((min((max((arr_2 [i_8]), (arr_37 [i_8] [i_8]))), (arr_31 [0] [i_8] [0]))), (arr_9 [9] [i_8] [i_8] [9] [i_8] [9]))))));
        var_36 ^= (arr_11 [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
    #pragma endscop
}
