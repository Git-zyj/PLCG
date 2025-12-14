/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    var_13 = (arr_7 [i_2] [2] [15] [15]);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_14 = ((min(var_3, (arr_3 [i_1 + 1] [i_2 + 1] [i_0 + 4]))));
                                var_15 = (arr_3 [i_0] [i_1 - 1] [i_1 - 1]);
                                var_16 = ((2 & ((((~var_9) | 2147483643)))));
                            }
                        }
                    }
                    var_17 = (min(var_17, ((((max((arr_4 [i_2 - 1]), (arr_4 [i_2 - 1])))) > (arr_4 [i_2 - 1])))));
                }
            }
        }
    }
    var_18 ^= 2147483633;
    var_19 = ((-(~var_8)));
    var_20 = (((((max(-2147483644, -2147483644))) ? 88 : 2352698503451473969)));
    var_21 = (max((((var_3 - var_0) ? var_11 : (!1538721046471838934))), (((!(9223372036854775805 != var_5))))));
    #pragma endscop
}
