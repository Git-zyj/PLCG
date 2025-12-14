/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max((max((max((-9223372036854775807 - 1), var_1)), var_5)), ((var_16 ? ((73 ? var_1 : var_16)) : var_2))));
    var_21 += var_9;

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        var_22 = (arr_0 [i_0]);

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_4 [6] [6] |= var_7;
            var_23 = (max(var_23, ((max((min((arr_1 [i_0 - 1]), ((((arr_3 [i_0] [0]) - var_1))))), (arr_1 [i_1]))))));
        }
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            arr_7 [i_0] = ((var_17 ? (((arr_1 [i_2 + 1]) ? 1 : (arr_1 [i_2 + 2]))) : ((min((arr_0 [i_0]), 1)))));
            arr_8 [i_0] [i_0] [i_0] = (arr_2 [i_0] [i_0] [i_0]);

            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                arr_11 [i_0] [i_2 - 1] [i_0] [i_0] = ((-((max(1, (arr_0 [i_0 - 1]))))));
                var_24 = (min(var_24, (--13691)));
                var_25 = (min(var_25, (((((((!var_16) > (1 == 1)))) << (((max((5 * 0), (((-(arr_5 [i_2] [i_2 - 2])))))) - 18446744073709551461)))))));
                var_26 = ((((arr_5 [i_0] [i_3]) ? (arr_5 [i_0] [i_0 - 1]) : (arr_5 [i_0] [i_2 - 1]))));
                var_27 = (max(var_27, var_1));
            }
            var_28 = var_14;
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_29 = (min(var_29, (arr_2 [i_0] [i_0] [i_0])));
            arr_14 [i_0] [i_0] = var_3;
            var_30 += ((18446744073709551592 << ((((1 ? -10 : 1)) + 47))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            var_31 |= ((((((min(var_19, var_6)) && (((var_13 ? var_9 : (arr_17 [i_0] [i_5] [12])))))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 20;i_7 += 1)
                {
                    {
                        arr_23 [i_0] [i_0] [i_0] = 9;
                        var_32 |= (((((arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0]) ? 0 : (((arr_15 [i_0]) ? 4294967295 : (arr_15 [i_0]))))) != var_10));
                    }
                }
            }
        }
    }
    for (int i_8 = 0; i_8 < 1;i_8 += 1)
    {
        arr_26 [2] [i_8] |= ((((arr_1 [i_8]) ? (((arr_3 [i_8] [14]) ? var_5 : (arr_12 [i_8] [i_8] [17]))) : (arr_22 [i_8] [i_8]))));
        var_33 += ((~(arr_19 [i_8] [i_8] [i_8] [i_8])));
        arr_27 [i_8] [8] &= (arr_16 [i_8] [i_8] [i_8]);
    }
    /* vectorizable */
    for (int i_9 = 1; i_9 < 1;i_9 += 1)
    {
        var_34 = var_10;
        var_35 |= (arr_1 [i_9 - 1]);
    }
    #pragma endscop
}
