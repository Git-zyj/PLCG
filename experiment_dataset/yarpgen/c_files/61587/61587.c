/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61587
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 |= (((arr_1 [9] [i_0 + 1]) ? var_9 : var_14));
        var_17 = (((~9156695531248633058) == (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_18 += 96;

        /* vectorizable */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_19 = var_6;
            var_20 = (arr_1 [i_1] [i_2]);
        }
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_8 [i_1] [i_1] = var_12;
            var_21 = (max(101, (arr_1 [i_1] [1])));
        }
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            var_22 += (((((-(arr_12 [i_1] [i_4] [i_4])))) ? ((((((-10 ? (arr_2 [10]) : (arr_5 [i_1] [12] [i_4])))) ? (((var_3 >= (arr_1 [17] [10])))) : var_1))) : (arr_12 [i_4] [i_4] [i_4])));
            var_23 += (((((min(var_0, 1833143092299363828)))) & 96));
        }
    }
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        var_24 += (((min((min((arr_14 [i_5]), var_10)), (arr_13 [i_5])))) ? (min((arr_13 [i_5]), (((arr_14 [14]) ? var_5 : var_5)))) : (((((arr_14 [i_5]) >= (arr_13 [i_5]))))));
        var_25 = -96;
    }
    var_26 = (((((min(-9223372036854775802, 1)) % ((min(var_8, var_15))))) & var_8));
    #pragma endscop
}
