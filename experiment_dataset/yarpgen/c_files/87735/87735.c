/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_16 = (max((arr_4 [i_0] [i_2 - 1]), ((-(!var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 9;i_4 += 1)
                        {
                            {
                                var_17 = var_6;
                                var_18 = (((((arr_10 [i_0] [i_0] [i_0] [i_0 - 3] [i_0]) - (arr_10 [i_0 - 3] [2] [i_0] [i_0 - 3] [i_0]))) + ((-(arr_10 [i_0] [i_0] [i_0] [i_0 + 2] [i_0])))));
                            }
                        }
                    }
                    var_19 = (max(var_19, (((-(((arr_8 [8] [i_0 + 2] [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_8 [0] [0] [0] [i_0 - 2] [i_0] [i_0 + 2]) : (arr_8 [4] [i_0] [i_0] [i_0 + 1] [2] [i_0 - 3]))))))));
                    arr_13 [i_0] = (((((arr_6 [i_0 - 3] [i_1] [i_2 - 1] [i_0 + 1]) << ((((min((arr_3 [i_2] [i_1] [i_0 - 3]), var_7))) - 19))))) ? (((-(((arr_7 [1] [i_1] [i_2 - 1] [i_0]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0] [i_1]) : var_13))))) : (min((arr_8 [i_0] [i_0 - 3] [i_0 - 2] [i_0 - 3] [i_0 - 3] [i_0 + 1]), (arr_8 [i_0] [i_0 - 3] [i_0] [i_0] [i_0 - 2] [i_0 - 3]))));
                    var_20 = (max(var_20, (((((-(arr_0 [0]))) * (((arr_0 [6]) % (arr_0 [6]))))))));
                }
            }
        }
    }
    var_21 = ((max(((var_0 ? var_12 : var_8), var_12))));
    var_22 = var_8;

    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        var_23 = (arr_15 [i_5]);
        var_24 = (((arr_14 [i_5 - 1]) << (((((arr_14 [i_5 - 1]) ? (arr_14 [i_5 + 1]) : var_13)) - 906))));
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 20;i_7 += 1)
            {
                {

                    for (int i_8 = 3; i_8 < 21;i_8 += 1) /* same iter space */
                    {
                        arr_24 [i_6] [20] [i_7] [17] [i_7] = ((-((min((arr_17 [i_6] [16] [i_6]), (arr_20 [i_6] [i_7 - 1] [i_6]))))));
                        var_25 = ((+(((arr_20 [i_6] [i_5 + 2] [i_6]) ? (((arr_18 [i_5] [i_6 + 2] [i_7 + 3] [i_5]) >> (var_11 - 3888770271))) : (((arr_17 [i_6] [i_7] [i_8]) ? 1451792183407746764 : var_14))))));
                        arr_25 [i_6] = ((((max((arr_21 [i_8] [i_8] [i_8] [i_8]), (arr_21 [i_5] [14] [i_5] [i_7])))) ? (((arr_21 [8] [i_5 + 1] [i_7 - 2] [i_8]) - (arr_22 [19] [i_8 - 2] [i_8 - 3] [i_8] [i_8 - 1] [i_6]))) : (((min((arr_22 [i_6] [i_7 + 2] [7] [12] [i_8 - 3] [i_6]), var_7))))));
                        var_26 = (max((~var_2), (arr_17 [i_6] [i_7 - 1] [6])));
                    }
                    for (int i_9 = 3; i_9 < 21;i_9 += 1) /* same iter space */
                    {
                        var_27 = (max(((((min((arr_23 [i_9] [i_7 - 1] [i_6] [i_6] [13] [i_5 - 1]), (arr_17 [i_6] [21] [i_7 + 1])))) ? (arr_21 [i_5 - 1] [14] [i_7 + 3] [i_9 + 1]) : ((((16994951890301804865 || (arr_17 [i_6] [i_6] [i_6 + 2]))))))), (min(((min(var_7, (arr_14 [i_6])))), (arr_18 [i_5] [i_6 - 1] [i_7] [1])))));
                        var_28 = (arr_17 [i_6] [i_5 + 2] [i_9 - 1]);
                    }
                    arr_29 [2] [i_6] = 5171879494709610991;
                }
            }
        }
        var_29 = ((((((-30371 | (arr_23 [i_5 + 2] [i_5] [10] [i_5] [i_5 - 1] [i_5 + 2]))) ? (arr_21 [6] [i_5] [i_5] [i_5]) : (((var_15 ? var_5 : (arr_28 [i_5] [i_5] [0]))))))));
        arr_30 [i_5] = (min(((~((var_10 << (var_5 - 9098981427033875085))))), ((~(arr_23 [i_5] [i_5] [0] [18] [i_5] [20])))));
    }
    var_30 = (min(var_30, ((max((min(1451792183407746744, (1451792183407746768 > var_13))), (((((var_8 >> (var_12 + 28859))) | ((var_1 >> (342 - 342)))))))))));
    #pragma endscop
}
