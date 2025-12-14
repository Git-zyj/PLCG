/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76269
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76269 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76269
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((max(var_12, ((var_11 ? var_2 : var_9))))) ? -var_5 : (((((max(var_11, var_11))) ? (-24724 - 1425743676) : var_14))));
    var_21 = var_3;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] [1] = arr_2 [i_0];

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (min(((((((arr_4 [i_0] [i_0] [i_0]) ? 78 : (arr_2 [i_0])))) ? (((var_18 && (arr_2 [i_1])))) : (min(18432, (arr_4 [i_1] [i_0] [i_0]))))), (arr_5 [i_0] [i_0])));
            var_22 = ((((((((arr_0 [i_0] [i_1]) && 193)) ? (arr_5 [i_1] [i_0]) : (arr_1 [i_1])))) ? (arr_1 [i_0]) : ((((arr_1 [i_0 - 1]) ? (((arr_1 [i_0]) ? var_19 : 224)) : ((1 ? 13091 : -1223196291)))))));
            var_23 = (min(var_23, var_19));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            var_24 = 2147483647;
            var_25 = (max(var_25, (arr_7 [i_2 + 1])));
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {

            for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
            {
                var_26 = (min(var_26, (arr_2 [i_4])));

                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    arr_19 [i_0] [i_0] [i_4] [i_5] [i_0] [i_0] = (((arr_7 [i_0 + 1]) ? (arr_7 [i_0 + 2]) : (arr_9 [i_0 - 1] [i_0 + 1])));
                    var_27 = (arr_8 [i_0] [i_0] [i_0]);
                    arr_20 [i_5] [12] [i_4] [5] [5] = (arr_12 [i_0] [i_3] [i_4 + 2]);
                    var_28 = (arr_18 [i_5] [i_4] [i_0] [15] [i_0] [i_0]);
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_29 = (max(var_29, (arr_12 [i_0 + 2] [i_4 + 2] [i_4 + 1])));
                        arr_25 [i_4] [i_6] [i_6] [12] [i_4] [i_4] [i_4] = 1;
                        arr_26 [i_4] = (((arr_18 [16] [i_3] [i_3] [i_3] [i_3] [i_3]) ? (arr_21 [i_0 + 1] [i_0 + 2] [i_4] [i_0 - 1] [i_0 + 1]) : (arr_0 [i_0] [i_0])));
                        arr_27 [i_4] [i_4] = ((var_13 && (arr_11 [i_0] [i_6] [i_7])));
                    }
                    arr_28 [i_0] [i_4] [i_6] [i_4] = arr_7 [i_3];
                }
            }
            for (int i_8 = 1; i_8 < 16;i_8 += 1) /* same iter space */
            {
                arr_33 [i_0] [i_0] [i_8] = (arr_5 [i_3] [i_3]);
                arr_34 [i_8] [i_8] [i_8] = arr_23 [i_0] [i_0] [i_0] [1] [i_0];
            }
            var_30 = (arr_24 [i_0] [i_3] [i_3] [6] [i_3]);
            arr_35 [i_3] = arr_12 [i_3] [i_3] [i_3];
        }
        var_31 = (max(var_31, ((224 ? 18432 : ((max(-24724, 18432)))))));
    }
    #pragma endscop
}
