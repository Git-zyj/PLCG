/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_2;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_18 += (arr_0 [i_0]);
        var_19 = ((~((var_15 ? (3831699946 && 29972) : 1))));
        arr_2 [i_0] [i_0] = (((((~(((arr_0 [i_0]) | 0))))) ? var_16 : (((arr_1 [i_0]) ? 29972 : 1))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_20 ^= ((29972 ? (arr_0 [i_0]) : (arr_0 [i_0])));
            arr_5 [6] [i_1] [i_1] = (arr_4 [i_0]);
            var_21 += var_2;
            var_22 = (min(var_22, (7 ^ var_12)));
            var_23 = ((arr_4 [i_0]) ? (arr_3 [i_1] [i_0]) : 889235770);
        }
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        arr_8 [i_2] = ((0 ? 1 : ((((463267357 ? 35563 : 0)) >> 0))));
        var_24 = (max(var_24, (((min((var_11 + 24672), ((0 ? 8853 : 463267366)))) + ((((arr_7 [22]) - (arr_7 [i_2]))))))));
        var_25 = ((463267357 < (var_5 & var_11)));
        arr_9 [i_2] = 3673462065;
        var_26 = (max(var_26, ((1852732752 >= ((((0 > ((463267347 ? var_16 : 1))))))))));
    }
    #pragma endscop
}
