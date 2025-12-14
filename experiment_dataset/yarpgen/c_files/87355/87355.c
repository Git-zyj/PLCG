/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_12 += (~0);
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4] = var_10;
                                var_13 += (~26);
                                arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_1] = (((((~(arr_3 [i_2] [i_1] [i_1]))))) ? (~6834) : (((~var_8) ? (~107) : 107)));
                            }
                        }
                    }
                }
                arr_14 [i_1] = ((((min(4294967295, 2937401542992500344))) ? var_9 : ((((min(-2871, 15509342530717051272))) ? 2937401542992500343 : (arr_0 [i_0 + 2])))));
                var_14 = (max(var_14, (~2937401542992500344)));
            }
        }
    }
    var_15 = (max(var_0, var_10));
    /* LoopNest 3 */
    for (int i_5 = 2; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    var_16 = (min(var_16, ((min(((((-32767 - 1) ? -270726724 : (arr_8 [i_5] [i_5 - 2] [i_5 + 1] [i_5 + 1])))), 4294967295)))));
                    arr_22 [i_7] [i_6] [i_5] = 29;
                    var_17 *= ((~(min(((9075432400392266641 ? 18446744073709551615 : -5581)), ((min(-108, 3)))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 12;i_9 += 1)
        {
            {
                var_18 = (min(var_18, ((((((min(var_10, 8871816096622058860)))) ? 21 : 18446744073709551604)))));
                var_19 *= ((1744001479 ? 8441 : 3));
            }
        }
    }
    #pragma endscop
}
