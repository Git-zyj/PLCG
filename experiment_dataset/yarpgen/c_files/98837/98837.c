/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;
    var_12 = var_4;

    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0 + 2] = (~var_2);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                var_13 = (min(var_13, 2664));
                var_14 = max((min(((9223372036854775807 ? 3151478696 : var_8)), (((arr_7 [i_2] [i_1] [i_0]) - 3699371263)))), ((((max((arr_7 [i_2] [i_1] [i_0 - 4]), (arr_7 [i_0] [i_1] [i_0])))) ? (min((arr_7 [i_0] [i_1] [i_1]), var_1)) : (((arr_5 [i_0] [i_0] [i_1]) ? 0 : 4294967295)))));
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                var_15 = (min(var_15, (351160451 == 110)));
                var_16 += (~1501462763);
                arr_12 [i_3] [i_1] [i_1] [i_0] = (((arr_5 [i_0] [i_0 + 1] [i_1]) ? (arr_5 [i_0 + 2] [i_0 - 1] [i_1]) : (arr_5 [i_0] [i_0 - 4] [i_1])));
                var_17 -= (((arr_8 [i_0] [i_0 + 2] [i_0]) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 3])));
            }
            /* vectorizable */
            for (int i_4 = 3; i_4 < 21;i_4 += 1)
            {
                arr_16 [i_4] [i_1] [i_4] = 3699371263;
                var_18 = ((~((-1754616301264738731 ? var_1 : 2793504533))));
                var_19 = ((!(arr_5 [i_1] [i_0 - 3] [i_1])));
            }
            arr_17 [i_0] [i_0] [i_1] = ((3151478696 ? var_6 : ((((arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 3]) + var_10)))));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            var_20 = (max(var_20, ((((((arr_14 [i_0 + 1]) / (arr_14 [i_0 - 1])))) / ((0 ? (arr_18 [i_0 - 1] [i_0]) : (arr_6 [i_5] [i_0 - 1] [i_0 - 1])))))));

            /* vectorizable */
            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_21 = (arr_21 [i_0 - 1] [i_0 + 2] [i_0 - 1]);
                var_22 = (-1754616301264738731 ? (arr_4 [i_6]) : (arr_6 [i_5] [i_5] [i_5]));
            }
            var_23 ^= ((1501462763 + (arr_14 [i_0 + 2])));
        }
    }
    for (int i_7 = 1; i_7 < 1;i_7 += 1)
    {
        var_24 -= arr_21 [i_7] [i_7] [i_7 - 1];
        var_25 = ((62871 ^ (((var_0 >> (62872 - 62861))))));
        arr_26 [i_7 - 1] = var_8;
    }
    #pragma endscop
}
