/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_6));
    var_12 = var_9;
    var_13 = 255;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 19;i_2 += 1)
            {
                {
                    var_14 ^= (((arr_2 [i_0] [i_0] [i_1 + 2]) ? (((arr_0 [i_2 + 2] [i_1 - 1]) ? (arr_0 [i_2 - 1] [i_1 - 1]) : var_1)) : var_6));

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        var_15 = (max(var_15, (((var_3 < (var_7 % var_3))))));
                        var_16 = var_8;
                        arr_10 [i_0] = var_2;
                    }
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_17 = (max(((((arr_7 [i_2 - 1] [i_4] [i_4] [i_1 - 1]) >= (arr_7 [i_2 + 1] [i_4] [i_4] [i_1 - 2])))), ((-74 ? 124 : 4294967276))));
                        var_18 = (min(var_18, ((max(-54, (((var_9 <= (arr_4 [i_1] [i_2 - 1])))))))));
                        arr_14 [i_4] [i_0] [3] [i_0] [1] = ((-(arr_0 [i_2] [i_4])));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_0] [i_5] [i_4] [i_2 + 1] [i_1 + 1] [i_0] = ((((!(arr_0 [i_0] [i_2])))));
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [6] = -839;
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_0] [i_0] [i_2 + 2] [i_0] [i_0] = (arr_21 [i_2 - 2] [i_2 + 1] [i_1 - 1] [10] [i_0]);
                            arr_23 [i_6] [i_0] [4] [i_0] [i_0] = var_3;
                        }
                        var_19 += (arr_5 [i_0] [1] [1]);
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        for (int i_8 = 2; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_28 [i_0] [i_1 + 2] [i_2] [i_1 + 2] [i_0] = var_3;
                                var_20 += 1;
                                var_21 = (min(var_21, 255));
                                var_22 &= (((((-(arr_26 [i_8] [i_8 + 1] [i_8] [i_8 - 2] [i_8])))) || (arr_26 [i_8] [i_8 + 1] [i_8] [i_8] [i_8])));
                                var_23 = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
