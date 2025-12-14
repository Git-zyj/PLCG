/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_5;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_18 = (arr_1 [4] [i_0]);
        var_19 = (var_5 | ((((!var_13) | (((arr_0 [i_0]) ? var_2 : (arr_1 [i_0] [i_0])))))));
        var_20 = (arr_1 [i_0] [i_0]);
    }

    for (int i_1 = 3; i_1 < 10;i_1 += 1)
    {
        var_21 = (arr_1 [i_1] [i_1]);

        for (int i_2 = 0; i_2 < 13;i_2 += 1)
        {
            arr_8 [i_1] [i_2] = ((((((arr_6 [i_1 - 2] [i_1 + 3]) << (((arr_6 [i_1 - 2] [i_1 - 2]) - 50))))) && (((~(arr_6 [i_1 + 3] [i_1 + 2]))))));
            arr_9 [i_1] [i_1] = (((((arr_3 [i_1] [i_1]) % (arr_3 [i_1 - 1] [i_1])))) | (((var_11 & var_5) ? var_1 : var_6)));
            var_22 = (max(var_22, (((-(((arr_0 [i_1 - 2]) ? (arr_0 [i_1 + 1]) : (arr_0 [i_1 - 3]))))))));
        }
        var_23 *= var_16;
        var_24 = ((+((((arr_6 [i_1 - 1] [i_1 - 2]) && (arr_0 [i_1]))))));
    }
    for (int i_3 = 2; i_3 < 18;i_3 += 1)
    {
        var_25 = (var_8 >= var_12);
        var_26 += (arr_10 [i_3]);
    }

    for (int i_4 = 3; i_4 < 8;i_4 += 1)
    {
        var_27 = (min(var_27, (((var_1 ? (((!(arr_2 [i_4 + 1])))) : ((-(arr_5 [i_4] [i_4] [i_4 + 3]))))))));
        var_28 = (var_0 ? (arr_12 [i_4] [i_4]) : (arr_13 [i_4]));

        /* vectorizable */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_16 [i_4] [6] [i_4 - 2] &= ((arr_1 [i_5] [i_4 - 1]) ? (arr_1 [i_4 - 1] [i_5]) : (arr_1 [i_4 + 2] [i_4 - 2]));
            var_29 += (((arr_15 [i_4 + 3] [i_4 + 2] [i_4 - 1]) ? (arr_11 [i_4 - 3] [i_4 - 2]) : (arr_11 [i_4 - 2] [i_4 - 1])));
            var_30 = (max(var_30, (arr_7 [i_5])));
            var_31 = (arr_14 [i_4 + 1]);
        }
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            var_32 *= (arr_19 [i_4 + 2]);
            /* LoopNest 2 */
            for (int i_7 = 1; i_7 < 8;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        var_33 = (arr_20 [i_4] [i_4 + 2] [i_4]);
                        var_34 = (min(var_34, (arr_3 [i_4] [6])));
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 11;i_9 += 1)
        {
            var_35 -= ((+((((arr_6 [i_4 + 1] [i_4 - 2]) <= (arr_6 [i_4 + 1] [i_4 - 1]))))));
            var_36 += ((((((((var_12 << (((arr_4 [i_4] [i_4 - 3]) - 8177685211503063437)))) <= (arr_19 [i_9]))))) >= (arr_7 [i_4 - 1])));
            var_37 &= (arr_22 [i_4] [i_4 + 3] [8] [i_4 - 2]);
            /* LoopNest 2 */
            for (int i_10 = 2; i_10 < 9;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    {
                        var_38 = ((~((((arr_5 [i_10 + 2] [i_11 - 1] [i_4 - 3]) != (arr_5 [i_10 - 1] [i_11 - 1] [i_4 + 1]))))));
                        var_39 = var_10;
                        var_40 = (arr_31 [i_4] [i_4] [i_10 + 2] [i_11] [i_9]);
                        var_41 -= var_13;
                        arr_32 [i_4] [i_4 - 3] [i_4] [i_4 - 2] [i_4] [i_4] = (arr_14 [i_4 - 2]);
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 16;i_12 += 1)
    {
        arr_36 [8] = -var_2;
        arr_37 [1] &= ((arr_33 [i_12 - 1] [i_12 - 1]) ? (((arr_33 [i_12 - 1] [i_12 + 1]) ? (arr_33 [i_12 - 2] [i_12 + 1]) : (arr_33 [i_12 - 1] [i_12 + 1]))) : (arr_33 [i_12 + 1] [i_12 - 2]));
    }
    var_42 *= var_14;
    #pragma endscop
}
