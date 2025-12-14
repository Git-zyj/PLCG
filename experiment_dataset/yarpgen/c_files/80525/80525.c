/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80525
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_12;
    var_16 = var_11;
    var_17 = var_14;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_4 [8] = ((((((arr_2 [i_0] [8]) / 9318))) ? (((!(arr_2 [8] [8])))) : (((arr_2 [i_0] [6]) / (arr_2 [i_0] [0])))));

        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            arr_7 [i_0] = ((-(((arr_2 [i_0] [i_0]) ? (arr_2 [i_1 - 1] [i_0]) : (arr_5 [3] [i_1 + 2] [i_1 + 3])))));
            arr_8 [i_0] [4] = (((arr_6 [i_0]) <= ((-(56218 <= var_12)))));
        }
    }
    #pragma endscop
}
