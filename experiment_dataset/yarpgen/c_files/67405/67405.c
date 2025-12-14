/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67405
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((-(arr_6 [i_2 - 2] [i_2] [i_2 - 1]))))));
                                var_14 |= 2147467264;
                                arr_13 [i_0] [i_1] = -14;
                                arr_14 [19] [i_3] [i_3 + 2] [i_3 + 4] [i_2 + 1] [17] [2] |= 28326;
                            }
                        }
                    }
                }
                var_15 ^= (min(65526, 1));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 16;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] = 1;
                                var_16 = (max(var_16, (arr_15 [i_7] [i_6] [13] [i_1])));
                                arr_24 [i_7] [i_1] = 1;
                            }
                        }
                    }
                }
                var_17 = (min(var_17, ((((((-(arr_20 [i_1] [i_1] [6] [i_0] [i_1] [i_1])))) ? (min(87, 18446744073709551615)) : (arr_20 [i_1] [i_1] [14] [i_0] [i_0] [i_1]))))));
                var_18 += 969087837;
            }
        }
    }
    var_19 = ((-(((!((min(1, var_6))))))));
    #pragma endscop
}
