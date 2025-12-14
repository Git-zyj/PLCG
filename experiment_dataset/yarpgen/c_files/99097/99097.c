/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99097
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99097 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99097
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_7 ? (((var_6 ? var_1 : var_5))) : var_10));
    var_15 += ((((var_4 + 9223372036854775807) >> var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {
                var_16 = (((((((arr_0 [i_0]) ? (arr_4 [i_0] [i_1]) : (arr_3 [i_1 - 3]))) >= (((var_2 ? 1 : (arr_2 [i_0])))))) ? 504475710 : 56));
                var_17 = (arr_0 [i_0]);
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_18 |= (((arr_3 [i_2 + 1]) ? (arr_3 [i_2]) : var_10));
        var_19 = (max(var_19, ((((arr_0 [i_2 + 1]) << (((arr_7 [i_2 - 1]) - 3753016942404025842)))))));
        var_20 = 56;
        arr_9 [i_2] = (((arr_4 [i_2] [i_2 + 1]) ? (arr_0 [i_2]) : var_11));
        var_21 = (var_1 ^ var_8);
    }
    for (int i_3 = 1; i_3 < 15;i_3 += 1) /* same iter space */
    {
        var_22 = ((+(((arr_6 [i_3]) ? (min((arr_1 [i_3]), var_12)) : (arr_6 [i_3 - 1])))));
        var_23 = (arr_1 [i_3]);
    }
    for (int i_4 = 1; i_4 < 15;i_4 += 1) /* same iter space */
    {
        var_24 = (arr_10 [i_4]);
        arr_14 [i_4] [i_4] = ((var_6 ? (((((((arr_1 [2]) != var_1)))) ^ (((arr_12 [i_4]) ? (arr_7 [i_4 + 1]) : (arr_7 [i_4]))))) : (((-(arr_3 [i_4 - 1]))))));
        var_25 = (min(var_25, (((((var_0 ? (arr_2 [6]) : (arr_2 [8]))) > (arr_2 [8]))))));
        var_26 = (max(var_26, (arr_5 [i_4] [i_4] [14])));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            var_27 *= (((arr_11 [i_5]) || (arr_1 [i_5])));
            arr_18 [i_4 - 1] [10] [i_4 - 1] = -56;
        }
    }
    for (int i_6 = 1; i_6 < 15;i_6 += 1) /* same iter space */
    {
        var_28 = (arr_12 [i_6]);
        var_29 *= (((arr_20 [0]) >> ((((var_4 ? (arr_7 [0]) : (arr_19 [8]))) - 3753016942404025819))));
    }
    #pragma endscop
}
