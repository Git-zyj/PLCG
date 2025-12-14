/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 ^= (((min(-1, var_2)) & ((-9 ? var_0 : -2147483640))));
                var_11 = (128 * 1795023479);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 0;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 0;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_4] [3] [i_6] [i_5] [i_3] [i_3] = (+-8);
                                arr_21 [i_2] [i_3] [i_4] [2] [i_5] [14] [i_3] = (((var_6 & 128) >= (~1795023479)));
                                var_12 ^= (((((-7094400156217604123 ^ var_4) + 9223372036854775807)) << (((var_1 & 4112073865) - 1695630464))));
                            }
                        }
                    }
                }
                arr_22 [i_3] = ((min(536862720, (!var_5))));
                var_13 = (min(1795023479, (3399 != var_3)));
                arr_23 [i_3] [i_3] = (!-58312);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 11;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                {
                    arr_33 [i_7 + 1] [i_7] [i_7 + 1] [i_9] = ((-1 ? (-15489 + var_2) : (var_0 + -7094400156217604123)));
                    var_14 = var_1;
                    var_15 = -var_9;
                    var_16 += ((var_3 ? -var_6 : ((((-9 ^ var_9) || var_7)))));
                }
            }
        }
    }
    var_17 = var_8;
    var_18 = ((((max((min(var_0, var_3)), var_5))) ? var_7 : ((min(var_9, var_8)))));
    #pragma endscop
}
