/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90042
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 *= 11544543436416592965;
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_17 |= var_13;
                                arr_13 [i_3] [i_3] [i_4] = arr_11 [i_0] [i_1 - 1] [i_3] [6] [i_3] [i_0] [i_1];
                                var_18 = var_6;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 16;i_6 += 1)
                        {
                            {
                                arr_20 [i_5] [i_1] = ((19 ? (min((arr_14 [i_0] [i_1] [i_0] [i_5 - 1] [i_6]), (max((arr_2 [i_0] [i_0] [i_0]), 1152258778)))) : (((arr_3 [i_5 + 1] [i_5 + 1] [i_5]) ? 12165038369204303195 : var_7))));
                                arr_21 [i_0] [i_1] [i_5] [i_5] [4] = (((arr_0 [i_5]) ^ (((arr_12 [i_1] [i_1 - 1] [i_1] [i_1 + 3] [i_1] [i_1 + 4]) ? ((var_12 & (arr_3 [i_0] [i_1 + 4] [i_5]))) : (((157 == (arr_3 [i_1] [i_2] [i_6]))))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    var_19 = ((((max(((max((arr_23 [i_9]), (arr_22 [i_9])))), (arr_30 [i_9 + 1] [i_9 - 1] [i_9 - 2])))) ? (arr_22 [i_9]) : (arr_29 [i_9 - 2] [i_9 + 2] [i_9 + 2] [i_9 + 1])));
                    var_20 ^= ((~((var_10 ? (arr_29 [i_9 - 2] [i_8] [i_9 + 1] [i_9]) : (arr_27 [i_9 - 1] [i_8] [i_9])))));
                    var_21 = max((arr_30 [i_7] [i_8] [i_9 + 2]), (arr_30 [i_7] [i_8] [i_9 - 1]));
                    arr_31 [i_7] [i_8] [i_9] = (min(-19, ((((arr_24 [i_7] [i_9 - 1] [i_7]) - (arr_24 [i_9 - 2] [i_9 + 1] [i_8]))))));
                    arr_32 [i_7] [i_8] = ((((-(arr_24 [i_9 + 2] [i_9 + 2] [i_9 + 1]))) / (max((67106816 + -1880443358), (arr_25 [i_9 + 1] [i_9 - 1])))));
                }
            }
        }
    }
    var_22 = max(12165038369204303195, 219);
    #pragma endscop
}
