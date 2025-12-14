/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((((((var_2 ? ((-23282 ? var_7 : var_3)) : var_7))) ? (max((((-26555 ? var_2 : var_8))), (2462351394 + var_1))) : var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_11 = ((arr_1 [i_0] [i_1 + 2]) << (((arr_4 [i_2] [i_1 - 2] [i_0]) - 110159736)));
                    var_12 = max(((((arr_0 [i_1 - 1]) || (arr_0 [i_1 - 1])))), (arr_2 [i_0] [i_2]));
                    var_13 = ((((min((arr_2 [i_1] [i_1]), (min((arr_1 [11] [i_1]), (arr_2 [i_0] [i_1])))))) ? (((var_1 ? -120 : (arr_1 [i_0] [i_2])))) : (((+(max((arr_0 [3]), (arr_4 [i_0] [i_0] [i_0]))))))));
                    var_14 = var_4;
                }
            }
        }
    }
    #pragma endscop
}
