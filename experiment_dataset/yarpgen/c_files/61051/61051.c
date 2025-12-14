/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        arr_4 [1] |= (arr_1 [6]);
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_13 = ((-(min((max(-177074252, 1764968558)), -177074252))));
                    arr_12 [i_0] [i_1] [i_0] = (((((-(min((arr_0 [i_0]), (arr_7 [i_0])))))) ? ((min((arr_5 [i_2 + 3] [i_2 + 1] [i_2 + 2]), (arr_5 [i_2 + 1] [i_2 + 2] [i_2 + 3])))) : ((((arr_5 [i_1 - 3] [i_2 + 3] [i_0 - 2]) || (arr_7 [i_0]))))));
                    var_14 = ((((((arr_11 [i_0 + 2] [i_2 + 3] [i_0 + 2]) ? (arr_11 [i_0 - 1] [i_0 - 1] [i_0]) : -297984171))) ? ((((arr_9 [i_0 - 2] [i_1]) ? (arr_9 [i_0 + 2] [i_1]) : (arr_9 [i_0 - 2] [i_0])))) : 557906959));
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 17;i_3 += 1)
    {
        var_15 ^= ((6 ? ((((max(510, 13355518940403625959))))) : -8));
        var_16 = (min((arr_15 [i_3 + 1]), (max(-8834, 6))));
        var_17 = (max(var_17, var_1));
    }
    var_18 = (min(var_18, var_7));

    for (int i_4 = 4; i_4 < 23;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = ((((((arr_11 [i_4] [i_4] [i_4 - 4]) ? (arr_16 [i_4 - 4]) : (arr_11 [i_4] [i_4] [i_4 - 1])))) ? (max((arr_6 [i_4] [i_4]), 0)) : (max((arr_6 [i_4] [i_4]), (arr_6 [i_4] [i_4])))));
        var_19 ^= (max(7680, -47));

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_23 [i_4] [21] [i_5] = var_12;
            var_20 = (min(var_20, var_1));
            var_21 = (max(var_21, ((min((arr_18 [i_4 - 4] [i_4 - 4]), 1)))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_22 = (min(var_22, ((min((((((min((arr_27 [i_4 - 4] [i_4 - 4]), var_12))) ? (max((arr_28 [i_5]), var_7)) : (arr_7 [i_4])))), (((((-116 ? var_10 : (arr_10 [i_6])))) ? (arr_28 [22]) : ((max((arr_22 [i_4] [i_4 - 1] [i_4]), 12))))))))));
                        var_23 = 3731542418;
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_24 = (min(var_24, 8786878483915891905));
            var_25 = 20027;
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_26 = ((-124 > (arr_24 [i_4])));
            var_27 = ((var_3 ? (((2368674691 != (arr_26 [i_9])))) : (arr_11 [1] [10] [i_9])));
        }
    }
    #pragma endscop
}
