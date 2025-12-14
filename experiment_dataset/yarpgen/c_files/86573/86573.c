/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_13 = 94;
                                var_14 = 110;
                                arr_13 [i_0] [i_1] [i_1] [i_0] [i_1] [i_4] = 2145386496;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = 5943304225273374652;
                                var_16 += 5943304225273374666;
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = -95;
                                var_17 = 129;
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 24;i_7 += 1)
                    {
                        arr_23 [i_0] = -94;
                        var_18 -= 240;

                        for (int i_8 = 0; i_8 < 24;i_8 += 1)
                        {
                            var_19 = (max(var_19, 1149947787304430914));
                            var_20 = -95;
                            var_21 &= 57;
                            var_22 = (min(var_22, 80));
                            var_23 = 82;
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1)
                        {
                            arr_31 [i_0] [i_2] [i_2] [i_1] [i_0] = -1289154049226523422;
                            arr_32 [i_0] [i_1] = 55;
                            var_24 = 1831756192;
                            var_25 = 7;
                            var_26 *= 1779447855;
                        }
                    }
                }
            }
        }
    }
    var_27 += 31;
    var_28 = -95;
    #pragma endscop
}
