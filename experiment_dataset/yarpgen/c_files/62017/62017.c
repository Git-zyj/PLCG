/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        arr_4 [i_0] = (((arr_2 [i_0]) ? 46 : (arr_2 [i_0])));

        /* vectorizable */
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            arr_8 [i_1] [i_0] [i_0] = ((+((((arr_1 [i_0] [i_1]) < (arr_2 [i_1 + 2]))))));
            var_11 = 9223372036854775807;
            var_12 = ((+((var_5 ? (arr_3 [2]) : 17))));
        }
        for (int i_2 = 3; i_2 < 6;i_2 += 1)
        {
            var_13 = ((max(((4705706684175723531 ? (arr_3 [i_2]) : (arr_6 [1] [i_2]))), ((var_6 ? (arr_6 [i_0] [i_0 - 1]) : 4294967295)))));
            var_14 = (min(var_14, ((((((((((arr_6 [i_0] [i_2]) - var_8))) ? (arr_0 [i_2]) : (arr_2 [i_0 - 1])))) ? ((((((arr_7 [i_0 - 1] [i_0 - 1] [i_0]) ^ (arr_5 [i_0] [2] [i_0])))) ? -32753 : (arr_0 [i_2 - 1]))) : ((~(((arr_3 [8]) / (arr_5 [9] [i_0 + 1] [i_0 + 1]))))))))));
            arr_13 [i_2] = (arr_0 [i_0]);
        }
        for (int i_3 = 2; i_3 < 8;i_3 += 1)
        {
            arr_18 [i_3] [i_3 - 2] [i_3 - 2] = (((min((max((arr_15 [i_0]), (arr_0 [i_0]))), ((!(arr_6 [i_0] [i_3]))))) ? (arr_3 [i_0]) : (!62)));
            arr_19 [i_3 + 2] [i_0] = (arr_7 [i_0 - 1] [i_0] [i_3]);
            var_15 += (min(717613135, -28175));
            var_16 += ((-(min((min(var_6, -26658)), (((-110 ? (arr_7 [i_3] [i_0] [i_0]) : (arr_16 [i_0 - 1]))))))));
        }
    }
    for (int i_4 = 2; i_4 < 15;i_4 += 1)
    {
        var_17 = (min(var_17, ((((((101 % (arr_21 [i_4 - 2])))) ? ((((arr_22 [i_4 - 2]) ? (arr_22 [i_4 - 2]) : (arr_22 [i_4 - 2])))) : (~1013279279))))));
        arr_23 [i_4] = (((((-16980 & (arr_20 [i_4 - 2])))) ? (((arr_22 [i_4]) ? 2705 : (arr_22 [1]))) : ((((((min(63, (arr_21 [i_4])))) && (arr_20 [i_4])))))));
        var_18 |= ((!((min(var_1, (arr_22 [i_4 - 1]))))));
        var_19 = ((((max(4294967288, -2352))) && var_9));
    }
    var_20 = (((((-var_1 / (max(var_4, var_3))))) ? var_8 : var_7));
    var_21 = var_4;
    #pragma endscop
}
