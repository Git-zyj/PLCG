/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_9 % ((((var_4 ? var_1 : 118)) | (var_9 && 0)))));
    var_12 = (((((((((0 ? 28116 : 11))) ? var_7 : ((var_6 ? -32763 : 127)))) + 2147483647)) >> (var_1 - 12586294197536489092)));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_13 *= ((!((((arr_1 [i_0] [i_0]) ? 127 : var_8)))));

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            arr_4 [i_0] [i_1] [i_1] = (((((0 ? -120 : 2993287188200181615))) || 0));

            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                arr_7 [i_1] [i_2] [2] = (((-(127 < var_8))) < (arr_3 [i_0]));
                var_14 = ((-(arr_3 [i_1])));
            }
            arr_8 [i_0] |= (((-3338182403575884580 + 9223372036854775807) >> ((((arr_0 [i_1]) > 126)))));
        }

        /* vectorizable */
        for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
        {
            arr_11 [i_3] [i_3] = (((arr_0 [i_0]) ? (arr_0 [i_3]) : 56));
            arr_12 [0] [i_3] = ((95 / (arr_10 [i_3])));
            var_15 = (min(var_15, ((((arr_9 [i_0] [i_0]) << (((arr_9 [i_0] [i_0]) - 11426)))))));
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_16 [6] [6] = (((arr_1 [i_0] [i_0]) * (28116 - 1)));
            arr_17 [i_0] [i_4] [i_4] = ((min((arr_14 [i_0] [i_0]), var_4)));
        }
    }
    for (int i_5 = 0; i_5 < 15;i_5 += 1) /* same iter space */
    {
        var_16 -= (arr_3 [1]);
        arr_20 [i_5] [i_5] = ((((((arr_19 [i_5]) ? -42 : ((18 ? 1 : 63))))) ? ((((~(arr_6 [i_5] [i_5] [6]))) - ((1 ? -18 : (arr_10 [i_5]))))) : ((~(arr_14 [i_5] [i_5])))));
        arr_21 [1] [i_5] = var_8;
    }
    var_17 = -6774967330887203991;
    #pragma endscop
}
