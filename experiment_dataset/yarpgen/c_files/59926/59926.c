/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59926
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_0] [9] = (((((((8165386527630017239 ? (arr_6 [i_1] [i_2]) : 8165386527630017239))) ? (arr_6 [i_1 + 1] [i_2]) : (max((arr_1 [1]), (arr_3 [i_0] [i_0]))))) * (arr_10 [i_0] [i_3] [i_3] [i_3])));
                            arr_12 [i_0] [i_0] = (min((((-(arr_5 [i_0] [i_1 + 1])))), ((((max((arr_5 [1] [1]), var_0))) ? (((arr_0 [i_0]) * 8165386527630017218)) : var_1))));
                            var_10 = (max(var_10, (((var_0 - (((arr_8 [i_3] [i_2] [i_1] [i_0]) ? 1371544045 : (arr_8 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1 + 1]))))))));
                            var_11 = (arr_2 [i_1]);
                            var_12 = var_8;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    var_13 = (((((((arr_3 [i_0] [2]) ? (arr_14 [i_0] [i_1 + 1] [i_1 + 1]) : (arr_14 [i_0] [i_1 + 1] [i_1 + 1])))) ? (((((arr_5 [i_0] [i_0]) || 42607)))) : 10281357546079534377)));
                    var_14 -= (arr_3 [i_4] [i_0]);
                    var_15 = -1;
                    var_16 = (max(var_16, -var_5));
                }
                for (int i_5 = 3; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            {
                                var_17 = (18339 * 42607);
                                arr_25 [i_7] [i_0] [i_0] [i_0] [i_0] = var_1;
                                var_18 = ((+(max((((arr_14 [i_6] [i_6] [1]) ? (arr_6 [i_0] [i_0]) : (arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]))), ((((arr_7 [i_0] [i_0] [16]) < 49772)))))));
                            }
                        }
                    }
                    var_19 = var_6;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 17;i_9 += 1)
                        {
                            {
                                var_20 = (min(var_20, ((max((max((var_8 / 20809), (arr_16 [i_5] [i_5 - 2] [i_5]))), ((min((((1 ? 22929 : 1))), (max(9, -1264577351))))))))));
                                var_21 += ((((min((arr_30 [i_0] [i_1 + 1] [i_0]), ((var_6 ? (arr_24 [i_5] [i_5 - 2] [i_5] [i_5] [i_5]) : var_6))))) / (((arr_21 [i_9 - 1] [i_9 - 1] [i_5 + 1] [i_1 + 1]) * 217))));
                                arr_31 [i_0] [14] [i_5] [14] [i_5] = (arr_30 [i_0] [i_1 + 1] [i_8]);
                            }
                        }
                    }
                    var_22 = (min((min((((-1264577351 + 2147483647) << 1)), (max(42607, 916451707)))), (var_0 <= 20)));
                }
                arr_32 [i_0] [i_0] = (arr_14 [4] [i_1] [i_1]);
            }
        }
    }
    var_23 = var_1;
    #pragma endscop
}
