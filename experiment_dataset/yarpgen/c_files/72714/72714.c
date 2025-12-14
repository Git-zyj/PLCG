/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_4;
    var_15 &= (!var_10);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            var_16 = ((var_2 ? (var_3 > 13) : ((-74 + (arr_3 [i_0] [i_1])))));
            arr_7 [i_0] [i_1] [i_1] = (((((var_8 ? var_3 : (arr_2 [i_0] [i_1])))) ? (arr_3 [i_0] [i_1]) : var_0));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_17 ^= (((((~(arr_13 [i_0] [i_2])))) ? (((var_5 ? (arr_9 [i_4]) : (arr_1 [i_4])))) : (arr_6 [i_0] [i_3])));
                        var_18 += (((((1 ? var_2 : var_0))) ? (!var_12) : var_2));
                        arr_15 [i_0] [i_2] [i_3] [i_4] [i_0] = (((arr_5 [i_0]) / 68));
                    }
                }
            }
            arr_16 [i_0] [i_2] [i_2] = ((~(arr_13 [i_0] [i_2])));
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        {
                            var_19 = (((arr_23 [i_5 + 1] [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5]) + (arr_23 [i_5] [i_5] [i_5] [i_5] [i_5])));
                            arr_26 [i_5] [i_5] = var_7;
                        }
                    }
                }
            }
        }
        var_20 = ((((var_13 ? var_1 : var_5))) ? var_5 : var_1);
    }
    for (int i_8 = 0; i_8 < 13;i_8 += 1) /* same iter space */
    {
        var_21 &= (((arr_20 [i_8] [i_8]) * (arr_21 [0] [i_8] [i_8])));
        var_22 = ((((min(var_4, (arr_11 [i_8] [12]))))));
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 10;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 13;i_11 += 1)
                {
                    {
                        var_23 = (((arr_3 [i_9 + 2] [i_10]) ? (arr_1 [i_8]) : (min(var_2, (((arr_32 [i_8] [i_8] [i_8]) / (arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))))));
                        var_24 = ((~(min((arr_10 [1] [i_9] [i_10] [i_10]), ((min((arr_30 [i_8]), (arr_1 [i_8]))))))));
                    }
                }
            }
        }
        arr_37 [i_8] = (!((min(var_10, (arr_14 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8])))));
    }
    var_25 = (min(var_11, var_0));
    var_26 = ((var_11 ? ((((var_4 > (((max(var_11, var_1)))))))) : var_12));
    #pragma endscop
}
