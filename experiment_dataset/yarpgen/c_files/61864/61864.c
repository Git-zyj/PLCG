/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61864
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61864 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61864
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0 - 2] [i_2] [i_0] = ((((-(arr_1 [i_0 - 2]))) - (((arr_1 [i_0 - 1]) / (arr_11 [i_0 - 2] [3] [i_3 - 1] [i_3] [i_3] [i_3])))));
                                arr_13 [i_4] [i_3] [i_0] [i_0] [i_0 - 2] [i_0 - 2] = ((((295759804 - ((~(arr_4 [i_0 + 1] [i_1]))))) > (((max(2147483647, (arr_1 [i_0]))) + (((arr_5 [i_0] [8] [i_0]) + 1))))));
                            }
                        }
                    }
                    arr_14 [i_1] [i_0] = ((((~(max(2013265920, 1)))) + ((((min(-145911968, (arr_0 [i_1]))))))));
                    arr_15 [i_0] = ((((-96 - (arr_4 [i_0 - 2] [i_0 + 1]))) / ((-(arr_5 [i_0 - 2] [i_1] [i_0])))));
                }
            }
        }
    }
    var_11 = ((var_2 / ((-(min(var_0, var_2))))));
    var_12 = (((var_4 > -3164306537) % ((((min(var_9, 32767))) | 557058807))));
    var_13 = ((+(min((~var_6), (~var_6)))));
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 0;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 11;i_7 += 1)
            {
                {
                    arr_24 [i_5] [i_6 + 1] [i_7] [i_6] = ((((((min(-16341, 448))) ? ((((arr_2 [i_7] [i_6 + 1] [i_5]) >= 2147483642))) : ((~(arr_18 [i_7]))))) << (((((((-2147483647 - 1) ? (arr_10 [i_5] [i_6] [i_6 + 1] [i_6 + 1] [i_6 + 1] [i_7] [i_7]) : 100)) ^ (~65068))) + 65078))));
                    arr_25 [i_7] = (((((~3164306522) - (arr_19 [i_5] [i_6 + 1] [i_7]))) ^ 31778));
                }
            }
        }
    }
    #pragma endscop
}
