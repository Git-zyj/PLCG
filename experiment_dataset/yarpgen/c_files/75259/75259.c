/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75259
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((((((arr_1 [i_0 - 3] [14]) / -16384)) + 9223372036854775807)) << (var_5 - 2278493336358260530));

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    var_19 = ((max(var_2, var_7)));
                    var_20 = (((arr_1 [i_0] [i_1]) ? 1 : (((((-(arr_7 [i_2] [i_1] [1])))) ? 6014974680299179709 : 6351))));

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_21 = var_9;
                        var_22 = (((-127 - 1) ? 124 : 2194876474803872950));
                    }
                }
                arr_11 [i_0] [i_1] = var_15;
                var_23 = ((((((var_7 + -433387365) ? (arr_9 [i_0 + 1] [i_0 - 3] [i_0 - 4] [i_0 - 4]) : (arr_1 [i_1] [i_0])))) ? (~30) : var_15));
                var_24 = (~-17643);
            }
        }
    }
    var_25 = ((min(((var_9 ? var_8 : var_11)), ((var_4 ? var_0 : var_10)))));
    var_26 = (1423612227 ? 4026531840 : 62);
    #pragma endscop
}
