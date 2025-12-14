/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= (((max(var_10, var_10)) ? var_6 : var_3));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 |= ((var_3 ? ((min((arr_2 [i_0] [i_0]), (max(18696, 46865))))) : var_1));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            var_13 = 32767;
            arr_5 [i_0] [22] [i_1] = (min((min(((var_8 ? var_4 : (-9223372036854775807 - 1))), -29816)), var_8));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] [i_2] = ((10 ? (arr_8 [i_0] [i_1]) : var_2));
                var_14 = var_6;
                var_15 = (((((((arr_1 [i_0]) * var_10)))) ? ((min(3, (arr_2 [i_0] [i_0])))) : var_4));
            }
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_17 [i_0] [i_1] [14] [14] [i_3] [i_5] = (((((-32767 - 1) ? 10166689648655960265 : 1)) ^ var_10));
                            arr_18 [i_3] [i_1] [i_1] [i_3] [i_1] [i_5 - 2] = (arr_10 [i_0] [i_0] [13] [i_5]);
                            var_16 = ((-21048 ? -9004310914696069614 : 1944636502));
                        }
                    }
                }
            }
            arr_19 [i_0] = (50 ? 3619199641 : (arr_13 [i_0] [i_0] [i_0] [4] [i_1]));
        }
    }
    /* vectorizable */
    for (int i_6 = 1; i_6 < 15;i_6 += 1)
    {
        arr_22 [i_6] [i_6] = (((arr_14 [i_6] [i_6] [i_6] [i_6 + 4]) | (arr_16 [i_6])));
        var_17 *= (arr_3 [i_6 + 3] [i_6 + 1]);
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 2; i_8 < 11;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 13;i_9 += 1)
            {
                {
                    arr_31 [i_8] [i_9] = (((((-(~var_0)))) ? (((max(-60, 18696)))) : ((var_6 % (arr_10 [i_8] [i_8] [i_8 - 1] [i_8])))));
                    arr_32 [i_7] [i_8 + 2] [i_8] = (-4426063891038651062 ? 2147483647 : -7710);
                    arr_33 [i_8] = var_9;
                    var_18 = ((((((arr_26 [i_8]) ? var_10 : (arr_26 [i_8])))) ? -9223372036854775788 : ((((arr_26 [i_8]) ? (arr_26 [i_8]) : (arr_26 [i_8]))))));
                    arr_34 [i_8] [5] [7] = ((~(arr_27 [i_8 + 3] [i_8] [i_8] [i_8 + 2])));
                }
            }
        }
    }
    var_19 = var_6;
    var_20 += ((var_2 ? ((var_2 ? var_3 : (((var_9 ? var_1 : var_10))))) : var_6));
    #pragma endscop
}
