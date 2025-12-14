/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_13 = (max(var_13, ((max((((arr_2 [0]) ? 30 : var_0)), (((arr_1 [i_0] [10]) & (arr_2 [6]))))))));
        var_14 = (max(((max((arr_1 [i_0] [i_0]), (-2147483647 - 1)))), (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0] [i_0])))));
        var_15 += ((((((arr_2 [8]) ? (arr_2 [10]) : 1))) ? 30 : ((49 ? var_5 : (arr_1 [i_0] [i_0])))));
        var_16 = ((((min((arr_2 [i_0]), var_10))) ? (min((arr_2 [i_0]), (((arr_2 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_2 [i_0]))))) : ((10 ? (arr_2 [i_0]) : (arr_1 [i_0] [4])))));
        var_17 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_18 = (((((arr_4 [i_1 + 2] [i_1 + 1]) && (arr_4 [i_1 - 1] [i_1 + 1]))) ? (((arr_4 [i_1 + 1] [i_1 - 1]) ? (arr_4 [i_1 + 2] [i_1 + 2]) : (arr_4 [i_1 + 1] [i_1 + 1]))) : (arr_4 [i_1 + 2] [i_1 - 1])));

        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            arr_8 [11] [13] = var_8;
            var_19 = ((((((arr_4 [i_1 + 1] [i_1]) ? (arr_5 [i_1 + 1]) : (max(65535, (arr_4 [i_1] [i_2])))))) ? var_3 : (max((arr_6 [i_2 + 1] [i_2 - 2] [i_2 - 2]), (arr_7 [i_2 + 1] [i_2 - 2] [i_2 - 2])))));
            var_20 += (arr_6 [i_1] [i_1 + 1] [i_1]);
        }
        /* vectorizable */
        for (int i_3 = 2; i_3 < 14;i_3 += 1)
        {
            var_21 = (arr_4 [i_1] [i_1]);
            var_22 += (((arr_3 [i_3 - 1]) ? var_10 : (arr_3 [i_3 + 1])));
            var_23 = (max(var_23, ((((arr_6 [i_3] [i_1 + 2] [i_3 + 2]) & ((var_11 ? (arr_6 [i_1] [i_1] [i_3 - 1]) : (arr_6 [i_1 - 1] [i_1] [i_1]))))))));
        }
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_24 = (arr_13 [i_4]);
        var_25 = (((arr_13 [i_4]) ^ (((((var_4 ? (arr_13 [i_4]) : var_8))) ? (((arr_13 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4]))) : (((arr_12 [i_4]) ? (arr_13 [i_4]) : (arr_13 [i_4])))))));
        var_26 = (min(var_26, ((((((((((arr_11 [i_4] [i_4]) ? (arr_12 [i_4]) : (arr_11 [18] [i_4])))) ? ((var_10 ? (arr_13 [19]) : (arr_12 [i_4]))) : (arr_13 [i_4])))) ? (((arr_13 [i_4]) ? (((64 ? 183 : -22405))) : (((arr_11 [0] [i_4]) ? 2147483647 : (arr_13 [i_4]))))) : (max((arr_12 [i_4]), (((arr_11 [2] [2]) ? (arr_13 [i_4]) : var_5)))))))));
        var_27 = ((((((arr_11 [1] [i_4]) ? ((var_11 ? (arr_11 [i_4] [i_4]) : 30)) : (max((arr_12 [i_4]), var_5))))) ? ((((arr_13 [i_4]) ? var_11 : (arr_13 [i_4])))) : 3560107156120683309));
        var_28 += (min((((arr_12 [i_4]) / (arr_13 [i_4]))), var_8));
    }
    var_29 = (((576460752303423488 < 255) ? var_0 : var_9));
    #pragma endscop
}
