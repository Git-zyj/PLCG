/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(((max(var_8, 52419))), (min(var_8, var_3))))), (min((min(var_0, var_1)), ((min(7590, var_6)))))));
    var_12 = max((max((max(var_8, var_0)), ((max(var_9, var_8))))), ((max(((max(var_6, 58596))), (max(var_1, var_7))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = min(((max((max(0, var_5)), ((min(var_6, var_5)))))), (min((min(5764, 791251828)), (min(var_1, var_3)))));

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_2] [i_2] [i_1] [i_2] = (min((min(((max(6933, var_7))), (max(5764, 9223372036854775807)))), (min((min(4708463837926484817, 255)), ((min(-41, (arr_11 [i_2] [i_2] [i_1] [i_2 - 1] [i_3] [i_4 - 2]))))))));
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_4] = (max(((max((min(1326430474, (arr_8 [i_2] [i_1]))), (max((arr_7 [i_2]), var_10))))), (min((max((arr_4 [i_4]), (arr_9 [i_4] [i_3] [i_2] [i_0] [i_0] [i_0]))), ((max(1326430474, (arr_12 [i_0] [i_1] [i_2] [i_2] [i_4] [i_4]))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_13 = (min(((max(60, (max(46053, 1))))), (max(58574, 0))));
                                var_14 = (min(((min((min(52409, (arr_12 [i_0] [i_1] [i_2] [i_2] [i_2] [i_6]))), ((max(0, var_8)))))), (max((min(-71350157, (arr_9 [i_0] [i_0] [10] [i_2 + 1] [1] [i_6 + 2]))), (min((arr_3 [i_1]), (arr_18 [i_0] [i_1] [i_5 - 1] [i_6 - 1])))))));
                            }
                        }
                    }
                    var_15 = (min((max(((max((arr_11 [i_2] [i_1] [i_2 + 1] [i_0] [i_0] [i_1]), var_2))), (min(1114150582, 255)))), ((max((max(var_4, 41929)), (max((arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]), var_7)))))));
                    var_16 = (max((min((min((arr_4 [i_1]), 0)), ((max(349244561, var_0))))), (min(((min(-9, 247))), (max((arr_8 [i_2] [i_2]), (arr_4 [i_1])))))));
                    arr_21 [i_2] = (max((max(((max(var_6, var_3))), (min((arr_12 [i_0] [i_0] [i_1] [i_2] [i_2] [i_2]), 4515679544082578270)))), ((max(((min(var_9, (arr_2 [i_2])))), (min((arr_10 [i_0] [i_1] [i_2] [i_0] [i_2]), (arr_17 [11] [11] [i_0] [i_1] [i_2]))))))));
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_25 [i_0] = (min((min(((max(var_5, (arr_0 [i_1])))), (min(var_0, 14)))), ((min(((min((arr_1 [i_0] [i_1]), (arr_20 [i_0] [i_1] [i_7] [i_0] [i_0] [i_1] [11])))), (max((arr_5 [i_0] [i_0] [13]), var_1)))))));
                    arr_26 [i_7] [i_7] [i_7] [i_7] = (max((max(((min(var_7, 1))), (max((arr_24 [i_0] [i_1] [i_7]), 4902535165011974791)))), ((min((max(var_4, (arr_22 [i_0] [3] [i_0]))), ((min(1752909673, var_8))))))));
                }
            }
        }
    }
    var_17 = (min(((max((min(var_1, var_1)), ((max(var_10, 6960)))))), (max((max(var_0, var_9)), ((min(var_5, var_10)))))));
    #pragma endscop
}
