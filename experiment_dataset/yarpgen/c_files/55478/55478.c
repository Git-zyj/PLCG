/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_10;
    var_18 += ((((var_15 ? var_16 : -5761087762961915621)) >= (min(var_13, var_3))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] = (((((237 ? var_2 : var_10))) / 9223372036854775792));
                    arr_10 [i_0] [i_0] [i_2] = ((~(arr_5 [i_2])));
                    arr_11 [i_0] [i_0] = ((~((32151 ? -5761087762961915620 : 0))));
                }
            }
        }
        var_19 = (~7256);

        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                var_20 = var_8;
                arr_16 [i_0] [i_3] [i_0] = (((((92 >> (((arr_0 [i_3]) - 47565))))) ? (((!(arr_15 [i_0] [i_3] [i_3] [i_4])))) : (arr_7 [i_4] [i_3] [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        {
                            var_21 -= var_10;
                            arr_23 [i_0] [i_0] [i_4] [i_5] [i_5] [i_0] [i_6] = 1044553782;
                            var_22 = (((arr_7 [i_5] [i_5] [i_5] [i_5]) ? (arr_7 [i_6] [i_4] [i_4] [i_0]) : 243));
                        }
                    }
                }
            }
            var_23 = 0;
            arr_24 [i_0] = ((!(((var_13 ? (arr_15 [i_0] [i_0] [i_3] [i_3]) : var_6)))));
            arr_25 [i_0] [i_0] [i_0] = -90980571;
        }
        arr_26 [i_0] = ((-(arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_7 = 0; i_7 < 22;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 20;i_9 += 1)
            {
                {
                    var_24 = (max((((var_2 >> ((((var_5 ? var_10 : 8278)) - 112))))), (max(((max((arr_33 [i_9] [i_9] [i_9] [i_7]), var_6))), 6161))));
                    arr_34 [i_9] [i_9] [i_8] [i_9] = ((((((!((max(var_4, var_7))))))) * ((var_11 ? (-32767 - 1) : 3250413513))));
                    var_25 += ((~((((9447 ? 237 : 2175241811)) + 156))));
                    arr_35 [i_7] [i_9] [i_8] [i_9] = (max(((var_14 ? (arr_30 [i_9 + 1] [i_9 + 1] [i_9 + 2]) : (arr_30 [i_9 + 1] [i_9 + 1] [i_9 - 2]))), (((!(arr_30 [i_9 - 1] [i_9 - 1] [i_9 - 1]))))));
                }
            }
        }
        arr_36 [i_7] [i_7] = var_14;
    }
    for (int i_10 = 0; i_10 < 17;i_10 += 1)
    {
        var_26 += (((((max((arr_39 [i_10]), (arr_39 [i_10]))))) ^ var_12));
        arr_41 [i_10] = (max((((arr_38 [i_10]) ? var_10 : ((min(var_11, var_3))))), ((~(max(var_4, var_14))))));
    }
    var_27 = var_9;
    #pragma endscop
}
