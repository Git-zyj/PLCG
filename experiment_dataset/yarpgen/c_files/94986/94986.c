/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94986
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94986 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94986
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((!(((~(((!(arr_9 [4] [15])))))))))));
                                var_21 = (max(var_21, (((((!(~255))))))));
                                arr_15 [i_0] [i_4] = ((!((!(~var_2)))));
                                var_22 = (~1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_21 [i_6] [i_6] [15] [i_2 - 1] [i_1 + 1] [i_0] = 15;
                                arr_22 [i_2 - 2] [i_5] = ((-(((!(((-(arr_14 [i_0] [i_1] [i_2 - 2] [i_2] [i_5] [i_6])))))))));
                                arr_23 [i_0] [i_1] [i_2] [i_0] [i_2] = ((!(!var_18)));
                                var_23 = -var_19;
                                arr_24 [i_6] [12] [i_0] = ((-((-(!8377)))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 -= ((-((~(~8377)))));
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    arr_33 [i_7 + 2] [i_8] [i_7 + 2] [i_9] = ((!(((~(((!(arr_28 [i_9])))))))));
                    var_25 = (!21);
                    var_26 = (~19);
                    var_27 = ((~((-(arr_13 [i_7 + 3] [i_7 + 3] [i_8] [i_9] [i_9])))));
                    /* LoopNest 2 */
                    for (int i_10 = 0; i_10 < 19;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 19;i_11 += 1)
                        {
                            {
                                var_28 = ((-(~0)));
                                arr_38 [i_7 + 2] [i_8] [i_9] [i_8] [i_11] = ((!(+-23)));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 2; i_12 < 14;i_12 += 1)
    {
        for (int i_13 = 1; i_13 < 14;i_13 += 1)
        {
            {
                var_29 = -32762;
                arr_44 [i_12] [i_12] = -var_0;
            }
        }
    }
    #pragma endscop
}
