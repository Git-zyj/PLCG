/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62852
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_19, (((var_13 ? var_3 : (~var_18))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] [4] |= (arr_2 [i_1] [i_2]);
                    var_20 = ((min(4119299420, (arr_6 [i_2 + 1] [i_2] [i_2] [i_2 - 3]))));
                }
            }
        }
    }
    var_21 = (max(var_21, ((max(var_7, ((((var_1 ? var_4 : var_12)) & (((var_0 ? var_10 : var_17))))))))));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_22 = (max(var_22, ((min(((max((arr_14 [i_3] [i_3]), var_18))), (min(((264 ? 0 : -2214686430009503424)), 7749855893447129683)))))));
                    arr_15 [i_4] [i_5] [i_4] [i_4] = (min(((min(var_0, (max(var_0, 2214686430009503426))))), (((max(0, var_11)) << (var_9 + 21334)))));
                    arr_16 [i_3] [i_5] [i_3] [i_4] &= ((-((((-(arr_14 [i_3] [i_4]))) * ((max(var_18, var_4)))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 17;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 17;i_8 += 1)
            {
                {
                    var_23 = (max(var_23, ((max((~-2214686430009503424), (((var_6 ? -270 : (arr_10 [i_7] [i_8])))))))));
                    var_24 = 2214686430009503423;
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 16;i_9 += 1)
                    {
                        for (int i_10 = 0; i_10 < 17;i_10 += 1)
                        {
                            {
                                arr_32 [i_7] [i_8] [i_9] [i_6] = (((arr_23 [i_6]) - var_6));
                                var_25 |= (max((max((arr_25 [i_6] [i_7] [i_7] [i_9 + 1]), (((arr_23 [i_7]) ? var_13 : var_8)))), (arr_9 [i_7])));
                                arr_33 [i_6] [i_7] [i_8] [i_6] [i_10] = (arr_30 [i_10] [i_9] [i_8] [i_7] [i_6] [i_6]);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
