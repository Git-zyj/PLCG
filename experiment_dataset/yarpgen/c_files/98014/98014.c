/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    arr_7 [i_0] [i_1] [i_1] = ((((((arr_6 [i_1] [i_1]) ? (arr_0 [i_1 + 2] [i_1]) : (arr_0 [i_1 - 1] [i_2])))) ? (((arr_0 [i_1 - 1] [i_1 + 2]) - (arr_6 [i_1] [i_1]))) : (((arr_0 [i_1 - 1] [i_1 - 1]) ? (arr_0 [i_1 + 1] [i_2]) : (arr_0 [i_1 + 1] [i_1])))));
                    var_20 = (((((max((arr_4 [i_0]), var_1)))) ? ((((arr_3 [i_1 + 1]) | (arr_3 [i_1 + 1])))) : (arr_2 [i_1 + 2])));
                }
                for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_21 = (((((var_8 * (var_4 / var_8)))) ? ((max(var_11, (arr_0 [i_0] [i_1 + 2])))) : (((max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 1])))))));
                    var_22 = (max((((((~(arr_9 [i_0] [i_1] [i_3] [i_3])))) ^ (((arr_0 [i_0] [i_1]) | var_12)))), (((!(arr_8 [i_1]))))));
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 10;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 10;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_0] [i_1 + 2] [i_4] [i_4] [i_5] [i_1] = (((((((min(4432364204242827703, 1))) ? (((var_8 ? var_8 : (arr_14 [i_0])))) : (((arr_5 [i_0] [i_1] [i_4] [i_5]) ? (arr_5 [i_6] [i_1] [i_1] [i_0]) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))))) ? (arr_0 [i_1 + 1] [i_1]) : var_2));
                                arr_23 [i_5] [i_1] [i_4] [i_5] [i_1] [i_5] [i_4] = (((-var_11 ? (arr_5 [i_0] [i_1] [i_4] [i_5]) : (min(var_14, var_9)))));
                                var_23 += (arr_14 [i_0]);
                            }
                        }
                    }
                }
                var_24 = ((((min((arr_20 [i_1 + 1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_20 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_0] [i_0] [i_1 + 2])))) ? (arr_20 [i_1 - 1] [i_1 + 2] [i_0] [i_1] [i_1] [i_0] [i_0]) : ((~(arr_20 [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_0] [i_0] [i_1])))));
                var_25 = (min((!var_14), (arr_11 [i_1] [i_0] [i_0])));
            }
        }
    }

    for (int i_7 = 2; i_7 < 21;i_7 += 1)
    {
        var_26 = (arr_25 [i_7]);
        var_27 = (min(var_27, (((var_14 > (arr_24 [i_7 - 1] [i_7 - 1]))))));
        var_28 = (var_5 ? (arr_25 [i_7 - 2]) : (max((arr_25 [i_7]), ((((arr_24 [i_7] [i_7]) ? (arr_24 [i_7 - 2] [i_7]) : (arr_24 [i_7 - 2] [i_7])))))));
        var_29 = ((~(((((var_3 & (arr_24 [i_7 - 1] [i_7])))) ? ((~(arr_25 [i_7]))) : var_11))));
    }

    /* vectorizable */
    for (int i_8 = 4; i_8 < 22;i_8 += 1)
    {
        var_30 = (((arr_27 [i_8 - 1]) ? (arr_27 [i_8 + 2]) : (arr_27 [i_8 + 1])));
        var_31 ^= (arr_27 [i_8 - 3]);
        var_32 = (arr_26 [i_8 - 3]);
    }
    #pragma endscop
}
