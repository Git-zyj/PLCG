/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_17 = ((~(min(256, ((1851656888 ? -6465105569849482365 : (arr_3 [i_0 - 1])))))));
                var_18 += ((arr_1 [3]) << ((((var_4 ? (arr_1 [i_0]) : (arr_1 [i_0 - 1]))) - 1496517918)));
                var_19 = (min(var_19, ((((!-6465105569849482365) + (((min((arr_0 [i_0 - 2]), (arr_3 [18]))) + ((2086120898 ? (arr_2 [16]) : (arr_0 [i_1]))))))))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = (((arr_1 [i_2]) ? (arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 + 1]) : (((arr_2 [8]) ? (arr_6 [i_0] [7]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_1] [i_2])))));

                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        arr_11 [1] [5] [i_2] [i_3] = ((!(((34632 ? 2632 : 1)))));
                        arr_12 [i_0 - 1] [i_0 + 1] [i_0] [i_0] = ((((((arr_6 [i_0 - 1] [i_0 - 2]) || 30912))) >> (var_11 - 191)));
                        arr_13 [16] [16] [16] [16] [16] = (((((var_13 ? 4377174566002752692 : (arr_10 [i_2])))) ? (arr_0 [10]) : var_3));
                    }
                }
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_20 *= ((((max(((-866547607 ? (arr_2 [i_1]) : 11169)), ((max((arr_3 [i_1]), 54138)))))) >= (((((arr_15 [i_1] [1]) || var_5)) ? (var_10 - var_4) : ((2047 ? (arr_1 [i_0]) : 0))))));
                    arr_16 [i_1] [i_1] [i_1] [19] = (((((-var_4 ? 5522077495910226808 : ((((arr_5 [i_0 - 2] [i_1] [i_0 - 2] [i_1]) ? var_1 : 62910)))))) ? (((arr_6 [i_0 + 1] [i_0 - 1]) ? (arr_9 [i_0] [i_0] [i_0] [i_4]) : (arr_6 [i_1] [i_4]))) : ((min((arr_2 [i_0 + 1]), (arr_2 [i_0 - 2]))))));
                    arr_17 [i_0 - 2] [i_1] [i_1] [15] = ((((2510590420 >> (arr_6 [i_4] [i_0 - 2]))) / (arr_6 [i_4] [i_0 + 1])));
                }
                arr_18 [i_0] [i_1] [i_1] &= (arr_9 [8] [8] [12] [i_1]);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_24 [i_5] &= (((((((((arr_19 [i_5] [i_6]) ? (arr_21 [0] [i_6] [i_5]) : var_12))) * 4021965001))) ? var_0 : (((-1 * (((arr_22 [i_5]) ? (arr_23 [i_5]) : var_5)))))));
                var_21 = (max(var_21, ((((((((((arr_19 [13] [i_5]) ? var_6 : 1))) ? ((min((arr_19 [i_5] [i_5]), var_5))) : -1))) ? ((-219735599 ? 0 : -219735599)) : (arr_21 [i_5] [1] [i_6]))))));
            }
        }
    }
    #pragma endscop
}
