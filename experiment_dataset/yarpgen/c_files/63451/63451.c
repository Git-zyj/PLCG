/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_19 = max(((~(max(3794384791, (arr_0 [i_0]))))), ((((((var_4 ? var_0 : 500582504))) ? (max(512, 1022)) : (arr_2 [i_0])))));
        var_20 = ((+(((arr_1 [i_0 + 1]) ? (max((arr_2 [i_0]), var_2)) : (64513 != 19018)))));
    }

    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_21 = ((!(arr_0 [i_1])));
        arr_5 [i_1] [i_1] = -0;
        arr_6 [i_1] [i_1] = ((~((~(((arr_2 [i_1]) ^ 53))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            var_22 = (((arr_1 [i_1]) >= ((16 ? 1 : 1023))));
            var_23 = var_11;
        }

        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            arr_13 [i_1] [i_3] = var_17;
            var_24 = (min((arr_1 [i_1]), ((33550336 ? (arr_8 [i_1] [i_3]) : ((-(arr_10 [i_1] [i_1] [i_3])))))));
            var_25 = (((((max(2147467264, 7984537394830711101)))) ? (!32759) : -var_2));
            var_26 *= ((((1 && ((min(var_18, (arr_8 [1] [14])))))) ? (~262016) : var_10));
        }
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 1;i_4 += 1)
    {
        var_27 = ((((((var_9 + 9223372036854775807) >> (32767 - 32758)))) ? (arr_16 [i_4 - 1]) : (arr_3 [i_4 - 1])));
        arr_17 [i_4] [i_4] = ((!(((1442210306594722054 ? 31 : -2)))));
    }
    for (int i_5 = 0; i_5 < 11;i_5 += 1)
    {
        var_28 = (((((((~(arr_9 [i_5] [i_5]))) ^ ((((arr_1 [1]) * var_15)))))) ? ((min(16580, (min(2147483647, (arr_11 [i_5])))))) : -108));
        arr_20 [i_5] = (min(((max((min(1022, 16580)), var_1))), (arr_1 [i_5])));
        arr_21 [i_5] [i_5] = 11003572470166610795;
        var_29 = (~990);
    }
    #pragma endscop
}
