/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90726
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_4 - 1] [i_0] [i_1] = var_5;
                                var_20 += 13153396892488089972;
                                var_21 = ((!(arr_8 [i_3] [i_0] [i_0] [i_0])));
                                var_22 = (max(var_22, (arr_1 [i_0] [i_0])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_23 = (((arr_18 [i_0] [i_1] [i_0] [i_5] [i_6]) ? (~17) : (((((arr_6 [i_0] [i_1 - 1] [i_2 + 1]) || var_7))))));
                                var_24 = (3 | 25);
                                var_25 = ((~((562949953421311 ? (~18446744073709551615) : ((18446744073709551598 >> (((arr_4 [i_2] [15]) + 3650532346725611821))))))));
                                var_26 = (max(var_26, (((~(~var_19))))));
                            }
                        }
                    }
                    var_27 = ((arr_6 [i_0] [i_1] [i_0]) ? ((((((var_13 ? (arr_9 [i_0] [1] [1] [i_1 + 1] [1] [1]) : var_16)) > 17385112094797669781)))) : (arr_16 [i_0] [4] [i_1 + 1] [i_0] [i_1]));
                    var_28 = (((((min((arr_5 [i_2 + 1]), var_16)))) ? ((((((((arr_15 [i_1] [i_1] [i_1] [i_0]) << (16364882989264146421 - 16364882989264146421)))) > (max((arr_2 [6]), var_18)))))) : var_8));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            {
                var_29 = (max(var_29, (((((7888397948004928113 ? 40117 : 60607)) << (((((arr_20 [i_8] [i_8]) ? var_12 : (arr_24 [i_7 + 2]))) - 15654414450529300689)))))));
                var_30 -= (arr_22 [i_8]);
            }
        }
    }
    var_31 = (min(var_31, (~var_8)));
    var_32 ^= var_6;
    #pragma endscop
}
