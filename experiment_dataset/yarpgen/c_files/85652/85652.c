/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = 0;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
        {
            var_14 |= ((0 - (arr_4 [1] [i_1 + 1] [1])));

            for (int i_2 = 0; i_2 < 12;i_2 += 1) /* same iter space */
            {
                var_15 += (arr_4 [i_1 + 1] [i_1 + 1] [4]);
                var_16 = 12920;
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
            {
                var_17 ^= ((~(arr_7 [i_1 + 1] [i_1 + 1])));
                arr_10 [i_0] [7] [i_0] [i_3] = ((~(((arr_9 [i_3]) + var_12))));
                var_18 = (var_12 ? var_13 : (arr_8 [11] [i_1 + 1] [i_1 + 1] [i_1 + 1]));
            }
            arr_11 [i_0] [i_0] [i_0] = (!var_7);
            var_19 = ((!(14 >= 42475)));
        }
        for (int i_4 = 0; i_4 < 0;i_4 += 1) /* same iter space */
        {
            arr_16 [i_0] [i_0] = min(((-(arr_13 [i_4 + 1] [i_4 + 1]))), 12891);
            arr_17 [i_0] [i_4] = 22;
        }
        for (int i_5 = 0; i_5 < 0;i_5 += 1) /* same iter space */
        {
            var_20 ^= ((var_1 ? (((-((-(arr_19 [i_0] [4] [i_5])))))) : var_6));
            var_21 = (((((!42454) * var_5)) | (arr_13 [i_5 + 1] [i_0])));
        }
        var_22 = (max(var_22, ((((~(arr_19 [i_0] [i_0] [4])))))));
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_24 [i_6] = (((!var_6) ? (((!(~var_10)))) : (~var_0)));
        arr_25 [i_6] [i_6] = (~(((arr_22 [i_6] [i_6]) ? (arr_22 [i_6] [i_6]) : (arr_22 [i_6] [i_6]))));
    }
    var_23 |= (min((((~var_12) ? var_11 : var_4)), (((((0 ? var_13 : var_7)) <= var_5)))));
    var_24 = (min(var_24, ((min(var_11, (max((max(-1057008100, var_5)), var_13)))))));
    var_25 = ((((min(((max(var_0, var_5))), var_2))) ? (var_1 * var_0) : (max(((1056270180 ? 41160 : var_2)), var_4))));
    #pragma endscop
}
