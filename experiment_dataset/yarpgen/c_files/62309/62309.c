/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((((max(var_11, var_15))) / var_15))) * -119566105));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_21 += (((((28096 ? (arr_1 [i_0] [i_0]) : (max(var_6, (arr_0 [2] [5])))))) ? (arr_0 [1] [i_0]) : (max(var_0, (((arr_0 [i_0] [i_0]) & var_10))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 10;i_3 += 1)
                {
                    {
                        var_22 = ((((1 << (arr_0 [9] [i_3 + 1]))) % (arr_6 [i_3 + 1] [i_2] [1] [1])));
                        arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] = (((0 ? ((var_4 ? (arr_1 [i_0] [i_0]) : (arr_6 [5] [i_1] [i_2] [i_3]))) : (arr_7 [i_0] [i_1] [i_0]))));

                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            var_23 -= ((7 - (((arr_5 [i_1 - 1] [i_4] [i_3 + 2]) & ((65535 ? 1 : (arr_9 [i_4])))))));
                            var_24 = (arr_3 [i_1 + 1] [i_1]);
                            var_25 = (min(var_25, var_12));
                        }
                        arr_12 [i_0] [i_1] [i_1] [i_2] [i_1] [8] = -var_4;
                    }
                }
            }
        }
        var_26 -= (arr_9 [1]);
    }
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {
        var_27 = var_12;
        arr_15 [5] = (max(1, (((!((((arr_13 [3] [i_5]) + 1))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 25;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 23;i_8 += 1)
            {
                {
                    var_28 = (max(var_28, ((((~5583) - (arr_20 [i_8 + 2]))))));
                    var_29 -= (var_18 / 65535);
                    arr_24 [18] [i_7] [i_8 - 2] [i_7] |= ((arr_19 [i_8 - 2]) || (arr_19 [i_8 + 2]));
                    var_30 ^= ((((((arr_23 [i_6]) % (arr_22 [i_7] [i_6])))) ? (((var_9 ? 8 : (arr_20 [5])))) : (arr_19 [i_8])));
                }
            }
        }
        var_31 = arr_19 [i_6];

        for (int i_9 = 0; i_9 < 25;i_9 += 1)
        {
            arr_28 [i_6] [15] [i_6] = (((((1472 & (arr_19 [i_9])))) ? (arr_27 [i_6] [i_6] [6]) : ((var_3 ? (arr_27 [10] [i_9] [10]) : var_8))));
            arr_29 [i_6] &= (arr_21 [i_6]);
        }
        var_32 += (arr_25 [11] [i_6] [11]);
    }
    var_33 = var_13;
    var_34 = ((max((max(var_12, 65514)), (max(83, var_6)))));
    var_35 -= ((((((max(54043195528445952, var_2))) && (!65517))) ? (((var_1 < var_12) ? var_8 : var_7)) : ((((((var_13 ? -4831940055967229496 : var_8))) || (0 ^ var_10))))));
    #pragma endscop
}
