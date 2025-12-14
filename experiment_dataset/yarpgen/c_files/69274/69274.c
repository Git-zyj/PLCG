/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_14 = (((arr_1 [i_2 + 1]) | (min((!36028797002186752), (((arr_9 [i_1 + 2] [i_1] [i_1] [i_2 + 1] [i_1 + 2] [i_1] [i_0]) ^ (arr_9 [i_3] [i_3] [i_3] [i_3] [1] [i_2] [i_2 - 1])))))));
                                arr_11 [i_0] [i_0] [i_0] [5] [i_0] [i_0] [i_4] = ((var_9 ? (arr_7 [0] [i_1] [0] [0] [i_1]) : 65535));
                                var_15 -= ((762557288 + ((((min(11489, 8953))) ? (arr_8 [i_3] [i_0] [i_1 + 2] [i_0]) : ((26275 ? 0 : 890448364))))));
                            }
                        }
                    }
                    arr_12 [i_2] [i_2] = ((17712 | (((!(56563 >= -23))))));
                }
            }
        }
    }
    var_16 = ((((((890448364 ? var_8 : var_8)))) ? ((var_5 ? (var_8 <= var_6) : ((-4 ? var_9 : var_1)))) : ((var_13 ? ((var_3 ? 243 : var_1)) : ((12849998303719219670 ? 8188 : var_9))))));

    /* vectorizable */
    for (int i_5 = 2; i_5 < 12;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                {

                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        arr_22 [i_5] [i_5] [i_6] [i_5] = ((((6142103256455365338 > (arr_21 [i_5] [i_6] [i_5] [i_5] [i_8] [i_8]))) && 606200682));
                        var_17 += (((1 >= var_6) * ((128 ? 65535 : 27533))));
                    }
                    for (int i_9 = 0; i_9 < 14;i_9 += 1)
                    {
                        var_18 = ((~(arr_15 [i_5])));
                        var_19 -= ((((-116 || (arr_17 [i_9]))) ? 117 : (arr_19 [i_7 - 2] [i_6])));
                    }
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 10;i_10 += 1)
                    {
                        for (int i_11 = 3; i_11 < 13;i_11 += 1)
                        {
                            {
                                arr_31 [i_7] [i_7] [i_10] [i_11] &= (((6749466828105105405 ? 4 : var_1)));
                                var_20 = (!2246342876907827124);
                            }
                        }
                    }
                    var_21 = (-64 && 58);
                }
            }
        }
        arr_32 [i_5] &= (((arr_26 [i_5] [i_5] [i_5] [i_5 + 1]) ? var_10 : var_1));
        arr_33 [i_5] = (((((122523911461873723 ? (arr_20 [12] [i_5] [i_5] [12] [i_5] [i_5]) : var_6))) ? (arr_27 [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 2]) : (arr_27 [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2])));
        arr_34 [i_5] = ((~(!2199006478336)));
        arr_35 [i_5 + 1] [i_5] = (((arr_28 [i_5] [0] [i_5 + 1] [i_5 - 2] [i_5 + 2]) ? var_3 : (arr_28 [10] [4] [i_5] [i_5 + 2] [i_5 + 1])));
    }
    #pragma endscop
}
