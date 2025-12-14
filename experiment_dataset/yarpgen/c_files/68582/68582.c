/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68582
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 1;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 23;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_2 - 1] [i_3] = var_14;
                            arr_13 [i_0 + 2] [5] [i_0 + 2] [i_2] [i_3 + 1] [i_3] = (((!1) == (((arr_10 [i_0 + 1] [i_0] [i_0] [i_1 - 1]) + var_7))));
                        }
                    }
                }
                var_16 = max((((((min(var_12, var_11))) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_0]) : (var_11 - 1)))), (min((0 / 3392238441), var_12)));
            }
        }
    }
    var_17 |= (((var_14 ? (((min(1, var_12)))) : (16570480151192218011 ^ var_3))));
    var_18 = (max(var_18, var_13));
    #pragma endscop
}
