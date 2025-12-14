/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62680
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_19 = (((((var_4 && (arr_6 [i_0] [i_1] [i_0])))) >= ((min((arr_5 [i_0] [i_0] [i_2] [i_2]), (arr_5 [i_0] [i_1] [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_20 += min((arr_5 [i_4] [i_2] [i_1] [1]), (arr_5 [i_0] [i_0] [i_0] [i_4 + 1]));
                                arr_11 [i_2] = (min((arr_7 [i_0] [i_0] [i_2] [i_3] [i_4]), ((((arr_7 [i_4 - 3] [i_2] [i_3 - 1] [i_2] [i_0]) == (((((arr_1 [i_0]) || var_1)))))))));
                            }
                        }
                    }
                    var_21 = (max(var_4, (((((min(var_16, (arr_1 [i_0])))) >= (arr_0 [4]))))));
                    var_22 = (arr_9 [i_0] [2] [i_2] [i_1] [i_1] [i_2]);

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 11;i_5 += 1)
                    {
                        var_23 = (((arr_7 [i_0] [i_1] [i_2] [i_1] [i_1]) == (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0])));
                        arr_16 [i_1] [i_2] [i_1] = ((var_6 * (arr_13 [i_1] [i_2] [i_1] [i_1])));
                        var_24 = var_7;
                    }
                }
            }
        }
    }
    var_25 = (min(var_13, var_15));
    #pragma endscop
}
