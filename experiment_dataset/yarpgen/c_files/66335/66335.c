/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66335
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (min(((min(((max(1, 1))), var_12))), (((var_0 - var_1) ^ ((min(-13331, var_1)))))));
    var_18 |= (min((9223372036854775807 / var_8), var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [0] [0] [0] |= (((arr_0 [i_0 - 2] [i_0 - 1]) != (((var_9 & ((max(var_14, var_15))))))));
                var_19 += ((((((arr_4 [i_0] [i_0]) - (((arr_1 [10] [i_0]) ? 3463531649 : var_1))))) + (min(((-(arr_4 [i_1 - 1] [i_0]))), (arr_0 [i_1 - 2] [i_1 - 2])))));
            }
        }
    }
    var_20 = max(var_7, var_3);
    #pragma endscop
}
