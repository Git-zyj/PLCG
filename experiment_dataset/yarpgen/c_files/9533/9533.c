/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (arr_5 [i_1] [i_1] [i_1 - 1] [i_1 - 1]);
                    var_11 = ((((arr_5 [i_0] [i_2] [i_2] [i_2]) || (arr_5 [i_0] [i_0] [i_1] [i_2]))) ? (arr_5 [i_0] [i_1 - 1] [i_2] [i_1]) : (arr_5 [i_0] [i_1] [i_2] [i_2]));
                }
            }
        }
    }
    var_12 += (((((max(var_3, var_1)) ? ((((-9223372036854775807 - 1) && var_0))) : var_2))));
    #pragma endscop
}
