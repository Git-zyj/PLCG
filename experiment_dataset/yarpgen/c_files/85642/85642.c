/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    var_12 |= var_1;
                    arr_7 [i_2] [i_0] [1] [0] = (-26 ^ var_9);
                }
                arr_8 [i_0] = ((~var_6) | (406859034 | 4613589836668884550));
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_13 -= (max((((var_5 == (-2147483647 - 1)))), (0 & var_3)));
                            var_14 = (min(var_14, (((!(!var_11))))));
                            var_15 = ((~(((896 == ((4294967295 ? var_5 : var_10)))))));

                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_16 -= var_7;
                                arr_19 [4] |= (((((1 ? var_10 : (-127 - 1)))) ? ((min(var_3, var_5))) : (-126 || 0)));
                                var_17 = (max(var_17, (-2147483647 - 1)));
                                var_18 += var_3;
                            }
                            for (int i_6 = 1; i_6 < 14;i_6 += 1)
                            {
                                var_19 += (!-159);
                                arr_24 [i_1 - 1] [i_1] [i_3] [i_1] [i_0] = (var_3 || var_0);
                                arr_25 [i_0] [i_0] [i_1] [i_1] [i_3] [i_0] [10] = (~var_10);
                                var_20 = -0;
                                var_21 = ((max(-104, 16)));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            var_22 += (((((-14 ? 244 : (63 / 1)))) && ((((1 | var_1) - 4294967295)))));
                            var_23 = (min(var_23, (!311224847755121541)));
                            var_24 ^= (((4294967289 - 22) ? (-108 ^ var_2) : (((var_8 + var_2) + (var_3 && var_11)))));
                            var_25 += (((var_9 ^ var_6) % ((max(var_0, (var_9 << var_9))))));
                        }
                    }
                }
            }
        }
    }
    var_26 = var_9;
    #pragma endscop
}
