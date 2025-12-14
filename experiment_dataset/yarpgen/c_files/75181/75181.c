/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75181
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    var_12 = (arr_2 [i_0]);
                    arr_7 [i_1] [i_0] = (arr_2 [i_0]);
                    var_13 *= (arr_3 [i_2] [6]);
                    var_14 += ((~(~var_7)));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [6] [i_0] [i_0] = ((var_7 == (~var_3)));
                                arr_13 [i_0 - 3] [i_0 - 2] [i_0] [i_0] [i_0 - 2] [i_0] [i_0 + 1] = (((arr_11 [i_0] [i_0] [13] [i_0]) / (arr_10 [i_2] [i_2] [i_2] [i_3] [i_0])));
                                var_15 = (max((arr_3 [i_3 - 1] [i_2]), ((((arr_1 [i_0] [i_0]) == (arr_4 [8] [i_2]))))));
                            }
                        }
                    }
                }
                var_16 ^= (~3187238228044995004);
                var_17 = (arr_0 [i_0]);
                var_18 = (arr_10 [i_0 + 2] [i_0] [i_1] [i_1] [i_0]);
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 19;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = ((arr_4 [i_0 - 3] [i_1]) && (((+(min((arr_15 [1] [9] [i_0 - 2] [i_0 - 2]), var_3))))));
                            var_20 = ((!((var_0 && ((((arr_6 [i_1]) % var_6)))))));
                            var_21 = (arr_11 [i_0] [i_5 - 1] [i_1] [i_0]);
                            arr_18 [i_0] [i_1] [i_5 - 2] [i_0] = var_0;
                            arr_19 [i_5 + 1] [i_5] [i_0] [i_5] [i_5] = (arr_5 [i_6] [i_6] [i_6] [i_6]);
                        }
                    }
                }
            }
        }
    }
    var_22 = ((var_2 / ((max((var_6 ^ var_0), -var_5)))));
    var_23 |= var_3;
    #pragma endscop
}
