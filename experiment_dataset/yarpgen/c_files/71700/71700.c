/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71700
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71700 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71700
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((((-((var_13 >> (var_13 - 8974926949963410021)))))) ? ((2069910016224348641 ? -434553984 : 3063958487580733889)) : (min(var_9, (((var_2 ? 6658 : (arr_6 [i_0] [i_1]))))))));
                arr_8 [11] [6] [i_1] = var_11;
                arr_9 [i_0] = (max(((var_7 ? (min((arr_4 [1]), 16376834057485202971)) : (((16376834057485202974 ? 453835789 : 44784))))), (!var_14)));
            }
        }
    }
    var_18 = (~(!var_0));
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            {
                var_19 = ((~(var_6 < var_8)));
                var_20 = ((((((((arr_4 [i_2 + 3]) - var_11))) - var_9)) + (min((min(var_14, var_15)), (((arr_3 [11] [2] [i_3]) + 16376834057485202982))))));
            }
        }
    }
    #pragma endscop
}
