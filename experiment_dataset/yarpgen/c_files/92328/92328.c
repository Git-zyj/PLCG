/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92328
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92328 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92328
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((var_2 ? var_3 : var_6))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] = (max((arr_1 [i_0] [i_0]), ((var_6 ? (arr_0 [i_0] [i_0]) : ((max((arr_0 [15] [i_0]), 127)))))));

        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            arr_7 [13] = ((!((((arr_5 [i_1 + 2] [i_0] [i_0]) & ((max(var_7, 44847))))))));
            arr_8 [i_0] [i_0] [i_0] = ((((-1023 - ((var_3 ? (arr_3 [i_0] [i_1 + 2] [i_1]) : (arr_6 [i_0]))))) % (((((arr_0 [i_0] [i_0]) || (arr_5 [5] [5] [i_0])))))));
            arr_9 [i_0] [i_1] = ((-(((arr_0 [i_0] [i_0]) ? var_3 : ((((arr_4 [i_0] [i_0]) != var_3)))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            arr_12 [i_0] [i_2] = var_7;
            arr_13 [i_0] [i_2] [i_0] = var_9;
        }
    }
    #pragma endscop
}
