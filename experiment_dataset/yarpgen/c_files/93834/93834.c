/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_2] &= (((min(797940153, 65535))));
                    arr_10 [i_1] = 1;
                }
            }
        }
    }
    var_12 -= var_2;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                arr_17 [i_3] = 1;
                arr_18 [i_3] [i_3] = (((min(-30, (arr_0 [i_4]))) | ((max(47604, ((129 ? 28022 : (arr_15 [i_3] [i_3]))))))));
                var_13 = (((arr_13 [i_3] [i_4]) ? 129 : (min(2527526922, -26895))));
            }
        }
    }
    var_14 = min((((var_11 ? (!1) : 65535))), 23661);
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 19;i_8 += 1)
                    {
                        {
                            arr_28 [i_8 - 3] [i_7] [i_7] [i_5] [i_5] = (max(4294963200, (arr_21 [i_5 - 1] [i_6])));

                            for (int i_9 = 0; i_9 < 22;i_9 += 1)
                            {
                                arr_32 [i_9] [20] [i_7] = 65522;
                                arr_33 [i_5] [i_6] [i_5] [i_8 - 3] [i_5] = 28030;
                            }
                            for (int i_10 = 1; i_10 < 1;i_10 += 1)
                            {
                                var_15 -= 5;
                                var_16 = -30;
                                var_17 -= -30;
                                var_18 = (~32);
                            }
                            for (int i_11 = 2; i_11 < 20;i_11 += 1)
                            {
                                arr_40 [i_5] [i_5] [i_6] [i_5] [i_6] [i_8] [i_11] = var_6;
                                arr_41 [i_11 + 1] [i_5 - 1] [i_5 - 1] = var_8;
                            }
                            for (int i_12 = 3; i_12 < 20;i_12 += 1)
                            {
                                arr_45 [i_7] [i_12] = ((230177663 ? -1212351455006023299 : 1099511496704));
                                arr_46 [i_8] [i_8] [i_8] [i_8] [i_8] = ((((max(-var_4, (max(var_10, 5))))) ? (!797940157) : 58392));
                            }
                        }
                    }
                }
                arr_47 [i_5] [i_6] [i_5 - 1] = 1;
            }
        }
    }
    #pragma endscop
}
