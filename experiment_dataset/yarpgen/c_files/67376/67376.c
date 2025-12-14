/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67376
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_18 = (((min(var_9, (-26 && 1))) ? -21 : var_2));
                                var_19 = (((min(((min(25, var_8))), ((10360755225033441533 ? (arr_11 [i_1 + 2] [6] [6] [i_1] [i_1]) : var_4)))) << (((4860161487990281873 <= (0 / 41815))))));
                            }
                        }
                    }
                    var_20 = (((arr_3 [i_1 + 1] [i_1] [i_1 + 1]) ? (arr_3 [i_1] [i_1] [i_1 - 1]) : (min(-26153, -7935657631077277366))));
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_18 [i_0] [i_2] [i_0] [i_0] [i_0 - 4] = var_8;
                                arr_19 [i_6 + 2] [i_6 + 2] [i_2] [i_2] [i_6 + 2] [i_0] [i_6 + 2] = (((8085988848676110082 ? ((min(7168, -21912))) : 19)));
                                var_21 = (arr_7 [i_0]);
                                var_22 &= (arr_4 [i_0 + 1] [i_2]);
                            }
                        }
                    }
                    var_23 = (min(var_23, 25));
                    var_24 = (arr_16 [i_0] [i_2]);
                }
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 12;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_8] = -27;

                            for (int i_9 = 0; i_9 < 12;i_9 += 1)
                            {
                                arr_30 [i_8] = (max(((((arr_5 [i_8]) ? (arr_13 [i_0 - 4] [i_8] [1] [i_1 - 2] [i_9]) : 18))), (((arr_5 [i_8]) * 16070933624902603991))));
                                var_25 = var_14;
                                arr_31 [i_8] = (1 ^ var_6);
                            }
                            var_26 = (min((((!var_9) < ((((arr_16 [i_0 - 4] [i_0 - 4]) && var_2))))), ((((min(14031, -9418))) && 14015))));
                            arr_32 [i_8] [8] [i_7] [i_8] = min(((var_5 & (((var_10 ? 1 : 1))))), ((((((317415333029339265 ? 18 : 1))) ? var_17 : -1))));
                            var_27 = var_8;
                        }
                    }
                }
            }
        }
    }
    var_28 = (((var_0 + 9223372036854775807) >> ((((min(var_9, 2047))) ? (var_16 % 1) : ((var_3 ? var_5 : var_5))))));
    #pragma endscop
}
