/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((-((4071789532 ? 20 : var_6)))) < (((~(~-21))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_16 -= (!var_11);
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 20;i_3 += 1)
                {
                    {
                        var_17 = (max(((((arr_7 [i_0] [i_0] [i_0 + 2]) < (arr_7 [i_0] [i_0 + 4] [i_0 + 2])))), (((min((arr_8 [i_0] [i_1 - 2] [8]), 424966608230010527)) >> (arr_10 [i_3 - 1] [i_0 + 4] [i_2 + 2])))));
                        arr_12 [i_2] [i_0] [9] [3] [i_3] [1] = (-1 ? 102 : (arr_2 [i_0 + 2] [i_0 + 2]));
                    }
                }
            }
        }
    }
    #pragma endscop
}
