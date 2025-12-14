/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97441
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97441 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97441
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((min(1489118328, 5548))) | (max(var_0, -1310491351902956113))))) ? 15278 : var_6));

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        arr_2 [0] [i_0] = ((((min((var_13 / 4171720161), var_6))) ? ((var_8 << (var_16 - 99))) : (max(((var_1 ? (arr_0 [i_0] [i_0]) : var_8)), (arr_1 [i_0])))));
        arr_3 [i_0] = ((~(((arr_0 [i_0 + 1] [i_0 - 1]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 - 2] [i_0 - 2])))));
        var_19 = (min(var_19, ((((((arr_0 [i_0 + 1] [i_0 - 1]) + 3336444695)) << (((min(var_6, (arr_1 [8]))) - 31800)))))));
        var_20 = (max(((((((194 ? -5548 : (arr_0 [i_0] [i_0])))) || -var_6))), -23));
    }

    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        var_21 = (max(var_21, (((var_9 ? (((!(arr_6 [i_1])))) : (((!((var_13 != (arr_6 [i_1])))))))))));

        for (int i_2 = 1; i_2 < 16;i_2 += 1)
        {
            arr_10 [i_1] [i_1] = 329226454509567833;
            var_22 = (((2865999001 ? -10140 : 2461565083)));
        }
        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_23 = 234;
            arr_13 [i_3] [i_1] [i_1] = var_15;
            arr_14 [i_1] [i_3] = ((-((((max((arr_12 [16] [i_1] [i_1]), 2158761453))) ? ((3276059055 ? 2716472240 : var_14)) : ((0 ? 918287105 : 185))))));
        }
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            arr_18 [i_1] = ((48513 ? (max(969520980, 1489118328)) : var_1));
            arr_19 [i_4] &= ((((~(arr_4 [i_4]))) >> ((((-(arr_6 [i_1]))) - 2020964035))));
        }
    }
    var_24 = ((var_8 | (max(-8184168957186262559, 245670614658639120))));
    #pragma endscop
}
