/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 = 217;
            var_14 = ((((((((arr_5 [i_0]) ? 2056154978 : 0))) && (arr_1 [i_0]))) ? var_7 : ((((var_11 || 1) || (((95 ? 75 : var_10))))))));
        }
        arr_6 [i_0] = (((arr_5 [i_0]) / (((136 ? 1 : (arr_0 [i_0] [i_0 - 1]))))));
        arr_7 [i_0] = ((((((arr_5 [i_0 + 1]) ? var_0 : (arr_2 [i_0])))) + -8634063438312177113));
        var_15 = ((117 && (((arr_2 [i_0]) == (arr_4 [i_0] [i_0 + 1])))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_10 [i_2] [9] = arr_2 [i_2];
        var_16 = (max(var_16, ((((((((((arr_8 [i_2]) && var_3)))) + (arr_5 [i_2]))) > (8634063438312177104 && 252))))));
        arr_11 [i_2] = (((((arr_0 [i_2] [i_2]) * (arr_2 [i_2]))) / ((((arr_9 [i_2] [i_2]) ? (((arr_1 [i_2]) ? 122 : var_4)) : ((((arr_3 [11] [i_2]) != (arr_5 [i_2])))))))));
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 22;i_3 += 1)
    {
        var_17 = (((117 * 128) ? (1 / var_9) : var_8));
        arr_14 [i_3 - 1] = (var_1 % 1);
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_18 |= ((((((arr_13 [i_4]) ? var_12 : 181))) ? (((max(8634063438312177113, 138)) % ((((var_2 && (arr_15 [i_4]))))))) : 0));
        arr_17 [i_4] = 16353697521054968560;
    }
    var_19 = ((var_1 ? (((617037153 ? 133 : 179))) : (min(9223372036854775807, ((max(160, -1)))))));
    var_20 = (min(var_20, var_5));
    var_21 = ((var_12 ? ((var_6 & (-118 | var_8))) : var_1));

    for (int i_5 = 1; i_5 < 19;i_5 += 1)
    {
        arr_21 [i_5] = (arr_18 [i_5] [i_5]);
        var_22 |= (((arr_13 [i_5]) ? ((((212 >= var_5) && (((var_4 ? var_1 : (arr_20 [i_5]))))))) : (((((0 >> (var_8 - 1873485478)))) ? (0 != var_4) : 46))));
        arr_22 [i_5] = var_5;
    }
    #pragma endscop
}
