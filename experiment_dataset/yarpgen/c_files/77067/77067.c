/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_16 -= (arr_5 [i_1] [i_1] [i_0]);
            var_17 = ((((((104 / (arr_5 [i_1] [i_0] [i_0]))))) || -59));
            arr_6 [i_0] = (var_8 < var_8);
            var_18 *= 67;
            var_19 &= (arr_4 [i_1] [i_1]);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_9 [i_0] [i_0] = (~239);
            arr_10 [i_0] [i_2] [i_0] = (arr_7 [i_0] [i_2] [i_0]);
            var_20 = (max(var_20, var_5));
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            var_21 = (arr_12 [i_0] [i_3] [i_3]);
            var_22 = (arr_5 [i_0] [i_3] [i_3]);
        }
        arr_15 [i_0] = 42;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20;i_4 += 1)
    {

        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 20;i_6 += 1)
            {
                var_23 = (min(var_23, ((((arr_7 [i_6] [i_5 + 1] [i_4]) ? (arr_7 [i_6] [i_5 + 1] [i_6]) : (arr_7 [i_6] [i_5 - 1] [i_6]))))));
                arr_23 [i_4] [i_4] [i_4] = (((arr_17 [i_4] [i_6]) <= (arr_14 [i_4] [i_5] [i_6])));
                var_24 = (min(var_24, ((((arr_12 [i_5 - 1] [i_5 - 1] [i_5 - 1]) ^ (arr_12 [i_5 - 1] [i_5 - 1] [i_5]))))));
                var_25 -= (!var_4);
            }
            arr_24 [i_4] [i_4] = ((!((var_14 > (arr_16 [i_5])))));
            arr_25 [i_5 + 1] [i_4] [i_4] &= (((arr_0 [i_5 + 1] [i_5 + 1]) / (arr_0 [i_5 + 1] [i_5 + 1])));
            arr_26 [i_4] [i_4] |= (arr_17 [i_5 - 1] [i_5]);
        }
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            arr_31 [i_7] = (arr_29 [i_7] [i_7] [i_4]);
            var_26 &= (~-917109308);
            arr_32 [i_4] [i_4] |= (((arr_22 [i_4] [i_7]) >> (((~var_11) - 1893214123))));
        }
        arr_33 [i_4] |= (((arr_8 [i_4] [i_4]) >= (arr_8 [i_4] [i_4])));
        arr_34 [i_4] [i_4] = ((var_14 ? 67 : ((var_5 ? (arr_4 [i_4] [i_4]) : var_1))));
    }
    for (int i_8 = 1; i_8 < 23;i_8 += 1)
    {
        arr_38 [i_8] = (((59 & (arr_37 [i_8 - 1]))));
        var_27 = (min(var_27, ((max(3623759394, 165)))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_28 = (!931686652692012368);
        arr_41 [i_9] = ((var_3 ? var_3 : (var_4 - var_10)));
        arr_42 [i_9] |= (arr_35 [i_9]);
        arr_43 [i_9] = (arr_39 [i_9]);
    }
    #pragma endscop
}
