/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56019
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~((var_2 / (32767 * 32767)))));
    var_18 = (min(var_8, var_13));
    var_19 = (min(var_14, (min(((var_12 ? 32767 : var_8)), ((min(var_4, var_14)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_6 [20] = ((((min(-16, 16))) * (arr_0 [i_0 - 1] [i_0 + 1])));
                arr_7 [1] [1] [i_0] = min(var_1, (min((arr_5 [i_0 - 2]), (arr_1 [i_0 - 2] [i_1]))));
                var_20 = (max(var_20, ((((((min((arr_3 [i_1]), -18558)))) ? (((var_10 >= (arr_3 [i_0 - 1])))) : (((arr_2 [i_0 - 1] [i_1]) + var_7)))))));

                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_21 = ((((min(-25938, ((max((arr_3 [i_0]), (arr_0 [i_0] [i_0]))))))) ? 12553 : (((arr_8 [i_2] [i_1] [i_0 - 1] [i_0 + 1]) / ((max((arr_1 [i_0 + 1] [i_0]), var_13)))))));
                    arr_11 [i_0] [i_1] [i_2] = (((arr_10 [i_0 + 1]) ? (((arr_10 [i_0 - 1]) ? (arr_10 [i_0 + 2]) : (arr_10 [i_0 - 2]))) : (arr_10 [i_0 + 1])));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    arr_16 [i_3] = arr_12 [i_3] [i_3] [i_1] [i_0];
                    var_22 = ((((((min(var_10, (arr_10 [i_0 - 2])))) + 2147483647)) << (((((((arr_14 [14] [i_1] [i_1] [i_0 - 2]) ? (arr_5 [i_0 - 2]) : var_10)) + 25261)) - 13))));
                    var_23 = (arr_8 [i_0] [i_0 + 1] [i_0 + 1] [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
