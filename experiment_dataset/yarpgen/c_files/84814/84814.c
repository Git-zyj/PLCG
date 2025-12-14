/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84814
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84814 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84814
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, ((max((min(var_9, var_5)), ((max((var_3 | var_7), (var_4 > var_11)))))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = max((arr_1 [i_0]), ((+(((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [14]))))));
        var_15 += (min((((((arr_1 [i_0]) > var_10)) ? (arr_1 [i_0]) : ((min(var_6, (arr_0 [i_0])))))), ((min((~var_12), (~var_10))))));
        var_16 = (max(var_16, ((((max((arr_0 [i_0]), (arr_0 [i_0]))))))));
        arr_3 [i_0] &= (((~(arr_1 [i_0]))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = (arr_5 [i_1] [16]);
        arr_7 [i_1] [i_1] = ((1 ? ((65535 >> (-447569916 + 447569920))) : 1));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_12 [6] = var_10;
        var_18 = (~var_8);
        var_19 = (((((arr_4 [i_2]) ? var_0 : var_9)) | (((~(arr_8 [i_2] [i_2]))))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_16 [i_3] = (((((arr_15 [i_3]) || (var_1 || var_7))) ? (((arr_15 [i_3]) ? ((((arr_15 [i_3]) >> (((arr_14 [i_3]) + 248625677))))) : (arr_13 [i_3]))) : (((~(((arr_14 [i_3]) ? var_6 : var_4)))))));
        var_20 -= (((((+(max((arr_13 [i_3]), var_4))))) ? 1 : (((arr_13 [i_3]) & (max(var_8, (arr_14 [i_3])))))));
    }
    var_21 = (min((max((var_7 > var_6), var_6)), ((-447569916 ? -447569913 : 0))));
    #pragma endscop
}
