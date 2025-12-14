/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76240
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    arr_11 [1] [i_2 + 4] = var_16;
                    arr_12 [i_0] [9] [6] = (arr_10 [i_2] [17] [i_1] [i_0]);
                    arr_13 [i_0] [19] [i_1] [i_2] = (((arr_3 [0] [i_1 + 1]) ? 3111384102 : 25563));
                    arr_14 [i_0] = (((((((min(var_17, (arr_6 [i_2])))) ? (~0) : (((var_1 + 2147483647) << (var_10 - 9302499122661740464)))))) ^ (((arr_3 [20] [i_0]) ? (max(1183583194, (arr_1 [i_1]))) : (arr_7 [i_1 + 1] [i_1 - 1] [i_1])))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = (((((((arr_2 [14]) % 262143)) >> (9223372036854775807 - 9223372036854775787))) >> ((((((arr_6 [i_0]) + -12533)) <= (arr_8 [3] [i_2 + 4] [i_1 + 1] [i_2]))))));
                }
            }
        }
    }
    var_19 = var_15;
    var_20 &= (((max(-24589, ((var_14 ? 11459 : 46)))) < ((((var_5 && var_0) && (!var_13))))));
    var_21 = (((+-4411964590815606867) ? var_17 : var_11));
    var_22 = (max((((var_6 == 7) - ((209 ? var_15 : 3111384102)))), var_16));
    #pragma endscop
}
