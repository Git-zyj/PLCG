/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_16 = (((((~224) ^ 94))) ? (min(((((arr_5 [i_0]) * var_3))), (min(13258372799522222730, (arr_5 [i_1]))))) : (((((arr_4 [i_0] [i_0]) || (arr_3 [i_0] [i_0] [i_0 - 1]))))));
                arr_6 [i_0] = (min((max(4294967295, (arr_2 [i_0 + 2] [i_0 - 1]))), ((~(((arr_5 [i_0]) - var_3))))));

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_0] = ((224 ? ((var_14 ? ((15840941205661718617 ? (arr_12 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) : (arr_13 [i_0]))) : (228 | 1))) : ((~(~9223372036854775807)))));
                                var_17 = 10;
                                var_18 = 3;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            {
                                var_19 = 30;
                                arr_20 [i_0] [i_2] [i_5] [i_0] = (2628889558 > 85295257);
                            }
                        }
                    }
                }
                var_20 = ((((((arr_18 [i_0 + 2]) ? 85295257 : (arr_18 [i_0 + 1])))) <= var_1));
            }
        }
    }
    var_21 = var_0;
    #pragma endscop
}
