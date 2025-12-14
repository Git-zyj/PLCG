/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [i_1] = (max(-18265, -10449));
                var_18 *= ((267386880 ? ((((arr_0 [6] [i_1]) & var_5))) : ((((max((arr_0 [i_1] [i_1]), var_16)) + var_15)))));
                var_19 ^= (min(((((arr_3 [i_0] [i_1]) >> (var_6 - 7947)))), (((arr_1 [i_0]) ^ var_0))));
            }
        }
    }
    var_20 = var_9;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_2] [i_2] [i_2] = var_12;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        {
                            var_21 = var_1;
                            arr_19 [i_4] [i_4] [i_3] [i_4] [i_5] = (!var_2);
                        }
                    }
                }

                /* vectorizable */
                for (int i_6 = 2; i_6 < 8;i_6 += 1)
                {
                    var_22 = (arr_17 [i_6 - 2] [i_6 - 2] [i_6 - 2] [i_6 - 2]);
                    var_23 = (arr_1 [i_6 + 2]);
                }
                var_24 = (min((((arr_18 [i_2] [2]) | (arr_18 [i_2] [0]))), ((((arr_3 [i_2] [i_3]) || (arr_16 [10] [i_3] [i_3] [i_3] [4]))))));
                var_25 = ((!(((var_17 & (arr_17 [i_3] [i_3] [i_3] [i_3]))))));
            }
        }
    }
    #pragma endscop
}
