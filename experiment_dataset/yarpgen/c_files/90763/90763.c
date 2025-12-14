/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= ((!(((var_12 / (((var_2 ? var_9 : var_3))))))));
    var_21 |= var_1;
    var_22 = max(((1044499516 ? 1044499516 : (((var_6 ? 1 : -116))))), 1);

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_23 = ((!(((79 ? ((((arr_1 [i_0]) ? var_3 : 65522))) : (~var_18))))));
        var_24 *= ((!(((131071 ? (((var_10 / (arr_1 [i_0])))) : (-2147483647 - 1))))));
        var_25 = ((128 ? (((var_4 ? var_5 : 3250467779))) : ((4239678114594369341 ? 18446744073709551615 : (arr_1 [17])))));
        var_26 |= ((((min(var_19, 202208003))) / (((arr_0 [16] [i_0 - 1]) ? 125 : ((1624779983 ? 18005777272560569458 : 63))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_27 = (max((((~(arr_1 [i_0 - 1])))), (((arr_3 [i_0] [1]) ? (((9223372036854775807 ? 65024 : 113))) : (arr_3 [i_0] [i_0 - 1])))));
            arr_4 [i_0] [13] = ((79 ? ((((var_8 && 126) ? (((arr_0 [i_0] [i_0]) ? (arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : var_4)) : (arr_2 [i_0 - 1] [17] [i_0 - 1])))) : ((((!(arr_2 [i_0] [1] [5]))) ? ((((arr_2 [i_1] [i_1] [1]) ? (arr_2 [0] [i_1] [11]) : var_3))) : (((arr_1 [i_0]) ? (arr_3 [i_1] [i_1]) : -1))))));
        }
        /* vectorizable */
        for (int i_2 = 3; i_2 < 16;i_2 += 1)
        {
            arr_7 [i_0] [i_0] [i_0] = (~13540058060517030916);
            var_28 *= (~var_17);
            var_29 = (!var_5);
        }
    }
    #pragma endscop
}
