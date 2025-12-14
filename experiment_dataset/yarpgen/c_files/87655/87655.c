/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87655
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_10 = (((arr_0 [i_0]) <= (arr_0 [i_0])));
        var_11 = (45 < 32);
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_5 [3] [i_1] = (((1314190818327647476 * var_8) << ((((var_9 * var_5) <= var_6)))));
        arr_6 [i_1] [i_1] = 86;
        arr_7 [i_1] = min((min((arr_2 [i_1]), (arr_4 [i_1]))), (arr_2 [i_1]));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 17;i_2 += 1)
    {
        var_12 -= (~65535);
        arr_12 [1] = (arr_10 [i_2] [8]);
    }
    for (int i_3 = 3; i_3 < 7;i_3 += 1)
    {
        arr_16 [i_3] = ((~(arr_3 [i_3] [i_3 - 2])));
        var_13 = ((~(!169)));
        arr_17 [i_3] = ((-((-(arr_4 [i_3 + 3])))));
        var_14 = (max((max((arr_15 [i_3 - 3]), (arr_15 [i_3 + 1]))), (min((arr_15 [i_3 - 2]), 9834))));
    }
    var_15 = var_7;
    var_16 = (!var_6);
    #pragma endscop
}
