/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6064
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6064 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6064
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_8 [i_1 + 1] = (((81 ^ (arr_6 [i_1 - 1] [i_1] [i_1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_2] [i_3 + 1] [i_4] = ((-(arr_3 [i_0] [i_2] [i_3 + 1])));
                                var_10 = -104;
                                var_11 = (((116 >> (arr_7 [i_4] [i_4] [i_4 - 1]))));
                                var_12 *= ((var_4 == (((min(var_6, 28157))))));
                                var_13 = (((arr_1 [i_4] [i_0]) ? (var_7 == -901766727) : (1887490517 != var_7)));
                            }
                        }
                    }
                    var_14 = 32955;
                }
            }
        }
    }
    var_15 -= ((((max(var_1, (((var_7 ? var_6 : 28)))))) || (!var_8)));
    var_16 = var_6;
    #pragma endscop
}
