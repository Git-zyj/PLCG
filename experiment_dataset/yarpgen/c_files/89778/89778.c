/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89778
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    var_16 = (max(((~(var_7 && var_8))), var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (arr_0 [8]);
        arr_3 [6] [i_0] = var_11;
        arr_4 [i_0] = (min((((arr_0 [i_0]) | (arr_0 [i_0]))), (((arr_0 [i_0]) * (arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_18 = (((var_5 | -1030107546) >= ((((((-544195818 || (arr_5 [i_1])))) >= (((arr_1 [i_1]) ? var_8 : 544195833)))))));
        var_19 *= max((arr_6 [i_1]), ((min(var_14, var_2))));
        arr_7 [i_1] = (arr_6 [i_1 - 1]);
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((max((arr_10 [i_2]), (arr_9 [i_2]))) & (arr_8 [i_2])));
        arr_12 [i_2] [i_2] = var_8;
        var_20 = (-(max(var_4, (min(var_14, -544195818)))));
    }
    #pragma endscop
}
