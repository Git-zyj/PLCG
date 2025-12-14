/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_0, var_11));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = (((!var_4) ? var_2 : (arr_0 [i_0])));

        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            var_13 = (arr_3 [i_0] [i_1 + 1]);
            arr_6 [i_0] = (+((var_5 ? (arr_1 [i_0]) : (arr_3 [i_0] [i_1]))));
            arr_7 [i_0] [i_1] |= ((((((arr_0 [i_1]) ? (arr_3 [i_0] [i_1]) : -9223372036854775800))) ? var_11 : (arr_3 [i_0] [i_1])));
            var_14 = ((+((11603 ? (arr_1 [i_0]) : (arr_1 [i_0])))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    {
                        var_15 = 9223372036854775800;

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = arr_1 [i_4];
                            var_16 = (((~-9223372036854775800) ? (arr_12 [i_3] [i_3 - 2] [i_4] [i_4]) : (((arr_15 [i_3] [i_2] [i_2] [i_2] [i_4]) ? (arr_12 [i_0] [i_0] [i_0] [i_0]) : var_4))));
                        }
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_0] [i_5] = (arr_12 [i_0] [i_1 - 2] [i_1] [i_1]);
                            var_17 = (((arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 - 1]) ? var_9 : (arr_15 [i_1] [i_1] [i_1] [i_1] [i_1 + 1])));
                            var_18 = ((96130964 ? -1625255654 : 7052984494242586064));
                            arr_21 [i_0] [i_5] = arr_12 [i_1] [i_3 + 1] [i_2] [i_1 + 1];
                        }
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_3] = var_10;
                        arr_23 [i_0] [i_1] [i_2] [i_3] = var_4;
                    }
                }
            }
        }
        arr_24 [i_0] = ((((((arr_9 [i_0] [i_0] [i_0]) ? (arr_5 [i_0]) : (arr_3 [i_0] [i_0])))) ? (arr_5 [i_0]) : ((-9223372036854775784 ? -1625255654 : 7052984494242586093))));
        arr_25 [i_0] |= (((((arr_1 [i_0]) == (arr_9 [i_0] [i_0] [i_0]))) ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) : 1));
    }
    /* LoopNest 3 */
    for (int i_6 = 2; i_6 < 7;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 8;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 6;i_8 += 1)
            {
                {
                    var_19 = (2147483646 & 255);
                    arr_36 [i_6] [i_7] = ((+(((arr_30 [i_7] [i_8]) ? (max((arr_1 [i_8]), 6139717316696714820)) : ((((arr_27 [i_7]) ? (arr_31 [i_8]) : (arr_0 [i_6]))))))));
                }
            }
        }
    }
    #pragma endscop
}
