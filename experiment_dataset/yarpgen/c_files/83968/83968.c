/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                var_11 = (min(var_11, (arr_2 [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_9 [i_2] [i_2] [i_2] [i_2] = (((~(arr_3 [i_1 - 1] [i_1 - 1]))));
                            var_12 = ((0 ? (!2147483647) : 9339814749835401043));
                            var_13 = -44;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 24;i_6 += 1)
                        {
                            {
                                arr_19 [i_0] [i_5] [9] [9] [9] [9] [i_6 - 1] = (-63 + 1876228915);
                                arr_20 [i_5] [i_1 + 1] [i_4] [i_5 + 1] [i_6] [i_1 - 1] [i_5] = (arr_18 [12] [i_0] [i_0]);
                                arr_21 [i_0] [i_0] [23] [i_5] [i_4] [i_0] = 1876228915;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_7 = 3; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 24;i_8 += 1)
                    {
                        {
                            arr_28 [i_8] [i_7] [i_8] [i_8 - 1] = (min(((4947919669422394068 ? (213 - 9223372036854775807) : 2119638971)), ((min((((!(arr_16 [i_7] [i_1] [i_7] [i_8 - 1] [i_1])))), 12526)))));
                            var_14 = (((-((-7912102969558069809 ? 2147483635 : (arr_8 [i_8 - 1] [i_8] [i_1 + 1] [i_1 + 1] [i_0] [i_0]))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 25;i_10 += 1)
                    {
                        {
                            var_15 = (max(var_15, (((131071 + (((65535 | (~var_3)))))))));
                            var_16 = (max((12526 - 4294836224), -5593343835036951668));
                            arr_35 [i_0] [i_0] [i_9] [i_9] [i_10] = ((((((arr_22 [i_9] [i_1] [i_9] [i_10]) ? -34 : (arr_6 [i_0] [i_1] [i_1]))) | ((((arr_1 [i_0]) ? 7 : (arr_25 [i_0] [i_9] [i_9])))))));
                            arr_36 [i_9] [i_9] [i_10] = (arr_8 [i_0] [i_0] [i_0] [6] [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_17 &= (!-5411614719627529989);
    #pragma endscop
}
