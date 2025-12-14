/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56917
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56917 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56917
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 ^= 171;
            arr_5 [8] [9] = (arr_2 [i_0 - 4]);
            var_14 &= (max(0, -1));
            var_15 ^= (arr_4 [i_0 - 4]);
        }
        arr_6 [i_0] = (((min((arr_4 [i_0 + 1]), var_3)) ^ var_10));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_16 *= (((arr_7 [i_2]) > var_6));
        var_17 = (((((-14 ? var_7 : 217))) ? (!var_3) : -1771279922162675020));
    }

    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        arr_13 [i_3] [i_3 - 2] |= ((max((arr_2 [i_3 + 2]), (arr_2 [i_3 + 1]))));
        var_18 *= (((arr_10 [i_3 + 1]) <= var_11));
    }
    var_19 = var_6;
    #pragma endscop
}
