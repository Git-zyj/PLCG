/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(6, 4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] &= (6 & 65509);
                var_17 += (((arr_4 [i_0] [i_1 + 1]) <= (max(65509, 1936137317))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 -= (arr_9 [18] [i_0]);
                            var_19 = (max(var_19, ((max(-65518, (max(0, 8506394107366195593)))))));
                        }
                    }
                }
            }
        }
    }
    var_20 -= ((((((min(var_12, var_10))) ? (max(var_4, var_11)) : ((124 ? var_10 : var_14)))) > (((var_0 ? var_7 : var_3)))));
    #pragma endscop
}
