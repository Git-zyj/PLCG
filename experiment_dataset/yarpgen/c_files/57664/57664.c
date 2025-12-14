/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_9 <= var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] [i_0] = ((arr_5 [i_0]) - (((!((min((arr_3 [0] [0] [i_1]), var_5)))))));
                var_11 ^= (max((((!((((var_7 + 2147483647) >> (var_0 - 40736))))))), (((var_1 ? 3503902371752100611 : (arr_0 [i_1] [i_0]))))));
            }
        }
    }
    var_12 = var_5;

    for (int i_2 = 0; i_2 < 17;i_2 += 1)
    {
        var_13 = (max((arr_3 [i_2] [9] [i_2]), ((12752619562695007514 ? var_1 : (arr_1 [i_2] [i_2])))));
        arr_9 [i_2] = ((-(min(((var_8 % (arr_0 [i_2] [i_2]))), var_6))));
        var_14 = ((((arr_1 [16] [i_2]) ? var_2 : (arr_8 [i_2]))));
    }
    for (int i_3 = 3; i_3 < 9;i_3 += 1)
    {
        arr_12 [i_3] [3] = (~((~(arr_2 [i_3 - 2] [i_3 - 3]))));

        /* vectorizable */
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            var_15 = var_0;

            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                var_16 = ((var_3 ? 1000798390 : ((var_9 ? 33 : (arr_14 [i_3 + 2] [i_3 + 2])))));
                arr_18 [i_3] [i_4] [6] [i_4] = arr_15 [i_3 + 3] [i_4 + 2] [i_4];

                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    var_17 = ((var_4 << (var_0 - 40723)));
                    var_18 = 29442;
                }
                for (int i_7 = 0; i_7 < 12;i_7 += 1)
                {
                    var_19 += ((((var_9 << (((arr_16 [11] [i_4] [i_4]) - 213)))) + (arr_20 [5])));
                    arr_24 [i_7] [i_4] [i_4] [i_4] [i_4] [i_4] = ((-((var_0 ? (arr_14 [i_5] [i_4]) : var_4))));
                    var_20 = (max(var_20, (arr_7 [12])));
                }
                for (int i_8 = 0; i_8 < 12;i_8 += 1)
                {
                    var_21 = var_2;
                    arr_28 [i_3] [i_8] [i_5] [i_5] [2] = var_2;
                    var_22 = (arr_25 [i_8] [i_4] [i_4] [i_4] [i_4]);
                }
            }
            arr_29 [i_4] [i_4 - 1] = ((arr_17 [0] [i_3] [i_3 - 3] [i_3 + 1]) ? (arr_17 [i_3 + 3] [i_3] [4] [i_4]) : (arr_17 [7] [i_4] [i_4] [i_4 + 1]));
        }
        var_23 = var_9;
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        arr_33 [i_9] [i_9] = (((!(arr_30 [i_9]))) ? ((+((178 ? (arr_30 [i_9]) : (arr_32 [i_9]))))) : (((arr_32 [i_9]) ? (max((arr_30 [i_9]), 9338)) : (min(var_7, var_1)))));
        var_24 = var_7;
        var_25 += (arr_30 [8]);
    }
    var_26 = var_8;
    #pragma endscop
}
