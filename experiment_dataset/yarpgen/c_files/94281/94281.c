/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94281
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94281 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94281
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 -= (arr_1 [6]);
                var_14 = ((3 ? 235 : 20));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_15 = (min((((arr_5 [i_0] [i_0 + 3]) ? (arr_5 [i_0] [i_2]) : ((34942 % (arr_9 [i_0] [i_1] [i_1] [i_3]))))), ((((arr_0 [i_0 + 1] [i_0 + 1]) ^ 1581807497)))));
                            var_16 = (max((arr_10 [i_0 - 1]), (arr_10 [i_0 - 1])));
                            var_17 -= var_0;
                        }
                    }
                }
                var_18 = (min(var_18, ((min((arr_1 [0]), 0)))));
                var_19 *= ((!(((((2713159798 ? 942182691117328674 : (arr_0 [i_0] [i_1])))) && ((min(0, var_9)))))));
            }
        }
    }
    #pragma endscop
}
