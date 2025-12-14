/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98435
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = var_10;
                                arr_12 [i_0] [i_2] [i_2] [i_3] [2] [i_1 + 1] [i_4] = ((-(~var_5)));
                                var_19 = (!2097592755);
                                var_20 ^= ((min((!-31125), var_13)));
                            }
                        }
                    }
                    var_21 = (max(var_21, (var_12 && var_10)));
                    var_22 -= ((!((min((arr_10 [i_0 + 1] [4] [i_2] [16]), ((min(1, var_15))))))));
                }
            }
        }
    }
    var_23 = (((var_7 + var_14) < var_15));
    #pragma endscop
}
