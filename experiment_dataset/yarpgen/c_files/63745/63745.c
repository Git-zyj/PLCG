/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63745
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 12;i_2 += 1)
            {
                {
                    var_17 = 3328349958;
                    var_18 = ((-((((var_15 < (arr_9 [i_1])))))));
                    var_19 *= (arr_0 [i_2]);
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 12;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 12;i_5 += 1)
            {
                {
                    var_20 &= 0;
                    var_21 *= ((var_3 && ((((arr_11 [6]) - 2728641184)))));
                    var_22 *= ((((arr_12 [6] [i_4 + 2]) > -1392)));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_21 [i_3] [i_4] [i_5] [i_4] [i_3] = var_8;
                                var_23 |= 1;
                                var_24 = (max(((((var_8 ? var_16 : 20486)) >= (arr_15 [i_3] [i_3]))), 1));
                                arr_22 [i_4 - 2] [i_5 - 1] [i_3] [i_7] = var_10;
                            }
                        }
                    }
                    var_25 = (min((arr_20 [i_5 + 1] [i_5] [i_4] [i_3] [i_3]), -120));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 3; i_8 < 14;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {
            {
                arr_28 [i_9] [i_8] = ((((!(arr_23 [i_8 + 4] [i_8 + 1])))));
                var_26 = (max(var_26, var_2));
                arr_29 [i_9] |= var_10;
                var_27 = 20486;
            }
        }
    }
    #pragma endscop
}
