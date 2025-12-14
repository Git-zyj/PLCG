/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58113
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_9 ? -var_1 : var_4))) ? ((min(((var_9 ? 11 : var_1)), var_1))) : ((var_4 ? (~-1520684650) : ((var_5 ? var_7 : var_4))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_11 = (((-(arr_1 [i_0]))) & (((arr_1 [i_0]) & (arr_1 [i_0]))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_8 [i_2] [i_2] = arr_6 [i_0] [18] [i_1] [i_2];
                    var_12 -= (((arr_3 [i_0]) && ((var_8 || (arr_3 [i_0])))));
                }
            }
        }
        var_13 = ((-((var_3 ? var_5 : 1212862887))));
        var_14 = (max(var_14, ((min(var_7, ((((((arr_7 [i_0] [i_0] [i_0] [i_0]) ? var_9 : var_9)) * ((min(var_1, 0)))))))))));
        var_15 = (1520684649 ? (max((arr_2 [i_0] [i_0]), var_4)) : ((((arr_2 [i_0] [i_0]) ? 768 : ((170 ? (arr_5 [i_0] [8] [i_0] [i_0]) : var_2))))));
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_16 = 1520684649;

        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            var_17 = (max(var_17, ((((1520684650 ? 0 : (arr_12 [i_3] [i_3] [i_3])))))));
            var_18 = var_0;
            var_19 = (arr_10 [i_4]);
            var_20 -= ((!(arr_11 [i_3])));
        }
        var_21 = ((209 && (arr_9 [i_3])));
    }
    for (int i_5 = 4; i_5 < 12;i_5 += 1)
    {
        var_22 = ((((((var_1 ? 21 : var_2)))) ? (var_6 > 1520684649) : ((((!var_4) >= (arr_11 [i_5]))))));
        var_23 = (arr_11 [i_5]);
        var_24 = (((((min((arr_6 [i_5] [i_5 - 4] [i_5 - 4] [i_5 + 2]), -86)))) ? var_4 : ((((((var_1 && (arr_7 [8] [i_5] [i_5] [i_5])))) & ((-(arr_3 [i_5]))))))));
    }
    #pragma endscop
}
