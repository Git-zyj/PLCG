/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_14 = var_5;
                        var_15 -= ((!((((arr_4 [i_0] [i_1] [i_2]) << (((-32521 + 32541) - 6)))))));
                        var_16 = ((!(arr_1 [i_1])));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        var_17 = ((arr_6 [i_0] [i_1] [i_2] [i_2]) & var_5);
                        var_18 &= 32520;
                    }
                    arr_14 [i_0] [i_1] [i_2] = (min(-32521, -32521));
                    var_19 = (arr_9 [i_2] [i_2] [i_1] [i_1] [i_0]);
                }
            }
        }
    }
    var_20 ^= var_11;
    #pragma endscop
}
