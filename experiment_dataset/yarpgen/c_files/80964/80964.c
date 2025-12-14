/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [10] [i_1] [0] = ((((var_5 ? (min((arr_2 [5]), var_3)) : ((((arr_2 [2]) * var_13))))) >= ((min((3663184013 ^ -15343), ((((arr_8 [6] [i_1] [i_0]) | var_0))))))));
                    var_16 = (arr_8 [i_0 + 1] [i_2 - 3] [i_2]);
                    arr_10 [i_0] [i_1] = (max((((arr_4 [i_0 + 2] [8] [i_0 - 1]) & (arr_4 [i_0 - 1] [i_0] [i_0 - 1]))), (((631783282 ? 2147483631 : -35)))));
                }
            }
        }
    }
    #pragma endscop
}
