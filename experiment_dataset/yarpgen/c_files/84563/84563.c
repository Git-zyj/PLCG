/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84563
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        var_16 ^= 6827983389811857602;
        var_17 = ((var_8 / (min(3300700935792086839, (arr_1 [i_0])))));
        var_18 = ((arr_1 [i_0 - 1]) ? var_7 : ((((min(3300700935792086819, 52551))) ? ((var_0 ? (arr_0 [9]) : (arr_0 [13]))) : (arr_1 [15]))));
        /* LoopNest 2 */
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 *= ((var_5 >= ((255 ? 49 : (arr_2 [i_2] [i_0])))));
                    var_20 = (arr_6 [1] [i_2]);
                }
            }
        }
        var_21 = ((var_6 << (((((arr_3 [i_0 - 1] [i_0]) ? ((((arr_1 [i_0 - 1]) | (arr_0 [i_0])))) : (max((arr_4 [i_0] [i_0]), -3300700935792086838)))) + 19))));
    }
    var_22 &= 62063;
    var_23 &= (((((var_6 ? (var_15 / var_1) : (((var_9 ? var_11 : var_7)))))) ? ((((min(var_7, var_14))) ? ((var_8 >> (var_5 - 61958))) : var_0)) : var_3));
    #pragma endscop
}
