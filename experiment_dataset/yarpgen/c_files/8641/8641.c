/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] [i_1] [i_2] &= arr_1 [i_0 - 1];
                    var_11 *= (~var_2);
                }
            }
        }
    }
    var_12 = ((!(!var_8)));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        var_13 = (min(var_13, (((~(!30))))));
        var_14 |= 25446;
        var_15 = (arr_10 [i_3] [i_3]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    arr_16 [i_3] [i_4] [i_5] [i_4] = ((-(!var_8)));
                    var_16 = (((arr_10 [i_5] [i_4]) != var_7));
                    var_17 &= (((arr_10 [i_5] [i_4]) ? var_3 : (arr_15 [i_3] [i_4])));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        var_18 = (min(((((arr_14 [i_6]) ? (((arr_13 [i_6] [i_6]) ? var_2 : var_4)) : ((((var_3 == (arr_10 [i_6] [i_6])))))))), (arr_14 [i_6])));
        arr_20 [i_6] = var_3;
    }
    for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
    {
        var_19 = (((min(((var_9 >> (((arr_12 [i_7] [i_7] [i_7]) - 1834426482247731747)))), (arr_15 [i_7] [i_7]))) | -1));
        var_20 = (min(var_20, (((-(((((-(arr_21 [i_7])))) ? ((min(var_10, var_4))) : ((2147483647 ? (arr_15 [i_7] [i_7]) : var_5)))))))));
        var_21 ^= ((((max(32767, (arr_13 [i_7] [i_7])))) || (arr_10 [i_7] [i_7])));
    }
    for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
    {
        var_22 = (!((max((max(var_1, var_10)), var_0))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 19;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 18;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        arr_35 [i_10] [i_9] [i_9] [i_9] = ((~(min((arr_11 [i_11]), var_2))));
                        arr_36 [i_10] = ((var_4 != (max(((min((arr_29 [i_11] [i_9] [i_8]), (arr_26 [i_8])))), var_6))));
                        var_23 = var_0;
                    }
                }
            }
        }
    }
    var_24 = ((((1 | (~2040)))) ? var_8 : ((var_0 ? (((var_6 + 9223372036854775807) >> (var_2 - 2049962855))) : (var_2 ^ var_1))));
    #pragma endscop
}
