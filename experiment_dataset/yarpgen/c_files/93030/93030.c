/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93030
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93030 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93030
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -37;
    var_15 = (min(var_4, var_7));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_16 -= ((!((((arr_8 [i_1 - 1] [i_2] [i_2] [i_0]) ? (arr_8 [i_1 + 2] [i_1] [i_2] [i_1]) : (arr_5 [i_1 + 2] [i_1 - 2]))))));
                    var_17 = var_5;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    arr_14 [i_0] [1] [i_3 + 2] = ((!(arr_12 [i_3 - 1] [i_3] [i_3 + 1] [8])));
                    var_18 = (((~4498344976726331199) >= var_12));
                }
                arr_15 [i_0] = 2860646364479013073;
                arr_16 [i_1] [i_0] = (!1985970568);
                var_19 = (min(var_19, ((((((-(arr_5 [i_0] [i_1 + 3])))) ? (min((arr_13 [i_1] [i_1 - 3] [i_1 - 3] [i_0]), (arr_1 [i_1 - 1]))) : -987529713)))));
                arr_17 [i_0] [i_0] [i_0] = (max(((((((var_1 ? (arr_13 [i_0] [i_1 - 3] [i_1] [1]) : (arr_5 [i_0] [i_0])))) && (arr_8 [i_1] [3] [i_0] [i_0])))), (((((2614921099 ? -2776640038404870739 : -196160188821853544))) ? (var_2 + var_4) : var_1))));
            }
        }
    }
    #pragma endscop
}
