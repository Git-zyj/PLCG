/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_11 = (max(-var_5, (max((arr_6 [i_0 - 2]), var_7))));
                arr_8 [i_1] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 17;i_4 += 1)
                            {
                                arr_15 [i_1] = 1;
                                arr_16 [i_1] = (var_7 | -1);
                            }
                            for (int i_5 = 0; i_5 < 21;i_5 += 1)
                            {
                                arr_20 [i_0] [i_0] [10] [i_1] = (!119);
                                arr_21 [12] [i_2] [i_1] [1] [i_5] [i_1 - 1] [i_5] = (max(((12 >> (((arr_6 [i_1]) - 3663446653)))), ((max(50253, 64933)))));
                                var_12 = (max(((var_7 ? (((arr_3 [i_2] [i_1]) ? var_0 : 18446744073709551615)) : (((51070 | (arr_12 [5] [i_2] [i_3] [i_3])))))), (arr_19 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 2])));
                            }
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_13 *= (max(0, -1));
                                var_14 = (max(var_14, var_9));
                            }
                            var_15 = (max(var_15, -1));
                        }
                    }
                }
                var_16 -= (((3765525384 ^ 28) + (((-(max(-112, var_7)))))));
            }
        }
    }
    var_17 = (max(var_17, var_6));
    var_18 = (!154);
    #pragma endscop
}
