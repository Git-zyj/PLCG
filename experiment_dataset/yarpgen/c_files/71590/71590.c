/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 16734;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            arr_7 [i_0] [1] [i_0] = ((arr_2 [6] [i_0]) ? (arr_2 [i_0] [i_1 - 1]) : (arr_0 [i_0] [i_1]));
            arr_8 [i_0] = (((arr_0 [i_0] [i_1 - 1]) == (arr_4 [i_1 - 1] [i_1 + 1])));
            var_21 = (arr_4 [i_1 + 1] [i_0]);
            arr_9 [i_0] [i_0] = (((!-8546448278151530763) < (249 || 9223372036854775807)));
            var_22 = (((arr_5 [i_0] [i_0]) ? (arr_5 [i_0] [i_0]) : (arr_5 [i_0] [i_1 + 1])));
        }
        var_23 = ((var_4 ? (((arr_3 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_6 [i_0]))) : (arr_4 [i_0] [i_0])));
        arr_10 [i_0] = (((arr_1 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_2 [i_0] [i_0])));
        var_24 *= (((((var_4 ? (arr_6 [12]) : (arr_5 [20] [20])))) ? (arr_6 [2]) : (arr_3 [i_0])));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        arr_15 [i_2] = (arr_11 [i_2] [i_2]);
        var_25 = (max(var_25, (arr_6 [8])));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        arr_19 [i_3] = ((((9223372036854775798 ? 6 : 127)) ^ (((arr_17 [i_3]) ? (arr_17 [i_3]) : (arr_18 [i_3])))));
        arr_20 [i_3] = ((var_19 | (((arr_18 [i_3]) ? (arr_17 [i_3]) : (arr_18 [i_3])))));
        var_26 = (min(var_26, var_19));
        arr_21 [i_3] = (arr_17 [18]);
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_25 [i_4] = (arr_3 [1]);

        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            arr_28 [6] [14] = ((((((arr_6 [i_4]) ? (arr_17 [i_5 + 1]) : var_18))) ? var_10 : (arr_24 [i_4])));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        var_27 = (min(var_27, (((((~(arr_1 [i_4]))) | (arr_1 [i_4]))))));
                        var_28 = ((((((((arr_23 [i_4] [i_4]) ? (arr_11 [i_4] [i_4]) : (arr_23 [i_7] [i_6]))) / (arr_11 [16] [i_4])))) || (((arr_34 [i_5] [19] [i_5 + 2] [i_5] [i_5] [7]) <= (arr_34 [9] [i_5] [i_5 - 2] [9] [13] [9])))));
                        var_29 ^= ((((((arr_22 [i_4] [i_4]) ? (arr_4 [i_4] [i_5 - 1]) : (arr_11 [i_4] [i_4])))) ? ((((((arr_1 [i_4]) ^ (arr_23 [i_5 + 2] [i_6]))) / (arr_29 [i_5 + 2] [i_5 - 2] [i_5 - 2])))) : (((((arr_3 [i_5]) || (arr_29 [i_4] [i_5] [i_6]))) ? (arr_6 [i_4]) : (arr_2 [i_5 - 2] [i_5])))));
                        var_30 = ((((((arr_31 [i_5] [i_5] [i_5] [i_5 + 1] [i_5] [i_5]) / (arr_23 [i_5] [1])))) ? ((((arr_5 [i_4] [i_5 - 2]) ? (arr_5 [i_4] [i_5 + 2]) : (arr_5 [i_4] [i_5 - 1])))) : (arr_6 [i_4])));
                        var_31 = (max(var_31, (arr_14 [i_4])));
                    }
                }
            }
            arr_35 [20] [i_4] = (((((~((-(arr_27 [i_5])))))) ? (((((arr_4 [i_4] [i_5]) >= var_12)) ? ((var_14 ? (arr_32 [i_4]) : (arr_0 [i_4] [i_5]))) : (arr_5 [i_4] [i_4]))) : ((((arr_1 [i_4]) / (arr_11 [i_5 + 2] [i_4]))))));
            arr_36 [i_4] [i_4] = (arr_23 [i_4] [i_5 - 2]);
            var_32 = (((arr_29 [i_4] [11] [i_5 + 2]) ? (arr_29 [6] [i_5] [i_5 - 1]) : ((~(arr_29 [0] [i_5 + 2] [i_5 + 1])))));
        }
        arr_37 [i_4] [i_4] |= (arr_22 [2] [2]);
        var_33 -= (((arr_13 [i_4]) != ((var_14 ? (arr_29 [i_4] [i_4] [i_4]) : (arr_26 [i_4] [i_4] [i_4])))));
    }
    var_34 = ((var_15 ? (((var_4 ^ var_7) ? var_0 : var_6)) : var_18));
    var_35 = ((var_5 / (((var_11 + ((var_10 ? var_17 : var_19)))))));
    #pragma endscop
}
