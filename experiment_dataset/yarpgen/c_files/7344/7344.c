/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7344
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [12] [i_0] = (min(6661440420955074800, ((((arr_0 [i_0] [i_0]) < (arr_0 [i_0] [i_0]))))));
        var_16 &= (((1534092048 ? 43 : -1534092061)) << (((arr_0 [i_0] [4]) - 149)));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_6 [i_1] = -1534092048;
        arr_7 [i_1] = arr_5 [i_1 + 1];
        var_17 = (-(max((arr_4 [i_1 + 1]), (arr_4 [i_1 + 1]))));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 13;i_2 += 1)
    {
        arr_11 [i_2] = (arr_5 [i_2 - 3]);
        var_18 += (arr_0 [10] [10]);
    }
    var_19 = var_9;
    #pragma endscop
}
