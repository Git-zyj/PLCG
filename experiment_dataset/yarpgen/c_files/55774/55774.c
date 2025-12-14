/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_7 >> (var_7 >= var_3)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_0] = (((((arr_1 [i_1]) ? (arr_3 [i_1]) : var_11))) ? (arr_1 [i_0]) : ((var_0 ? var_5 : (arr_1 [i_0]))));

            /* vectorizable */
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                var_17 = (((arr_1 [i_0]) ? var_6 : (((arr_3 [i_0]) ? var_0 : 243))));
                var_18 = (max(var_18, ((((243 ? (arr_0 [i_0] [i_0]) : 8))))));
            }
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_13 [8] [8] [i_0] = ((~((~((-59 ? (-32767 - 1) : 32752))))));
            var_19 *= (min(1267127581, (((arr_8 [i_0] [2] [i_0]) ? (arr_6 [i_0] [i_0] [i_3] [i_3]) : 590734143))));
        }
        var_20 *= (((((14113456085921543347 ? 32752 : 62328))) ? ((((arr_10 [i_0] [i_0]) ? var_0 : (arr_10 [i_0] [i_0])))) : ((((-100 ? var_14 : 0)) * (var_13 / 4333287987788008274)))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        arr_17 [i_4] = (max((((var_6 ? -1 : var_10))), (min(((var_10 | (arr_16 [i_4]))), (1855957649208376863 % 1)))));
        arr_18 [i_4] = (((arr_15 [22] [i_4]) ? ((-(arr_14 [i_4] [i_4]))) : ((-(((arr_15 [i_4] [i_4]) ? -1295163439 : (arr_14 [i_4] [i_4])))))));
        arr_19 [i_4] = 18446744073709551615;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_21 = ((-1 ^ (((arr_8 [i_5] [i_5] [i_5]) ? (32733 / 29078) : 1))));
        arr_22 [9] [i_5] = (((var_11 != var_1) + (max((((~(arr_3 [i_5])))), (arr_1 [i_5])))));
        var_22 = (min(var_22, (0 ^ 239)));
        arr_23 [i_5] [i_5] = ((min(var_11, ((4333287987788008269 ? var_15 : (arr_9 [i_5] [i_5]))))));
        var_23 = (min(var_23, ((((!10348096669249537306) ? 1295163439 : ((+(((arr_12 [i_5]) ? var_0 : -256)))))))));
    }
    #pragma endscop
}
