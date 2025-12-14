/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_17 = var_14;

                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_14 [i_0] [5] [5] [i_2] [i_1] [8] = (arr_13 [i_0] [i_0] [i_1] [9]);
                            var_18 = (max(var_18, ((max(((0 ? (arr_12 [i_1] [i_1] [i_3 + 1] [i_3] [i_3 - 1] [i_3 - 1]) : (arr_12 [i_0] [i_2] [i_3 + 2] [1] [i_3 - 1] [i_3 - 1]))), (0 - 1))))));
                            var_19 = (min((~0), (arr_8 [i_4] [i_2] [i_0] [i_0])));
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            var_20 = (max(var_20, var_13));
                            arr_17 [i_1] [8] [8] [7] [i_5] = var_12;
                        }
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_21 = (max(var_21, ((max(1, 238)))));
                            var_22 = ((195 ? ((-var_2 ? 1 : (arr_7 [i_3 - 1] [9] [i_6]))) : 223));
                        }
                        var_23 = ((var_14 ? (((!((((arr_3 [i_0]) ? 1 : (arr_6 [6] [0] [i_1] [i_0]))))))) : (((!(-32767 - 1))))));
                        var_24 = (((-32767 - 1) + ((227 ? (arr_8 [i_3 - 1] [4] [i_3 - 1] [i_3 - 1]) : ((max(var_13, (arr_15 [i_0] [i_0] [i_1] [i_1] [i_1] [i_2] [5]))))))));
                    }
                    arr_20 [i_1] [4] [i_1] = 36560;
                }
            }
        }
    }
    var_25 = var_1;
    #pragma endscop
}
