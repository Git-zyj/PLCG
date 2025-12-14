/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_1] = (min((~var_8), (~42988)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, var_1));
                            var_17 = (min(var_17, ((max((min(var_7, var_3)), (var_6 < var_11))))));
                            var_18 *= ((~((((var_15 <= 42988) <= ((22549 ? 42970 : var_5)))))));
                            arr_12 [i_3] [i_0] [i_2] [i_3] [i_2] [i_0] = ((((max(22566, 42969))) ? (((((max(var_11, var_15))) ? var_15 : ((var_0 ? var_4 : var_0))))) : var_10));
                        }
                    }
                }
                var_19 = (22566 > 42970);
            }
        }
    }
    var_20 += 22544;
    var_21 -= (max(((var_10 >> (((var_1 ^ var_2) - 4188317210)))), var_8));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_4] [i_5] = (max((var_14 | var_7), (max(var_0, var_12))));
                /* LoopNest 3 */
                for (int i_6 = 4; i_6 < 10;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                arr_27 [6] [8] [i_5] [i_6 - 4] [i_5] [i_5] = (var_11 + var_4);
                                var_22 = var_2;
                            }
                        }
                    }
                }
            }
        }
    }
    var_23 = var_0;
    #pragma endscop
}
