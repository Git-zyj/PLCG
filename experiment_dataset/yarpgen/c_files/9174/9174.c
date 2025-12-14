/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9174
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 += ((((max((min(var_1, var_6)), (((1193818486 << (1193818486 - 1193818486))))))) && ((max(2, (17522 == var_12))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = (!((!((((arr_2 [i_0] [i_1]) << (((arr_2 [i_0] [i_1]) - 62154))))))));
                arr_6 [i_0] [i_0] = (arr_1 [i_0] [i_1]);
                var_19 = ((~((((arr_1 [i_0] [i_0]) && var_15)))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 ^= (arr_4 [i_0] [i_0]);
                                var_21 = var_12;
                                arr_17 [i_4] [i_2] [i_3] [i_2] [i_2] [i_0] = (min(((var_2 / ((var_15 / (arr_13 [i_4] [i_3] [i_2 + 1] [i_1] [i_0] [i_0]))))), (((var_2 ? (arr_10 [0] [i_1] [i_1] [i_1] [i_1]) : (arr_10 [0] [4] [0] [4] [i_4]))))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, var_17));
    var_23 = (min(var_13, (~var_14)));
    #pragma endscop
}
