/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79382
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, var_4));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                arr_8 [i_0] = (arr_4 [i_2 + 1] [i_2 + 1] [i_2]);
                var_13 = (arr_6 [0] [i_2 + 2] [i_2 + 2]);
            }
            for (int i_3 = 1; i_3 < 8;i_3 += 1)
            {
                var_14 = (arr_9 [i_0] [i_0] [i_3 + 1]);

                for (int i_4 = 2; i_4 < 8;i_4 += 1)
                {
                    arr_13 [i_0] [i_0] [i_1] [i_3 + 3] [i_0] [i_4] = arr_12 [i_0] [8] [i_1] [i_1] [i_3] [i_4];
                    var_15 = (arr_9 [i_1] [i_0] [i_3 + 1]);
                    arr_14 [i_0] [i_0] [i_4] &= (arr_3 [i_3 - 1]);
                    var_16 = (arr_7 [i_0] [i_1]);
                }
                var_17 = (arr_3 [i_0]);
            }
            for (int i_5 = 1; i_5 < 8;i_5 += 1)
            {
                arr_18 [i_0] = (arr_9 [i_5 - 1] [i_0] [i_5 + 3]);
                arr_19 [i_0] = (arr_1 [i_0]);
            }
            arr_20 [i_0] [i_0] [i_0] = (arr_4 [i_0] [i_1] [i_1]);
            var_18 += (arr_9 [i_0] [10] [10]);
        }
        for (int i_6 = 1; i_6 < 8;i_6 += 1)
        {
            var_19 = arr_6 [i_0] [i_0] [i_6 + 2];
            var_20 = (min(var_20, (arr_5 [i_6 + 2])));
            arr_23 [i_0] = arr_4 [i_6 + 2] [i_6 + 1] [i_6 - 1];
            var_21 -= (arr_21 [i_0] [i_6]);
        }

        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            var_22 = arr_16 [i_0] [i_7] [i_0];
            arr_26 [i_0] = arr_21 [i_0] [i_7];
            var_23 += arr_24 [i_7];
            var_24 = (arr_2 [i_0]);
        }
        for (int i_8 = 0; i_8 < 11;i_8 += 1)
        {
            var_25 = arr_15 [i_0];
            var_26 |= (arr_0 [i_8]);
        }
    }
    for (int i_9 = 2; i_9 < 11;i_9 += 1)
    {
        var_27 = (arr_31 [i_9 - 2] [i_9 - 2]);
        var_28 = (arr_31 [i_9] [i_9 + 1]);
        var_29 = (arr_32 [i_9 + 1]);
    }
    var_30 = var_6;
    var_31 += var_0;
    #pragma endscop
}
