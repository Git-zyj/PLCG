/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85741
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_11 ? var_6 : (var_3 - 1));
    var_17 = var_4;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_18 = arr_0 [i_0];

        /* vectorizable */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_5 [i_0] &= (((arr_3 [8]) >= (arr_1 [i_0] [i_0])));
            var_19 = (((arr_3 [i_0]) ? 1 : (arr_3 [i_1])));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        {
                            var_20 *= (arr_2 [i_0]);
                            arr_13 [i_0] [1] [i_2] [i_3] [i_3] |= ((arr_3 [i_0]) != var_4);
                            arr_14 [i_0] [i_0] &= ((1069547520 ? (arr_4 [i_4] [1] [1]) : (arr_4 [i_1] [i_1] [i_1])));
                            var_21 = (arr_9 [i_4] [i_0] [i_2] [i_1] [i_0]);
                            arr_15 [i_0] [i_1] [i_2] [i_0] = (arr_0 [i_0]);
                        }
                    }
                }
            }
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 10;i_5 += 1)
        {
            var_22 = ((~((-(arr_2 [i_5])))));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_6] [i_6] = (((arr_6 [i_0] [i_0] [i_0]) | (arr_7 [i_0] [i_5 + 2])));
                        var_23 = (min(var_23, ((((arr_17 [i_5 + 2] [i_5 + 2] [12]) ? (arr_0 [i_5 - 3]) : (arr_17 [i_0] [i_0] [i_0]))))));
                    }
                }
            }
        }
        arr_26 [i_0] = ((!2147483640) ? ((((arr_24 [i_0] [0]) ? ((var_10 >> (((arr_0 [i_0]) - 188622387)))) : (arr_8 [i_0] [i_0] [i_0])))) : (min((min(8852269525465162654, (arr_22 [1]))), (arr_18 [i_0]))));

        for (int i_8 = 4; i_8 < 11;i_8 += 1)
        {

            /* vectorizable */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                arr_32 [i_0] [i_0] [i_0] &= (arr_19 [i_8] [i_8 + 2] [i_9]);

                for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                {
                    arr_36 [i_10] [i_8] [i_8] [i_0] = arr_7 [i_9] [i_9];
                    var_24 ^= (((arr_34 [i_8 - 4] [i_8 - 4] [i_8 - 1] [i_8 - 4] [1] [i_8 - 4]) >= (((arr_19 [i_8] [i_8] [i_8]) ? 1624051811 : var_14))));
                    arr_37 [11] [0] [4] [12] = (((((arr_20 [i_0] [i_0] [i_0] [i_10]) ? var_14 : (arr_35 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? -1046154439 : ((-(arr_7 [i_0] [i_8]))));
                }
                for (int i_11 = 0; i_11 < 13;i_11 += 1) /* same iter space */
                {
                    arr_40 [3] [i_0] [i_0] [i_0] = var_11;
                    arr_41 [12] [i_8] [i_8] [0] [i_9] [9] = (arr_38 [i_11] [i_8 - 3] [i_8 - 3] [i_0]);
                    arr_42 [i_9] = ((!(((250836246 ? (arr_31 [9] [9] [i_9]) : (arr_39 [i_8] [i_8]))))));
                    var_25 &= (arr_24 [i_0] [i_8 - 2]);
                }
                for (int i_12 = 0; i_12 < 13;i_12 += 1) /* same iter space */
                {
                    var_26 = 2089685185;
                    arr_46 [i_9] [i_9] = (arr_31 [i_8 - 3] [i_8] [i_9]);
                    arr_47 [i_0] [1] [i_9] &= ((arr_10 [i_0] [i_8 + 1] [i_8 - 4] [i_8 + 2] [i_8 - 4] [i_8 + 2]) <= (arr_10 [i_0] [3] [4] [i_8 - 4] [i_8 - 1] [i_9]));
                }
            }
            arr_48 [i_0] [i_8] [i_0] = (arr_20 [i_8 - 1] [i_0] [i_0] [i_0]);
            var_27 = arr_11 [i_8 - 2] [1] [i_0] [i_0] [i_0] [12];
        }
        var_28 += (arr_28 [i_0] [i_0] [i_0]);
    }
    var_29 = var_6;
    #pragma endscop
}
