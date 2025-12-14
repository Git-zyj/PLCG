/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-5891145664614440676 + 9223372036854775807) << (37031 - 37031));
    var_14 = (min(((((3302654304958484181 ? var_5 : var_6)))), (((2045054790664534071 + var_10) % 1))));
    var_15 = (var_6 <= var_2);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = (arr_1 [i_0]);
        var_16 *= (((var_11 & var_0) ? 27859 : ((~(arr_1 [i_0])))));
        arr_3 [i_0] = (!0);
    }
    for (int i_1 = 4; i_1 < 13;i_1 += 1)
    {
        arr_7 [i_1] [i_1] &= ((((max(var_7, (min((arr_4 [14] [8]), (arr_5 [i_1])))))) ? ((var_5 ? (arr_6 [i_1 - 4]) : var_12)) : 1));
        var_17 *= ((((-2044 == (max((arr_4 [i_1] [i_1 - 2]), 1)))) ? (!2251662374731776) : ((1 ? ((var_8 ? (arr_6 [i_1]) : 5891145664614440675)) : var_2))));
        arr_8 [5] = (((-(arr_1 [i_1 + 3]))));

        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_18 = (max(((0 ? 8206 : 0)), ((((arr_6 [i_1 - 3]) & (arr_6 [i_1 - 1]))))));
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    {
                        arr_20 [i_3] [i_2] = ((57337 % ((~(arr_6 [i_1])))));
                        arr_21 [i_1] [i_1] [i_1] |= (arr_10 [i_2]);
                    }
                }
            }
            arr_22 [i_1] = 8822727582586346215;
            var_19 = (9025 ? (((((min((arr_18 [i_1] [i_1] [10] [i_1]), var_11))) ? ((max(var_5, 65509))) : 57337))) : ((((min(27490, (arr_18 [i_1] [i_1] [i_1 - 3] [1])))) ? (arr_12 [i_1 - 3] [i_1 + 2] [i_1]) : 0)));
            var_20 = (((((39725 ? 46125 : 23428))) ? 1 : 1));
        }
        var_21 = (min((min((((arr_18 [i_1 + 1] [i_1] [i_1] [i_1]) ? 1 : var_8)), ((((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1]) ? (arr_14 [3] [i_1] [i_1] [i_1]) : (arr_0 [22] [9])))))), ((min((34867 % 1), ((max((arr_19 [i_1] [i_1] [i_1 + 2] [i_1] [4]), var_4))))))));
    }
    #pragma endscop
}
