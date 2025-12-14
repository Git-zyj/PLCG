/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8258
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8258 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8258
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (min(((((((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_3 [i_0] [i_0]))) != (arr_3 [i_0] [i_0])))), (max((arr_4 [i_0]), (arr_1 [i_0 + 2] [i_0])))));
                var_18 = ((((((arr_4 [i_0]) ? (arr_4 [i_0]) : (((0 && (arr_0 [i_0]))))))) >= (arr_0 [i_0])));
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] [18] = ((1 ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2])));
        var_19 = (arr_6 [i_2] [i_2]);
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 24;i_5 += 1)
            {
                {
                    var_20 = ((-(!65524)));
                    var_21 = (min(var_21, ((((((!((min((arr_10 [i_4] [23]), 16)))))) >= ((((14 || (arr_15 [1]))))))))));
                    var_22 += (max((max(((-7 ? (arr_5 [i_5]) : (arr_11 [16]))), (~0))), (((arr_9 [i_3]) ? (arr_5 [i_5]) : (arr_15 [i_3])))));
                    var_23 = (((((-(arr_16 [10] [i_4] [i_3] [i_3])))) ? (arr_16 [i_3] [i_3] [i_4] [i_5]) : ((((arr_15 [14]) && (((0 ? (arr_12 [i_4]) : (arr_8 [4])))))))));
                }
            }
        }
    }
    var_24 = var_9;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            {
                arr_24 [i_6] = (min((arr_23 [i_6]), (((arr_23 [i_6]) ? (arr_23 [i_6]) : (arr_23 [i_6])))));
                arr_25 [i_6] = -84;
                arr_26 [i_6] = (max((arr_22 [i_6] [i_6]), (((arr_22 [i_6] [i_6]) - (arr_22 [i_6] [i_6])))));
            }
        }
    }
    #pragma endscop
}
