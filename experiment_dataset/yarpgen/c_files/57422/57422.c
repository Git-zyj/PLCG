/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_17 *= ((max((min(var_16, 1669180516308811547)), (var_15 >= 442906491529428724))));
        var_18 = max(((((((var_7 >> (44608 - 44585)))) ? (arr_1 [i_0] [i_0]) : ((43931 ? var_11 : (arr_2 [i_0])))))), (arr_1 [i_0] [i_0]));
        var_19 -= var_1;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_20 = (max(var_20, (((((max((arr_3 [i_1] [i_1]), -442906491529428724))) ? ((((((arr_4 [14]) ? 7117789959384378189 : 2977611221))) ? ((var_10 ? 21605 : var_15)) : (arr_4 [i_1]))) : (43930 % 43933))))));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 15;i_3 += 1)
            {
                {
                    arr_9 [i_1] |= ((((max((arr_4 [i_3 + 1]), var_2))) ? 21605 : (((arr_8 [i_2]) ? var_12 : var_13))));
                    var_21 = (max(var_21, var_7));
                    arr_10 [i_1] [i_1] [i_1] [i_3] = (min((min((arr_1 [7] [0]), 18418552508698570275)), ((((2154762409040677419 ? var_8 : 3267168208305845001)) & (arr_5 [10] [i_2] [i_2])))));
                    var_22 ^= (max((((8956346086808532533 & 9120582912798860551) ? ((var_13 + (arr_4 [i_1]))) : (arr_7 [i_1] [i_1] [i_2] [i_3]))), (arr_3 [i_1] [i_1])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 23;i_5 += 1)
        {
            {
                var_23 = (min(21605, var_16));
                var_24 = (max(var_24, (((((((442906491529428731 ? 16 : 3329006218)))) ? ((((!2154762409040677419) >> (-5 - 4294967272)))) : (var_5 * var_13))))));
                var_25 = (max(var_25, (((((max(-7556, (5 >= 9490397986901019082))))) - var_16))));
                arr_16 [i_4] = ((((max((var_7 ^ 43924), 46))) ? (((((951238832 ^ (arr_13 [i_4] [i_5])))) ? (arr_15 [i_4] [i_5]) : ((var_3 ? -442906491529428752 : 1385105976)))) : 888045873));
                /* LoopNest 3 */
                for (int i_6 = 0; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                arr_23 [0] [0] = var_8;
                                arr_24 [1] [i_7] [i_5] [i_5] [i_4] |= (max(((3412766918 ? (max((arr_18 [i_4] [i_5] [i_5]), var_15)) : ((max(8939401512697318251, (arr_14 [i_6])))))), ((((var_0 | 6615414421844067189) % (arr_13 [i_6] [i_7]))))));
                                arr_25 [i_4] [i_5] [i_6] = 213;
                                var_26 = var_13;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
