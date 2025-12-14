/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_7, ((((125 + var_6) != ((min(1, var_5))))))));
    var_13 = ((var_8 ? -var_8 : (max((~var_3), var_6))));
    var_14 = (((((1634574440363415143 ? 120 : ((var_1 ? var_4 : var_8))))) ? (max(-113, (var_4 ^ var_7))) : ((min(1634574440363415143, var_10)))));
    var_15 = min(var_7, var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = (((((var_10 + 123) - (((arr_6 [3] [3]) + var_5))))) ^ ((max(-7954814418012267375, var_11))));
                var_16 = ((((max(((max(-483031589, (arr_3 [i_0])))), (var_6 * var_1)))) ? (!-19047) : var_1));
                var_17 -= (12255924461104721943 & -var_6);
                var_18 = (arr_0 [i_0]);

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] = ((1610240308 ? 7954814418012267380 : 5306405772251609572));
                                var_19 = (min((arr_11 [i_0]), ((((max(55171, var_9))) ? 15474 : (arr_13 [14] [i_1] [i_0] [i_1] [i_4] [i_0])))));
                                var_20 = (min(var_20, 1610240328));
                                var_21 = (max(var_21, (arr_6 [i_0] [i_0 - 2])));
                            }
                        }
                    }
                    var_22 = (min(var_22, 1));
                    var_23 = (((((((max(43419, (arr_0 [i_0]))))) * (arr_4 [i_2])))) ? (1610240338 / -66) : (var_6 && var_2));
                    arr_17 [i_0] [i_1] [i_0] = var_7;
                }
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    var_24 = (min(8312, -120));
                    arr_21 [i_0] [16] [i_0] [i_0 + 1] = (((arr_9 [i_5 + 1] [i_5 - 1] [i_1] [i_0]) == var_11));
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_25 += 1;
                                arr_27 [i_0] [i_7 - 1] = ((((arr_9 [i_0 - 2] [i_0] [i_0 + 1] [i_0]) + var_7)) + (arr_9 [i_0] [i_0 - 1] [i_0 - 1] [i_5]));
                                var_26 = (arr_12 [i_0] [i_0] [i_0 + 1] [i_5 - 1]);
                                arr_28 [i_0] [i_0] [i_7 - 1] [i_6] [i_0 - 1] [i_5 + 1] [i_5] = (arr_8 [i_7] [i_6 + 2] [i_5 - 1] [i_1]);
                            }
                        }
                    }
                    arr_29 [i_5 - 1] [i_0] [i_0] = max((((var_0 | 7922930663098345641) ^ (~var_11))), (((arr_1 [i_5 + 1]) ? (arr_26 [i_0 - 2] [i_5 + 1] [i_5 + 1] [i_1] [i_5] [i_0]) : (arr_1 [i_5 - 1]))));
                    var_27 = (921990888334024880 * 7954814418012267385);
                }
            }
        }
    }
    #pragma endscop
}
