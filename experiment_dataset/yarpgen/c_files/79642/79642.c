/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = 1446703848083326219;
    var_12 += var_5;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    {
                        var_13 = (arr_9 [i_3] [i_3] [i_3] [i_3] [i_3]);
                        var_14 = (max(var_14, ((min(1699243569, 1)))));
                        var_15 = (min(var_1, (arr_4 [i_0] [1] [i_2])));
                        arr_10 [8] [8] [i_1] [i_2] [i_3] = arr_3 [12];
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_16 = 1;
                    /* LoopNest 2 */
                    for (int i_6 = 4; i_6 < 11;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            {
                                var_17 = (min(var_10, 24));
                                var_18 = arr_16 [i_4 + 2] [14] [i_4 + 2] [14];
                            }
                        }
                    }
                    var_19 ^= (min(1, var_6));
                    arr_22 [13] [13] [13] &= ((!((max(var_0, 1)))));
                    var_20 = 6673815300030204862;
                }
            }
        }
        arr_23 [i_0] [5] = (max(245, (max(-1208902226739142543, 13))));
        var_21 = -123;
    }
    var_22 |= (min(1, 0));
    var_23 = max(1, (min(2561276586200844604, 245)));
    #pragma endscop
}
