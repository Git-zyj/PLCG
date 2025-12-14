/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 8;i_1 += 1)
        {
            {
                var_19 = (0 > 1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_11 [i_1 + 2] [i_2] = -var_15;
                                arr_12 [i_2] [i_1] [i_2] [6] [i_4 - 1] = 6646;
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_1] = 0;
                arr_14 [i_1] [i_0] = ((-6615730401590985801 ? (((arr_9 [i_1] [i_1 - 2] [i_1 - 1]) ? (arr_6 [i_1 + 1] [i_1 - 1] [i_1 + 2] [i_1 + 2]) : (arr_9 [i_1 - 1] [i_1 + 1] [i_1 - 2]))) : (arr_9 [i_0] [i_0] [i_1])));
            }
        }
    }
    var_20 = var_17;
    var_21 = ((~((34948 ? 155 : 100))));
    #pragma endscop
}
