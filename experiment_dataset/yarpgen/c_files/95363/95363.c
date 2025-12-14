/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = (max(var_12, (max(58, (arr_3 [i_1] [i_1] [i_2])))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = ((~((((var_10 ? 2963124649079816287 : var_12)) - 3))));
                                var_18 = 0;
                                var_19 = (!var_2);
                            }
                        }
                    }
                }
            }
        }
    }
    var_20 = (((var_7 <= 30) >= var_3));
    var_21 -= (1 ? 68 : 144);
    #pragma endscop
}
