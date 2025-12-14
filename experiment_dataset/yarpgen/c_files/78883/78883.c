/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78883
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_3 [i_0 + 1] [2] = (max(((min(126, (max(var_6, 0))))), var_7));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_12 *= ((-((((arr_9 [i_2] [i_0]) < var_10)))));
                        var_13 = (min(var_13, var_11));
                    }
                }
            }
        }
        arr_12 [i_0] = (((((max((arr_10 [i_0 - 1] [10] [i_0] [i_0] [i_0]), var_8)) <= (var_1 || var_3)))) ^ ((1 ? 6273 : 65535)));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_14 = min((((var_8 != var_8) << (((1732449631 + 371395592) - 2103845204)))), ((((arr_13 [i_4 + 1]) < (1 < 121)))));
        var_15 = (((((arr_14 [i_4] [i_4 - 2]) ? (arr_13 [i_4 - 2]) : (arr_13 [i_4 - 2]))) != (arr_13 [i_4 - 2])));
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        var_16 = ((((((arr_16 [i_5] [i_5]) * (arr_16 [i_5] [i_5])))) ? (((arr_16 [i_5] [i_5]) ? var_4 : (arr_16 [i_5] [i_5]))) : ((max((arr_16 [i_5] [i_5]), (arr_16 [i_5] [i_5]))))));
        var_17 = (max((((arr_14 [i_5] [i_5]) ? 813672767 : (arr_13 [i_5]))), ((((arr_16 [i_5] [6]) != ((3317 ? 1 : 13396421787040462489)))))));
        var_18 = 22385;
    }

    /* vectorizable */
    for (int i_6 = 1; i_6 < 14;i_6 += 1)
    {

        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_19 = (((arr_21 [13] [i_7 + 1]) ? 1 : 1));
            var_20 = (min(var_20, (~var_11)));
        }
        var_21 = (min(var_21, (((~(arr_18 [i_6 + 2]))))));
        var_22 ^= var_6;
        var_23 &= ((var_9 ? var_0 : (arr_17 [i_6 - 1])));
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 22;i_8 += 1)
    {
        arr_26 [i_8] = (14 != 59);
        var_24 = var_6;
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 18;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 18;i_11 += 1)
            {
                {
                    var_25 = var_10;
                    var_26 = (max(var_26, ((min((min(1944801120, (-9223372036854775807 - 1))), -71)))));
                }
            }
        }
    }
    var_27 = (min(8355840, ((var_11 ? (max(var_9, var_7)) : var_5))));
    #pragma endscop
}
