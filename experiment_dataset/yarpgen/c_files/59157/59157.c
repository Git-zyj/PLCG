/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -var_16;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_0] = (arr_6 [i_0]);
                        var_18 = (max(var_18, (arr_0 [i_0])));
                        arr_12 [i_0] [i_0] [i_0] [i_0] = var_11;
                    }
                }
            }
        }
        var_19 = var_3;
        arr_13 [i_0] [i_0] = var_11;

        for (int i_4 = 1; i_4 < 12;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {
                        var_20 = ((arr_5 [i_0] [i_6] [i_6]) ? (arr_2 [i_0] [i_0]) : (arr_5 [i_0] [i_0] [i_0]));
                        arr_20 [i_4] [i_4 - 1] [i_5] [i_5] [i_6] = (var_12 ? (!15) : (~224));
                    }
                }
            }
            var_21 = ((122 ? 1 : (arr_15 [i_4] [i_4])));
            var_22 -= (arr_14 [i_0] [i_0] [i_0]);
            var_23 *= (arr_3 [i_4 + 1]);
        }
    }
    for (int i_7 = 4; i_7 < 17;i_7 += 1)
    {
        arr_23 [i_7 - 1] = var_4;

        for (int i_8 = 1; i_8 < 16;i_8 += 1)
        {
            var_24 = (min(var_24, (((-(((arr_24 [i_7 - 4]) & ((~(arr_21 [i_8 + 1]))))))))));
            var_25 = var_9;

            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                arr_30 [i_8] [i_8] = arr_22 [i_9] [i_7 - 1];
                var_26 *= (min((arr_21 [i_8 + 1]), ((((max((arr_21 [i_7]), (arr_22 [i_8 + 3] [i_7 - 1]))) != (arr_28 [i_8 - 1] [i_8 + 1] [i_7 + 1] [i_7 - 1]))))));
                var_27 = (arr_29 [i_7 + 2] [i_7 + 2]);
                var_28 = (min(var_2, ((((-127 - 1) > 4294967295)))));
                var_29 = (((((0 ? var_15 : (arr_24 [i_7 - 3])))) ? ((~(arr_28 [i_7 - 1] [i_7 - 4] [i_7 - 1] [i_8 + 1]))) : (arr_27 [i_8] [i_8] [i_8] [i_8])));
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_30 = (min(var_30, 1));
                var_31 = (-18446744073709551615 ? (arr_28 [i_7] [i_8] [i_8 + 1] [i_10]) : (arr_29 [i_7] [i_7 - 2]));
            }
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                var_32 = 11;
                var_33 -= (arr_27 [i_7 - 2] [i_7 - 3] [i_7 - 2] [i_7 - 2]);
            }
            arr_35 [i_7 - 2] [i_8] [i_8] = ((~((max(var_12, (min(-65, var_9)))))));
        }
    }
    #pragma endscop
}
