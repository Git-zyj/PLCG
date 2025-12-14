/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7052
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, (((var_3 ? ((var_8 ? var_5 : var_4)) : ((var_10 | (var_5 || var_1))))))));
    var_18 = ((var_7 | ((var_0 ? ((var_4 ? var_3 : var_10)) : var_6))));
    var_19 = ((2777738944 ? -53 : 4294967295));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_1] [5] [5] [8] [i_1] [i_4] = (((54351 * -1) ? (((arr_6 [i_0 + 1] [i_0 + 2] [i_0 - 1] [i_1 + 2]) << (((arr_6 [1] [i_0] [i_0 + 2] [i_1 + 2]) - 3168464409)))) : ((~(arr_6 [i_0] [i_0] [i_0 + 2] [i_1 + 1])))));
                                var_20 = ((!(((arr_0 [i_1 + 2]) || (arr_0 [i_1 + 2])))));
                                arr_16 [i_3] [i_3] [9] [i_1] [i_3] [i_3] = (((((arr_0 [i_0 + 1]) << (var_0 + 121))) ^ ((((arr_8 [i_1]) ^ (arr_8 [i_1]))))));
                            }
                        }
                    }
                }

                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_21 = var_5;
                    var_22 = (arr_5 [i_1] [i_0]);
                    arr_21 [i_1] = ((var_9 | ((var_4 ? var_16 : (min(-24345, var_15))))));
                }
                var_23 = var_11;
            }
        }
    }
    var_24 &= (max((4294967295 ^ 1127435120), var_9));
    #pragma endscop
}
