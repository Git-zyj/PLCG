/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67413
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67413 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67413
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (16523 >= 11843865969116042261);
    var_19 = (min(var_13, (max((var_0 - var_16), var_8))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_20 = (((arr_0 [i_0] [i_0]) ? -0 : (arr_0 [i_0] [i_0])));
        arr_2 [i_0] [i_0] |= ((((min((arr_0 [i_0] [i_0]), ((~(arr_0 [i_0] [i_0])))))) ? ((((~3842437639039596983) ? (((!(arr_1 [i_0])))) : (16615 <= 0)))) : ((48 ? -34 : (max(-3977430556013608051, 12288))))));
        arr_3 [i_0] = (((-1849 ? 9223372036854775807 : 6602878104593509373)) ^ (var_14 | 15));
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_21 = (max(((127 ? 2679406712 : (arr_4 [i_1]))), ((max(-1, (arr_5 [i_1]))))));
        arr_7 [i_1] = ((!(arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        var_22 = (arr_4 [i_2 + 1]);
        arr_10 [i_2] = (max(1848, 15));
        arr_11 [i_2] = min((~11843865969116042269), (((~(((arr_8 [i_2] [i_2]) & 1863809457))))));
        var_23 = ((((min(((var_9 ? 0 : (arr_8 [i_2] [i_2]))), (((44 / (arr_4 [i_2]))))))) ? (((127 ? 48 : 22))) : (((arr_5 [i_2 + 1]) ? (((max(1850, -2689)))) : (min((arr_4 [i_2]), (arr_9 [i_2])))))));
    }
    var_24 = (((((((max(var_6, 0))) ? (~0) : (1848 / 207)))) / ((var_4 ? (min(var_11, var_13)) : var_0))));

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        arr_14 [i_3] = (((arr_8 [6] [i_3]) ? (((((0 ? 1 : 14604306434669954632))) ? (arr_5 [i_3]) : (((arr_9 [i_3]) ? (arr_13 [i_3] [i_3]) : var_6)))) : ((-8166 ? var_9 : (((-(arr_5 [i_3]))))))));
        arr_15 [2] [i_3] = (arr_12 [i_3]);
    }
    #pragma endscop
}
