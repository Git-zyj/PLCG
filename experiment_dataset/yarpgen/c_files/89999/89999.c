/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, (min(((((((arr_3 [i_2] [i_1]) ? var_9 : 97)) <= ((((arr_0 [i_1]) > var_6)))))), var_5))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        var_12 = (((var_6 / 1758698609) ? (arr_9 [i_0] [i_1] [i_2] [i_3] [i_3]) : (arr_7 [i_3] [i_3] [i_2] [i_3] [i_1] [i_3])));

                        for (int i_4 = 1; i_4 < 13;i_4 += 1) /* same iter space */
                        {
                            var_13 += (arr_10 [i_0] [i_1] [i_1 - 2] [i_3 - 2] [i_0]);
                            var_14 = (i_1 % 2 == 0) ? (((arr_6 [i_1 + 2] [i_3 + 3] [i_1] [i_4 - 1]) + (arr_6 [i_1 + 2] [i_3 - 2] [i_1] [i_4 + 1]))) : (((arr_6 [i_1 + 2] [i_3 + 3] [i_1] [i_4 - 1]) - (arr_6 [i_1 + 2] [i_3 - 2] [i_1] [i_4 + 1])));
                            var_15 *= (((arr_1 [i_1 + 1]) ? (arr_1 [i_1 - 1]) : var_8));
                            var_16 = ((2536268697 || (((-8377341918033790845 ? 3600248691 : 2)))));
                            arr_13 [13] [i_1] [i_2] [i_3] [i_4] = ((((((!(arr_11 [i_0] [i_1 + 1] [i_1 + 1] [i_3] [i_4]))))) >= (arr_4 [i_1] [i_1 + 2] [i_1 + 1])));
                        }
                        for (int i_5 = 1; i_5 < 13;i_5 += 1) /* same iter space */
                        {
                            var_17 = (arr_11 [i_0] [i_1] [i_2] [i_3] [i_0]);
                            var_18 = (arr_7 [i_0] [12] [i_2] [11] [i_1] [12]);
                        }
                        var_19 = (min(var_19, (((-(arr_15 [i_3 - 1] [i_3] [i_3 + 2] [i_1] [i_1 - 2] [i_1 - 2]))))));
                        var_20 = (max(var_20, (arr_6 [i_1] [4] [i_0] [i_2])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
