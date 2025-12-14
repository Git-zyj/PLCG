/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 660
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=660 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/660
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 = (min(var_12, var_1));
                                var_13 -= (max((22 << 22), (arr_8 [i_0] [i_1] [i_0] [i_0] [i_0])));
                            }
                        }
                    }
                }
                var_14 = ((((((arr_1 [i_0]) != 22))) >> (((~14) + 35))));
            }
        }
    }
    var_15 = 8409598587265974765;
    #pragma endscop
}
