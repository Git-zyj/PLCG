/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7114
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((-(var_3 / var_10)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {

                            /* vectorizable */
                            for (int i_4 = 1; i_4 < 11;i_4 += 1) /* same iter space */
                            {
                                arr_15 [8] [8] [i_2] [8] [i_2] |= (arr_0 [i_0 + 1]);
                                var_14 = (((((var_0 ? -30048 : var_4))) ? (arr_13 [i_0] [i_1] [i_1]) : (-1 % 15562)));
                            }
                            /* vectorizable */
                            for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
                            {
                                var_15 = (((arr_3 [i_5 + 1] [i_2]) ? -15562 : 30048));
                                var_16 = (min(var_16, var_9));
                            }
                            for (int i_6 = 1; i_6 < 11;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_1 + 1] [i_0] [i_2] [i_3] [i_6] = 101;
                                var_17 += -26;
                                var_18 ^= (min(124, (((((1 ? 7005 : -69))) ? (arr_8 [i_0] [i_1] [i_3] [i_3]) : 50))));
                            }

                            for (int i_7 = 0; i_7 < 12;i_7 += 1)
                            {
                                var_19 *= (((((-((min(-7006, (arr_16 [i_0] [i_1 - 1] [i_2] [i_3] [10]))))))) ? ((((max(30038, (arr_13 [i_0] [i_1 - 1] [2])))) / (arr_11 [i_7] [i_7] [0] [0] [i_1] [i_0]))) : -50));
                                arr_24 [i_0] [i_0] [i_1] = (((arr_22 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_1 + 1]) || 0));
                                var_20 = (min(var_20, 7913));
                                var_21 = (arr_19 [i_0] [i_1] [8] [i_1] [i_7] [i_1] [i_7]);
                            }
                            /* vectorizable */
                            for (int i_8 = 0; i_8 < 12;i_8 += 1)
                            {
                                arr_28 [i_0] [i_0] [i_2] [i_3] [i_8] = ((32074 * (arr_12 [i_0 - 3] [i_0] [i_0 - 2] [i_0 - 3] [10] [i_1])));
                                arr_29 [i_0] [i_1] [i_2] [i_3] [i_0] [i_2] [i_1] = (((arr_20 [0] [4]) & (arr_22 [i_0 - 2] [i_0 - 2] [i_0 - 2] [i_1 + 1] [i_0 - 2])));
                            }
                            var_22 = (max((max((-72 / -24636), ((max(var_7, var_3))))), ((((min((arr_22 [i_0] [i_1] [i_3] [i_3] [i_3]), 0))) >> ((((min(65236, var_4))) - 58735))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 12;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 12;i_10 += 1)
                    {
                        {
                            var_23 -= ((-126 != ((max(36693, 18176)))));
                            var_24 &= (min(((2080606529 ? 123 : -27)), -1));
                        }
                    }
                }
            }
        }
    }
    var_25 = -120;
    #pragma endscop
}
