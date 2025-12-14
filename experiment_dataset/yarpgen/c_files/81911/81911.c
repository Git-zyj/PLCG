/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                var_13 = ((~(min((arr_4 [i_0]), ((-(arr_3 [16])))))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_0] [1] [i_2] [i_4] [i_4] = ((~(((!(arr_2 [i_1 + 3] [i_2]))))));
                                var_14 = (~-42);
                                var_15 ^= -var_3;
                                arr_15 [i_0] [i_0] [1] [1] = (min(((min((arr_8 [i_0] [i_1] [i_1] [i_3]), var_8))), ((-1 ? 5 : 1020204400))));
                            }
                        }
                    }
                }
                var_16 = 380395276;
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 3; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 16;i_7 += 1)
            {
                {
                    arr_23 [1] [1] [i_5] = 380395281;
                    arr_24 [i_5] [i_5] [i_6] [i_7] = var_11;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 0;i_9 += 1)
                        {
                            {
                                var_17 = ((((arr_12 [i_5] [i_5 - 1] [i_6] [i_7] [i_9 + 1]) - -83)));
                                var_18 = var_7;
                            }
                        }
                    }
                    arr_31 [i_6] [i_6] [15] [i_5] = var_6;
                }
            }
        }
    }
    var_19 = ((var_7 ? (((~var_8) ? var_2 : -62)) : var_7));
    #pragma endscop
}
