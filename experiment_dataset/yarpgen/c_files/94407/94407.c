/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94407
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((18446744073709551614 | (255 & 2013629497))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_13 = (max(var_13, ((((arr_8 [i_0 + 1] [i_2] [i_4]) > (2013629489 & var_4))))));
                                var_14 = var_4;
                                var_15 = ((2030182815 <= (((((5430533770889096959 << (4155118058665412877 - 4155118058665412861))) >= 1)))));
                            }
                        }
                    }
                }
                var_16 = (((((((arr_8 [i_1 - 2] [i_0 + 3] [i_0 + 3]) - (arr_8 [i_0] [i_0 + 1] [i_0]))))) && (((14 % (((arr_10 [i_0] [i_1 + 2] [i_0 + 2] [i_0] [i_1 - 1] [i_1]) - (arr_5 [11] [i_1]))))))));
                var_17 = (max(var_17, ((((var_12 ^ (arr_2 [i_0 + 2] [i_0 + 3])))))));
            }
        }
    }
    var_18 -= var_0;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 18;i_6 += 1)
        {
            {
                arr_20 [i_6] [i_6] = (var_9 == 186);
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 16;i_9 += 1)
                        {
                            {
                                arr_33 [i_6] [i_6] = var_0;
                                var_19 = (1 > -45);
                            }
                        }
                    }
                }
                var_20 = (arr_16 [i_5]);
            }
        }
    }
    #pragma endscop
}
