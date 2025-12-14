/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 *= var_9;
    var_20 = 177;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_4 [10] [i_0] = (arr_1 [i_0]);
        arr_5 [i_0] [i_0] = (var_16 || var_6);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_21 = (min(var_21, ((((arr_7 [i_1]) * var_13)))));

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_22 *= (arr_9 [i_1] [i_1] [i_2]);
            arr_11 [13] [i_2] [i_1] = ((var_11 ? ((1029 ? (arr_7 [i_2]) : 140737488347136)) : (arr_7 [i_1])));
            var_23 = (!3014691467);
        }
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_15 [i_1] [i_3] = ((3014691467 | (arr_10 [i_3 - 1] [i_3 + 1] [i_3 - 1])));
            var_24 = (((arr_10 [i_1] [i_3 - 1] [i_1]) >= (arr_6 [i_3] [i_3 + 1])));
            var_25 = (22125 + -33);
            var_26 = (arr_14 [i_3 + 1] [i_3 - 1]);
            arr_16 [i_1] = -var_6;
        }
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            arr_20 [i_4] [i_1] = ((+((85 ? (arr_8 [i_1]) : 1280275845))));
            arr_21 [i_1] [i_4] [i_4] = 78;
        }
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            var_27 = (min(var_27, 32767));
            arr_26 [i_1] = ((((11426023459085892398 ? var_14 : (arr_12 [i_1]))) <= 178));

            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_28 = ((!(((-(arr_13 [i_5] [i_6]))))));
                var_29 = (~(~var_7));
            }
        }
        var_30 = (min(var_30, 2147483647));
        arr_29 [i_1] = ((-32761 ? var_4 : 16));
    }
    #pragma endscop
}
