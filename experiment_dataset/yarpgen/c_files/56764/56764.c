/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56764
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 |= (((var_10 - var_12) / ((((((-10010 ? 10009 : 112))) ? 144 : (-9223372036854775807 - 1))))));
    var_17 = (~var_6);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_18 ^= (min(-1823252644, 193));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 19;i_3 += 1)
                {
                    {
                        var_19 ^= max(var_14, ((max((arr_4 [i_0] [i_1] [14] [i_3 - 2]), (arr_4 [10] [i_1] [20] [4])))));
                        arr_8 [i_0] [i_1] [i_0] [0] [12] = 11374149872013763808;
                        arr_9 [i_0] = ((((((1823252643 & var_1) ? 26 : 131))) * var_10));
                    }
                }
            }
        }
        var_20 *= 0;
    }
    for (int i_4 = 2; i_4 < 10;i_4 += 1)
    {
        var_21 ^= (min((((arr_13 [7]) ? -680048705240840082 : -2590027365307517893)), (((-(arr_3 [i_4 - 2] [i_4 - 1] [i_4]))))));
        var_22 = (min(var_22, (((((max(124, 1823252621))) ? (arr_2 [i_4 - 2]) : 1)))));
        var_23 *= var_2;
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 10;i_6 += 1)
            {
                {
                    var_24 = ((arr_14 [i_4 - 1] [i_6 - 1]) ? ((-10010 ? var_3 : (arr_14 [i_4 + 1] [i_6 + 1]))) : (2903649333 || var_2));
                    arr_18 [4] [i_4 - 1] [6] [i_5] = -2;
                    arr_19 [i_4 + 1] [9] [i_5] [i_4 - 2] = ((var_1 ? var_4 : (max(4, (((arr_10 [5]) ? var_15 : -9783))))));
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 20;i_7 += 1)
    {
        var_25 = (((arr_20 [i_7 + 2] [i_7 - 1]) / 3564948835));
        arr_22 [12] [i_7 + 2] = (-8662 && 0);
        var_26 = (10010 & var_15);
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 18;i_8 += 1)
    {

        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            var_27 = (min(var_27, (!218)));
            var_28 = ((var_4 - (arr_28 [i_8 + 2] [1])));

            for (int i_10 = 0; i_10 < 21;i_10 += 1)
            {
                var_29 -= ((~(arr_27 [i_9] [i_9] [i_9])));
                arr_33 [19] = ((var_4 ? 255 : (arr_2 [i_8 - 1])));
            }
        }
        arr_34 [i_8 - 1] = var_11;
        var_30 = ((-10010 ? (arr_4 [i_8 - 2] [i_8 - 1] [i_8] [i_8 - 1]) : var_6));
    }
    #pragma endscop
}
