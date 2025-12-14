/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61378
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61378 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61378
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_11 = (((arr_7 [i_0 + 1] [i_0 + 1]) ? (arr_0 [20] [20]) : (~0)));
            var_12 = ((~(14261018135198365061 / var_8)));
        }
        for (int i_2 = 3; i_2 < 24;i_2 += 1)
        {
            arr_10 [i_0] [i_2] = (var_6 ? 61020 : (arr_3 [i_0 - 1]));
            arr_11 [i_0] [i_2 + 1] [i_0] = ((-101 ? 17 : 118));
        }
        var_13 = (min(var_13, ((((arr_6 [i_0 + 1] [9]) < (((((arr_9 [i_0 + 1] [22] [22]) < 1048575)))))))));

        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_15 [i_0] = (((arr_4 [i_0 - 1] [i_3 - 1]) == (arr_6 [i_0 + 1] [i_3 + 3])));
            arr_16 [i_0] [i_0] = (((arr_1 [i_3 + 2] [i_0 + 1]) >= (arr_5 [i_0 + 1])));
            arr_17 [i_0] = ((~(arr_3 [i_3])));
            arr_18 [i_0] [i_0] [i_0] = (arr_6 [i_3] [i_3 + 3]);
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            arr_27 [i_4] [8] [i_4] = var_9;
            var_14 = ((((4148877726423012666 ? 720346440 : 2923920970))) ? 4185725938511186538 : (((var_8 ? 5443 : var_2))));
        }
        arr_28 [i_4] = (((arr_22 [i_4]) % (arr_0 [i_4] [i_4])));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 24;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            {
                var_15 = (((3377 <= 830215473) - 65535));
                arr_33 [i_6] [i_6] = (((max(var_6, (arr_30 [i_6])))));
            }
        }
    }
    #pragma endscop
}
