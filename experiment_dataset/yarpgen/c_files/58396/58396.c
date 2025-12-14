/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58396
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58396 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58396
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(112, (max((min(2933259617, var_0)), (41490 >= var_3)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0 + 2] [i_0 + 2] = ((~(arr_2 [i_0] [i_0 + 4])));
        arr_4 [i_0 + 1] [i_0] = (((arr_0 [i_0 - 2] [i_0 + 1]) ? (arr_0 [i_0 + 1] [i_0 - 1]) : (arr_0 [i_0 + 2] [i_0 + 2])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] = var_0;
        arr_9 [i_1] = var_3;
        arr_10 [i_1] = var_4;

        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            arr_13 [i_1] [i_1] [14] = (((arr_2 [i_1] [i_2 - 1]) ? (arr_0 [i_2 + 1] [i_2 - 1]) : var_5));

            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                arr_18 [i_2 + 2] [i_2 + 2] = (((arr_6 [i_2 + 1] [i_2 + 2]) || var_4));
                arr_19 [i_1] [i_2 + 2] [i_3] = 3496089910;

                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    arr_22 [8] [0] [i_1] = var_2;
                    arr_23 [i_1] [i_2 + 2] [i_2 + 2] [i_4 - 1] = var_0;
                }
                arr_24 [i_1] [i_1] [18] = (arr_15 [i_1] [i_3] [7] [i_1]);
            }
            for (int i_5 = 3; i_5 < 18;i_5 += 1)
            {
                arr_28 [i_1] [3] [i_5 + 1] [i_5 - 2] = ((((((arr_14 [i_2] [i_2 - 1] [i_2]) + 2147483647)) >> (var_8 + 915165237))));
                arr_29 [i_1] [i_2 + 1] [i_5 + 2] [i_1] = 41490;
                arr_30 [i_1] [i_2 + 2] [i_1] = (((arr_6 [i_2 + 2] [i_2 + 2]) ? (arr_6 [i_2 - 1] [i_2 - 1]) : var_6));
                arr_31 [i_1] [i_1] [13] [i_5] = ((3 ? (arr_0 [i_2 + 1] [i_2 + 1]) : ((3640684596 ? 90 : -1160767830))));
            }
            arr_32 [i_1] [15] = var_0;
        }
    }
    #pragma endscop
}
