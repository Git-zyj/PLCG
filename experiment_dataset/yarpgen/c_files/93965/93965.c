/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((!((min((((arr_1 [i_0]) * var_14)), (arr_3 [i_1 + 1] [i_0 + 1]))))));
                var_20 ^= min(((max(var_8, var_2))), ((((((arr_3 [i_0] [i_0 - 1]) * (arr_4 [i_0] [i_0] [i_1 - 3])))) ? (arr_1 [i_1]) : (((arr_0 [i_1] [i_1]) ? var_9 : (arr_2 [i_1]))))));
                var_21 = (((arr_1 [i_0]) && ((var_11 || (arr_1 [i_0])))));
            }
        }
    }
    #pragma endscop
}
