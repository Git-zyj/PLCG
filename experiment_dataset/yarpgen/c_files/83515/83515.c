/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_17;
    var_19 = var_9;
    var_20 *= (((((var_5 << (var_3 - 1)))) ? 1 : 3579691363));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 *= ((19 ? (arr_0 [i_0]) : (((~(arr_1 [i_0] [i_1]))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_22 = (arr_11 [i_0] [i_0] [i_0] [i_0]);
                            var_23 = (max(var_23, ((max(((32 ? 1 : ((max((arr_6 [i_0] [1] [16]), var_12))))), (((19 <= (arr_3 [i_2])))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        {
                            var_24 |= (((1 && 145) ? (((252 <= ((3671310264 ? 3579691363 : var_4))))) : (max((arr_2 [i_1] [i_1]), ((var_8 ? var_4 : var_2))))));
                            var_25 = (((max(6534, var_9))));
                            var_26 = (((var_17 ? (((arr_7 [i_0] [i_0] [i_0] [i_0]) ? (arr_11 [i_0] [i_1] [i_4] [i_5 + 1]) : (arr_10 [i_1] [i_1] [i_1] [i_1]))) : var_4)));
                            arr_17 [i_0] [i_1] [i_5 + 1] [i_5 + 1] = (arr_1 [i_0] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 18;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        {
                            arr_23 [1] [i_0] [i_0] [i_7] |= (arr_21 [i_0] [i_0] [i_6 + 1] [14]);

                            for (int i_8 = 0; i_8 < 1;i_8 += 1)
                            {
                                var_27 = (var_9 ? (max((arr_7 [i_1] [12] [i_6 + 2] [i_6 + 1]), (((arr_18 [i_1] [i_7] [1]) ? 6556 : var_11)))) : 2147483632);
                                var_28 = (~var_15);
                                var_29 ^= (min(var_2, 1));
                            }
                            for (int i_9 = 1; i_9 < 17;i_9 += 1)
                            {
                                arr_28 [i_1] [i_9] [3] [i_0] [3] [16] [i_1] = ((+(((arr_18 [i_6 - 2] [i_7] [i_0]) ? 127 : (arr_18 [i_6 + 2] [i_9] [i_0])))));
                                arr_29 [i_0] = (min((max((arr_24 [i_0] [i_1] [i_1] [i_1] [i_0]), ((((arr_16 [0] [0] [i_1] [0]) & var_2))))), ((max((arr_26 [i_6] [i_6] [i_6 + 2] [i_6 - 2] [i_6 - 3] [i_9 - 1]), var_11)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
