/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 *= -1;

    for (int i_0 = 1; i_0 < 11;i_0 += 1) /* same iter space */
    {
        arr_4 [2] &= ((((((var_3 ? -126 : var_11)) | var_11))));
        arr_5 [i_0] [i_0] = (!-14348);
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_13 = (-8188826491312350666 ? 0 : (arr_8 [i_1 + 1] [i_2]));

            for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
            {
                var_14 = var_3;
                arr_13 [i_1 + 3] [i_1] [i_3] = var_0;
            }
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {
                var_15 = (var_4 ^ var_9);
                var_16 = (11943454492623423218 ? 2982152344 : (~6503289581086128398));
                var_17 ^= (var_7 <= var_11);
            }
        }
        arr_17 [i_1] = (((~-1) ? 11943454492623423233 : var_4));
        var_18 = (max(var_18, (((+((((arr_6 [0] [0]) || 6503289581086128423))))))));
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 11;i_5 += 1) /* same iter space */
    {
        var_19 = (i_5 % 2 == zero) ? ((((arr_11 [i_5] [i_5] [i_5 + 2] [i_5 + 1]) >> ((-12338 ? var_8 : -10079))))) : ((((((arr_11 [i_5] [i_5] [i_5 + 2] [i_5 + 1]) + 9223372036854775807)) >> ((-12338 ? var_8 : -10079)))));
        arr_20 [i_5] = -101;
        var_20 = (((((11943454492623423218 ? (arr_15 [i_5 + 2] [3] [3] [i_5]) : (arr_3 [8])))) && ((((arr_10 [i_5 + 3] [i_5]) ? (-9223372036854775807 - 1) : 32749)))));
    }
    var_21 = ((((max((var_2 / var_11), var_0))) && (((-8188826491312350666 ? var_1 : ((var_7 ? var_7 : var_6)))))));
    var_22 = var_6;
    #pragma endscop
}
