/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74200
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74200 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74200
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 2; i_4 < 14;i_4 += 1)
                            {
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_0] [i_4 - 2] = ((-1 * (~74)));
                                arr_14 [i_0] [i_0] [i_0] [i_0] = (max((min((~-90), (4 | 89))), (1 > 1)));
                                arr_15 [i_0] [i_0] [2] [i_1] [i_0] [i_0] = ((((((min(var_3, 254))) ? ((var_1 ^ (arr_7 [i_0] [9]))) : (arr_3 [i_0 + 2] [i_0]))) == 8191));
                                arr_16 [i_0 + 1] [i_3] = ((((~(arr_9 [i_4 + 1]))) <= ((1 ? 1 : ((-38 ? 4 : 511))))));
                                arr_17 [i_0] [i_1] [i_4 + 2] [i_3] [i_0] [i_0] = ((((((arr_4 [i_1] [i_1]) ? (arr_1 [i_0 + 1] [i_0 + 1]) : var_13)) * (((min(1, 1)))))));
                            }
                            arr_18 [i_0] [i_2] [i_1] [i_0] = (((16490061729877630619 && var_0) >= ((max(-1, var_4)))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 3; i_5 < 16;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                arr_27 [i_0 - 2] [i_0] [i_5 - 1] [i_0 - 2] [i_0] [i_0 - 2] = ((~((1 * (-75 ^ 9223372036854775808)))));
                                arr_28 [i_0] [i_0] [i_0] [i_6] [i_7] = ((((-675866115 ? 0 : 2598955955)) == 4294967293));
                            }
                        }
                    }
                }
            }
        }
    }
    var_16 = ((var_14 ? ((min(((var_5 ? var_12 : -1)), (min(-675866126, 1))))) : (((((142 ? var_9 : var_13))) ? var_3 : var_5))));
    #pragma endscop
}
