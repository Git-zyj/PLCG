/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (!var_10);
    var_21 |= var_0;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_22 = (((!1) <= (arr_3 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_23 = (max((!32764), (((arr_2 [i_0 + 2] [i_0 + 2]) >> (arr_2 [i_0 + 1] [i_0 + 2])))));
                        var_24 |= ((((((min((arr_2 [i_0] [i_0]), 7))) ? (arr_3 [i_0 + 2]) : ((var_15 | (arr_4 [i_0]))))) * (((!(arr_10 [i_2]))))));
                        arr_11 [i_1] [i_0] [i_1] [i_1] [i_1] [i_3] = (((((((max(var_19, 2167622653743485193))) ? (arr_10 [i_0 - 1]) : -var_16))) ? (arr_6 [i_0 - 1] [i_1] [i_0 - 1]) : (((arr_7 [i_3] [i_0 + 1] [i_0 - 1]) + (((59 / (arr_4 [i_2]))))))));
                        var_25 -= ((+(min((arr_7 [i_3] [i_2] [i_1]), (arr_6 [i_1] [1] [i_3])))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_26 = ((-((min((arr_2 [i_0 + 1] [i_0 + 2]), (arr_2 [i_0 + 1] [i_0 + 1]))))));
                        arr_15 [i_1] [i_2] [i_1] [i_1] = (max((arr_14 [i_1] [i_1] [i_2] [i_4] [i_1] [i_4]), (min(((((arr_6 [i_0 + 1] [i_1] [i_4]) / -8))), 1104959132451311282))));
                    }
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_27 = ((~(((arr_2 [i_0 + 1] [i_1]) ^ var_10))));
                        var_28 = (((3107618798034414979 / 118870742) ^ ((((arr_14 [i_0 + 1] [i_0 + 1] [i_0 + 2] [i_0] [i_0 - 1] [i_0]) / ((var_16 + (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1]))))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        var_29 = (max(var_29, ((((arr_7 [i_6] [10] [i_6]) <= (((arr_6 [i_0] [i_6] [i_2]) ? (arr_8 [i_6] [i_0 - 1] [i_1] [i_0 - 1]) : (arr_17 [i_0] [i_6] [i_0]))))))));
                        arr_20 [i_1] [i_2] = (arr_12 [i_1]);
                        var_30 = ((arr_8 [i_6] [i_2] [i_1] [i_0]) % (arr_3 [i_6]));
                        arr_21 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] = (((arr_10 [i_0 + 1]) * (arr_17 [i_0 + 2] [i_0 + 1] [i_0])));
                    }
                    var_31 = (((((((~(arr_3 [i_0])))) ? (arr_13 [i_1] [i_0] [i_0] [i_2] [i_2]) : (max((arr_19 [5] [1] [i_2] [i_1]), 18446744073709551615)))) >> (((((var_10 | var_17) ? ((~(arr_0 [i_2]))) : (((arr_3 [i_0]) + -1)))) - 307770603))));
                    var_32 = (min(var_32, ((max((arr_5 [4]), ((+((max((arr_13 [6] [1] [i_2] [i_0 + 1] [i_2]), (arr_13 [10] [i_1] [i_1] [i_1] [6])))))))))));
                    var_33 = (min(var_33, var_4));
                }
            }
        }
        arr_22 [i_0 - 1] = (~10);
    }
    #pragma endscop
}
