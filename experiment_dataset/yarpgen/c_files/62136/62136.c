/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62136
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62136 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62136
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = -4044898929866577652;
    var_16 = var_14;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_0] = (arr_8 [i_0] [i_0] [i_0]);
                    arr_10 [i_0] [i_1] [i_1] = (((-(((var_12 && (arr_0 [1] [i_1])))))));
                    arr_11 [i_0] [i_0] [i_0] [i_2] = ((arr_2 [i_0]) ? ((~((var_3 - (arr_6 [9]))))) : ((((var_8 ? 4044898929866577657 : var_14)) / var_9)));
                    arr_12 [i_0] [i_0] [i_0] [0] = (((!-127) ? (((!(arr_3 [i_0] [i_0] [i_2])))) : (((((!(arr_2 [i_0]))) && 1)))));
                }
            }
        }
    }
    var_17 = var_3;

    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_15 [i_3] = (min((arr_6 [i_3]), (max((min((arr_2 [i_3]), var_9)), (arr_13 [i_3])))));
        arr_16 [i_3] = 1;
        arr_17 [i_3] = ((~(((arr_2 [i_3]) << (124 / 4044898929866577645)))));
    }
    #pragma endscop
}
