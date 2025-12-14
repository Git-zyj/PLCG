/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] [i_2] [i_2] [i_2] = ((!(((var_7 ? 39508 : (arr_6 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] [12] [i_0] [i_4] [i_0] [i_4] = (((!56986) == (!var_5)));
                                arr_16 [i_1] [i_4] = (arr_4 [i_0] [1] [1] [8]);
                                arr_17 [1] [i_1] [i_2] [i_1] [i_4] = (max(((~(~886979601018793525))), var_6));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_28 [i_7] [i_7] [i_7 + 1] = 1;
                            arr_29 [i_7] [i_7] = (var_14 | var_0);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            arr_36 [i_5] [i_6] [i_6] [i_10] [10] = (arr_31 [i_5]);
                            arr_37 [i_5] [i_6] [i_5] [i_10] = var_10;
                            arr_38 [i_5] [i_6] [1] [i_10] = (((!var_2) ? 1 : -14485));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 1; i_12 < 14;i_12 += 1)
                    {
                        {
                            arr_44 [i_11] [i_12] [i_12] [i_12] = (-(var_6 / var_9));
                            arr_45 [i_11] [i_11] [i_6] [i_11] = ((((-21209 ? 143 : 1)) - (arr_26 [i_11 - 1] [i_11 - 1] [i_11 - 1] [i_12 + 2] [i_11 - 1] [i_12])));
                            arr_46 [i_11] [i_5] [i_6] [i_6] [i_6] [0] = ((-(min((arr_8 [i_6 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 1]), var_14))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
