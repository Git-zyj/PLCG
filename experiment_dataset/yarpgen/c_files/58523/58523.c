/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (!-1069957769);
                    var_13 = ((((max((arr_7 [i_0] [11] [i_1 - 1] [i_2]), (max(14, var_6))))) ? ((56478 ? (2169415919 | 24525) : (0 % 24527))) : ((((((max((arr_2 [11]), (arr_8 [i_1] [i_2])))) && var_6))))));
                    var_14 -= (1223725962 + 6117);
                }
            }
        }
    }
    var_15 *= var_6;
    #pragma endscop
}
