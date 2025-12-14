/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((((var_10 - (480711784 / 84)))) != var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_0] [i_0 + 1] [i_0] = arr_9 [i_3] [i_2] [i_2] [i_1] [i_1] [i_0 + 1];
                            var_18 = (578379216 > (214 || 1));
                            var_19 = (((arr_7 [i_2] [i_2] [i_2] [i_2]) || 42));
                        }
                    }
                }
                var_20 = (arr_6 [i_1]);
                var_21 = 0;
            }
        }
    }
    var_22 = (((var_15 || var_7) ^ var_9));
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 11;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 11;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 11;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, (arr_18 [i_4] [i_6] [i_6])));
                                arr_26 [i_7] [i_7] [i_5] [i_7] [i_7] = 56678;
                            }
                        }
                    }
                    var_24 = (min(var_24, -7));
                    arr_27 [i_4] [i_5] = (arr_18 [i_5] [i_5] [i_6]);
                }
            }
        }
    }
    #pragma endscop
}
