/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_3;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_16 = min((((arr_0 [i_0]) ^ var_4)), ((~(arr_0 [i_0]))));
        var_17 = (~var_12);
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 ^= ((!(arr_0 [i_1])));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_19 += var_14;
            arr_8 [i_1] [i_1] [i_2] = (arr_1 [i_2]);
        }
        var_20 = (((arr_6 [i_1]) || var_8));
        arr_9 [i_1] &= (((arr_2 [i_1]) ? var_2 : (arr_5 [i_1] [i_1])));
    }
    #pragma endscop
}
