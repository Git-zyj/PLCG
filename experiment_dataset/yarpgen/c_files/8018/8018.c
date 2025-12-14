/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_8 / -45440023) ? (((56 ? -1 : -45440023))) : var_11)) - var_1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_15 = (((((((min(var_2, 666497050))) && (arr_3 [3])))) & (min((arr_0 [i_2 + 2] [9]), (arr_0 [i_2 - 2] [6])))));
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_16 = (254 >= 26189);
                                arr_15 [i_4] [6] [5] [8] = (arr_0 [i_0] [i_0]);
                                var_17 = ((var_12 ? ((-var_2 ? (min(var_13, var_13)) : (arr_3 [i_0]))) : (((-(((var_9 || (arr_1 [i_0] [i_0])))))))));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 8;i_5 += 1)
                    {
                        var_18 = ((!(arr_16 [1] [1] [2])));
                        var_19 = (((((1 / (arr_9 [0])))) ? ((((((arr_0 [i_0] [i_0]) ^ -60)) << ((((var_4 ? (arr_10 [1] [4] [8] [8] [1]) : 56686)) - 3514750566318524550))))) : ((24 ^ (min(var_6, (arr_4 [8] [9] [i_5])))))));
                        var_20 = 3;
                        var_21 = (((arr_12 [2] [9] [9] [1]) ? -45440008 : (arr_13 [8] [8] [8] [6] [i_1] [2] [i_5])));
                    }
                    var_22 = ((((max((arr_18 [5] [7] [3] [1] [7] [i_2 - 1]), ((var_0 ? (arr_0 [2] [2]) : var_1))))) ? (arr_18 [i_0] [i_1] [9] [5] [i_2] [9]) : (((((var_4 ? -45440023 : var_12))) ? 10794 : (arr_10 [i_0] [0] [i_2] [i_2] [i_2])))));
                }
            }
        }
    }
    #pragma endscop
}
