/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] = 956;
        var_10 -= ((!((((((1 ? 7729127693877277590 : 1104537108))) ? (((arr_0 [8]) ? (arr_1 [12] [i_0]) : var_5)) : (((max(16775, 31)))))))));
        arr_3 [i_0] = (((((var_2 ? (~32766) : (((arr_1 [i_0] [i_0 - 1]) ? (arr_0 [i_0]) : var_2))))) ? (((((var_7 ? (arr_0 [i_0]) : var_3))) ? (((arr_1 [i_0] [i_0]) >> (((arr_1 [5] [5]) - 3065355820)))) : (~var_8))) : (((~((~(arr_0 [i_0]))))))));
        var_11 = (((arr_1 [i_0 + 1] [i_0 - 1]) ? ((((arr_0 [i_0 + 1]) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 + 1])))) : (((arr_0 [i_0 - 1]) ? (arr_0 [i_0 + 1]) : (arr_1 [i_0 + 1] [i_0 - 1])))));
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] = (max(((var_3 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1 - 1]))), ((var_5 ? (arr_4 [i_1] [i_1]) : (arr_4 [i_1] [i_1])))));

        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            var_12 = (((((((((arr_10 [20]) >> (var_6 - 95)))) ? (max((arr_8 [i_1]), (arr_5 [i_1]))) : (~1687)))) ? var_4 : -16510808283651839848));
            var_13 = (~var_5);
            var_14 = (min((((arr_10 [1]) ? (((arr_5 [i_1]) ? var_9 : (arr_11 [i_1]))) : ((((arr_4 [i_1] [i_2]) ? (arr_6 [i_1]) : (arr_10 [i_2])))))), ((17971412459256459537 ? (((arr_8 [i_1]) ? -1055340484 : (arr_11 [i_1]))) : var_6))));
        }
        for (int i_3 = 3; i_3 < 22;i_3 += 1)
        {
            arr_14 [i_1] = (arr_4 [i_1] [i_3]);
            var_15 = var_6;
            arr_15 [i_1] [i_3 - 1] = (arr_9 [i_3] [i_1]);
        }
    }
    var_16 = var_1;
    var_17 = var_1;
    #pragma endscop
}
