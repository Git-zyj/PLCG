/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76324
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_11;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_11 [i_0] [i_0] [i_2] [i_3] [2] = -30024;
                        arr_12 [i_0 - 1] [i_0 - 1] [i_2] = 1;
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        arr_17 [i_0] [i_1] [5] [i_2] [i_2] [i_4] = var_16;
                        arr_18 [i_4] [i_2] [i_2] [i_1] [2] = (((0 ^ 12964154125195267267) ^ (arr_8 [i_0] [i_0 - 1] [8])));
                    }
                    var_18 = ((~(var_4 == 28629)));
                    var_19 = 1;
                }
            }
        }
    }
    var_20 = 5079;
    var_21 = 5482589948514284333;
    #pragma endscop
}
