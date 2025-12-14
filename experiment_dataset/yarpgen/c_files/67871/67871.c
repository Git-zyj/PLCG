/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            {
                var_11 ^= (max((arr_3 [i_1 - 2]), (arr_1 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 15;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 16;i_4 += 1)
                            {
                                var_12 = (max(var_12, (((max((min(1, 2147483647)), -var_4))))));
                                var_13 = (max((arr_8 [i_2] [14] [i_2] [i_3] [i_2 + 1]), (max(((166 + (arr_1 [i_3] [i_0]))), (arr_8 [i_2] [i_1] [i_1] [i_2] [i_0])))));
                                var_14 = (min(((((~var_7) | ((~(arr_7 [i_4] [i_3] [6] [i_1])))))), ((((min(3489799855, 4095))) - (arr_2 [i_0] [i_1] [7])))));
                            }
                            var_15 = max(var_2, -567);
                        }
                    }
                }
                var_16 = ((((max((arr_9 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_1 + 1] [i_0] [12]), (arr_9 [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_0] [i_0])))) | ((max((arr_9 [7] [12] [7] [12] [i_0] [7]), 6)))));
                arr_12 [i_0] &= (arr_9 [i_0] [i_0] [4] [0] [i_1] [6]);
                var_17 ^= var_9;
            }
        }
    }
    #pragma endscop
}
