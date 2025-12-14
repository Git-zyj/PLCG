/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_6 ? (14388 + -115) : -var_10));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_21 = (max(var_21, 1));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_9 [1] [i_0] [1] = 8;
                arr_10 [i_0] [i_0] [i_2] = ((((var_12 >= (arr_6 [i_0] [i_1] [i_0] [i_0]))) ? 1713922379 : var_2));
                arr_11 [i_0] [i_1] [i_0] [i_0] = ((255 ? (arr_0 [i_0]) : 1));
                var_22 = (min(var_22, ((((arr_1 [i_1]) >= 1)))));
            }
            var_23 -= ((var_16 > (!var_18)));
        }
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            arr_14 [10] [i_3] [i_0] = -8;
            var_24 ^= (((arr_2 [i_3 - 1] [i_3 + 1]) >= 0));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {
                        var_25 *= (1713922379 / 18);
                        var_26 = (((arr_2 [i_0] [i_0]) >= (arr_2 [i_0] [i_6])));
                    }
                }
            }
            var_27 = (max(var_27, -65528));
            arr_23 [i_0] [i_4] [i_0] = ((((arr_16 [i_0] [i_4]) == 21)));
        }
        var_28 += ((((25 ? 1713922370 : -4120)) / -1713922390));
        arr_24 [i_0] [i_0] = (((-9223372036854775807 - 1) ? -4951805374784936470 : (arr_6 [i_0] [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        arr_28 [i_7] = (((arr_4 [i_7]) >> (((arr_7 [i_7 - 2] [i_7 - 1] [i_7 + 1]) - 156))));
        arr_29 [i_7] = ((((~(arr_13 [i_7]))) | ((var_7 ? 4294967276 : 3153577908))));
    }
    var_29 = var_12;
    #pragma endscop
}
