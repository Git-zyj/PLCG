/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= 4922423170027388624;
    var_13 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (1672138684849647416 ^ 65000);

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_15 = (max((((((var_8 ? 2610464913344763864 : 2610464913344763864)) > -2610464913344763864))), var_0));
                    arr_10 [i_1] = ((-2610464913344763864 ? (((((2610464913344763864 ? 11306 : 2610464913344763864))) ? (max(var_2, var_8)) : var_5)) : ((((((arr_7 [i_0] [i_0] [i_0] [8]) > var_8)) ? var_4 : (arr_6 [i_0] [i_1] [i_2]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [2] = (((min(-2610464913344763864, (arr_15 [i_3] [i_3] [i_3 - 1] [i_3 - 1] [i_3]))) < (((var_9 & var_1) ? (max(-2610464913344763864, var_7)) : ((min((arr_2 [8] [i_2] [i_4]), var_3)))))));
                                var_16 = (max(var_16, var_11));
                                arr_17 [i_0] [3] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((max(((max(96, var_9))), ((var_6 ? var_0 : 96)))), -2610464913344763878));
                                arr_18 [i_4] [5] [i_0] [i_2] [i_1] [i_1] [i_0] = (max(var_10, (min((13648 | var_9), (min((arr_13 [i_1] [1] [i_1] [i_1] [i_1]), -26805))))));
                            }
                        }
                    }
                    var_17 ^= ((var_3 ? (min((((arr_6 [12] [i_1] [i_2]) ? (arr_3 [i_0] [7]) : var_9)), -2610464913344763864)) : (min((max(-2610464913344763873, var_6)), (max(96, var_5))))));
                }
            }
        }
    }
    #pragma endscop
}
