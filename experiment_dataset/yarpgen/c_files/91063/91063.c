/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_1] &= 5754265702529257945;
                                var_17 = ((18446744073709551615 ? (((!(((2565104412 ? 1 : 68)))))) : ((57287 ? 2 : -9497))));
                                var_18 *= -var_15;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_19 = (min(var_19, (1023 > 3)));
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_6] [i_0] [i_7] = ((var_1 ? 10 : ((var_8 ? 19 : -89))));
                            }
                        }
                    }
                    arr_22 [i_5] [i_0] [i_0] [i_0] = var_6;
                }

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_20 = (max(var_20, 3359));
                    var_21 = (min(var_21, ((((((10 ? 1 : -34))) ? -3355 : -1379107572)))));
                    var_22 &= ((max(4294967295, -4191472863792394463)));
                }
                for (int i_9 = 0; i_9 < 15;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        arr_30 [i_10] [i_10] [i_0] [i_10] [i_10] [i_10] = ((var_8 ? var_6 : var_6));
                        var_23 = (max(var_23, 7));
                        var_24 = (min(var_24, 15));
                        var_25 = (~var_1);
                    }
                    var_26 *= var_15;
                }
            }
        }
    }
    #pragma endscop
}
