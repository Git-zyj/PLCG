/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1;
    var_18 |= -1259698743;
    var_19 = (max(var_19, 4286662812436895394));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_20 += (arr_0 [i_0 - 2] [i_0 - 1]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            arr_5 [1] [i_1] [1] = ((-(arr_4 [i_0 + 2])));
            var_21 = 1;
            var_22 = (((arr_1 [i_0 - 1]) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0 - 1])));
            var_23 += (((((var_8 ^ (arr_2 [i_0])))) ? (arr_2 [i_0 - 2]) : (arr_3 [i_1] [i_0])));

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                var_24 = (arr_7 [i_2]);
                var_25 = ((1259698718 ? (((-7740 ? -1987154419 : 6924025284701293530))) : ((1 ? (arr_7 [i_2]) : 1))));
            }
        }
        var_26 = (min(var_26, (!7422829232962316102)));
    }
    #pragma endscop
}
