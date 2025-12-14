/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((62 ? (!var_4) : (max(((var_6 ? var_1 : var_0)), 1))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_6 [4] [i_1] = (arr_3 [9] [i_0 - 2] [8]);
            var_11 = ((79 ? (((120259084288 << (((arr_1 [i_0 + 1] [i_1]) - 3454360933))))) : (((arr_3 [1] [i_1] [8]) % (arr_2 [0] [i_1])))));
            var_12 *= ((!(arr_2 [i_0 - 1] [i_0 + 3])));
            arr_7 [i_0] = (~(((arr_1 [i_0] [1]) ? (arr_1 [3] [i_1]) : (arr_2 [4] [i_0]))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_12 [i_0] = ((((1 / (arr_3 [i_0 - 1] [i_2] [5]))) >> ((((arr_3 [i_2] [10] [i_0]) || (arr_0 [0] [i_0]))))));

            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                arr_15 [i_0 + 3] [7] [3] [i_0 + 1] = (((arr_10 [i_0 - 1] [i_0 - 2]) > (arr_3 [i_0 + 4] [9] [i_0 + 1])));
                arr_16 [i_2] [12] = ((!(arr_14 [i_0 + 3] [i_2] [12] [i_3])));
            }
        }
        var_13 *= (arr_8 [5] [i_0 + 4]);
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 12;i_5 += 1)
            {
                {
                    arr_21 [1] [5] = ((~(arr_14 [8] [i_4] [i_4] [10])));
                    arr_22 [i_0 + 4] [5] = ((-88 ? 9223372036854775796 : 1));
                    arr_23 [i_0] [i_4] = ((-(((max((arr_8 [i_0 + 4] [1]), (arr_0 [i_4] [i_4]))) - ((((arr_10 [i_0 + 3] [i_5 - 2]) + 1)))))));
                }
            }
        }
        arr_24 [i_0 + 2] = (arr_20 [i_0 + 2]);
        var_14 = (max(70, (arr_8 [i_0 + 3] [12])));
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 19;i_6 += 1)
    {
        arr_28 [i_6] [i_6] = ((-(((arr_26 [i_6]) ? 1 : 1))));
        var_15 = (!123);
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {
        arr_31 [i_7] [6] = (arr_2 [3] [8]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                {
                    arr_37 [i_7] [i_8] [i_9] = ((((((arr_36 [10] [i_9]) + (arr_34 [1] [11])))) ? (!0) : (((arr_1 [11] [i_7]) ? (arr_25 [1]) : 1))));
                    arr_38 [i_7] [i_8] [2] [i_9] = ((-(arr_4 [10] [i_9])));
                    arr_39 [1] [7] = (((arr_29 [i_7] [11]) ? (arr_29 [2] [i_8]) : (arr_29 [i_8] [i_9])));
                }
            }
        }
    }
    #pragma endscop
}
