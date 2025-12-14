/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 -= (((min(-751500152, 191))));

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_12 = (arr_2 [i_0 - 1]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = -3193581221618974710;
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0 - 1] [i_1] [15] [i_3 - 2] [i_4] = (arr_1 [i_2]);
                                arr_16 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((751500151 + (max(35504618263975323, 3193581221618974710))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
