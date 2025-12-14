/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        var_13 = (max(var_13, (((127 ? -12458 : 136)))));
        arr_4 [i_0] [i_0] = var_7;
        arr_5 [2] [i_0] = ((~(var_1 >> var_12)));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_9 [i_1] = (((((!(((136 ? 1 : 254)))))) > (arr_7 [11])));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 15;i_3 += 1)
            {
                {
                    var_14 |= ((~((((arr_17 [3] [i_2] [i_3] [i_3 + 1]) ? 16213797250531721080 : 1)))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                arr_24 [i_5] [i_4 - 1] [i_3 - 1] [i_2] [i_1] = (min((((((arr_8 [i_1]) ? 12457 : (arr_13 [i_1]))) / var_6)), (max(var_9, ((((arr_10 [i_5] [i_3 + 1] [i_3 + 1]) && var_7)))))));
                                arr_25 [i_1] [i_1] [1] [i_1] [i_1] [i_1] = (((((8883045209537713314 - ((((arr_16 [i_1]) ? (arr_21 [i_1] [i_1] [i_1] [i_1] [i_1]) : (arr_23 [i_1] [i_1] [i_1] [i_1] [i_1]))))))) ? var_5 : (+-1422413500)));
                                var_15 -= ((var_2 ? ((((-127 - 1) != (arr_18 [i_4 - 1] [i_2] [10] [i_4])))) : (!1)));
                                var_16 = var_10;
                            }
                        }
                    }
                }
            }
        }
    }
    var_17 = var_9;
    #pragma endscop
}
