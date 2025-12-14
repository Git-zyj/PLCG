/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95704
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_15 ^= (min((arr_3 [i_0]), (((arr_0 [i_0]) ? (arr_2 [i_0] [i_0]) : (arr_3 [i_0])))));
        var_16 *= (((max((arr_3 [i_0]), (~33052))) & var_13));
        var_17 = (min(var_17, var_5));
        var_18 = ((+((~(((arr_0 [i_0]) / var_2))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_1] [i_2] [i_3] [i_2] = ((((16384 ? (max(var_6, 12542)) : (arr_7 [i_2] [i_3]))) ^ (((!(var_2 - var_5))))));
                        var_19 = (var_7 + ((1849508428956226717 ? -1236830034 : 33052)));
                    }
                    var_20 -= ((((max(((78918855185923604 ? 33055 : 1)), -16384))) <= ((var_4 + (arr_4 [13] [i_3])))));
                }
            }
        }
        var_21 += (((2001119604 != var_6) | (max((arr_4 [i_1] [i_1]), -54))));
        var_22 += (((((arr_9 [13] [i_1] [i_1] [14]) >> 281474968322048)) + var_12));
    }
    var_23 = ((((min(var_3, (max(var_9, 7))))) ? ((max(12038, var_11))) : var_11));
    var_24 = (((min(6, var_8))));
    #pragma endscop
}
