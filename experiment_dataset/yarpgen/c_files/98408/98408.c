/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (arr_6 [i_1] [i_1] [14] [i_2]);
                    arr_10 [i_0] [i_1] = (!-4);
                    var_16 = (arr_3 [i_0]);
                }
            }
        }
    }

    for (int i_3 = 1; i_3 < 17;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
        {
            arr_17 [i_4] [i_4] [12] = ((!((min((~var_7), ((39 / (arr_8 [i_3] [13]))))))));
            arr_18 [i_4] = ((!(18446744073709551615 < var_2)));
            arr_19 [i_3] [i_4] [i_3 - 1] = (arr_1 [i_4]);
            var_17 = (max((((arr_4 [i_4 - 1] [i_4 - 1]) ? -var_11 : ((-(arr_11 [i_3]))))), 4096));
            arr_20 [i_4] = (((((~var_13) ? 0 : 3640469593133521263)) >> (-962672519 + 962672569)));
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
        {

            for (int i_6 = 1; i_6 < 16;i_6 += 1)
            {
                var_18 = (!(arr_1 [i_5 - 1]));
                var_19 = (((arr_26 [i_5] [i_5] [13] [i_5]) / -3640469593133521263));
                arr_27 [i_3] [i_3] [i_5] [i_6] = ((~(arr_22 [i_3 - 1] [i_3 + 1] [i_5 - 1])));
                var_20 = 5;
                arr_28 [0] [i_5] = ((((arr_14 [i_3]) ? 1 : 317100560612650452)) * (!0));
            }
            for (int i_7 = 2; i_7 < 15;i_7 += 1)
            {
                arr_32 [i_5] [i_5] = (((arr_29 [i_5 - 1] [i_5]) ? (arr_29 [i_5] [i_5]) : (arr_29 [i_5] [i_5])));
                var_21 = (min(var_21, ((18446744073709551610 ? (((7 < (arr_11 [17])))) : ((var_0 ? var_13 : (arr_31 [i_3] [i_3] [i_3] [i_7])))))));
            }
            arr_33 [6] [i_5] [i_5] = (arr_15 [17] [i_5 - 1] [i_5]);
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
        {
            var_22 = (min((min((((arr_31 [i_3] [i_3] [16] [i_8]) ? var_9 : var_6)), (arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1]))), (max(-27215, 35184369991680))));
            arr_36 [i_8] = ((~((max((min((arr_29 [i_3] [i_8]), 21584)), (arr_6 [i_8 - 1] [i_8] [i_3] [i_3 - 1]))))));
            var_23 = (((((arr_15 [i_3] [4] [i_8]) ? -79 : 31))) != ((834241199 * (((var_14 != (arr_2 [i_3])))))));
            arr_37 [i_8] = 638289082;
            var_24 = (max((arr_9 [i_3]), ((((max(249, (arr_0 [i_3 + 1])))) ? ((((arr_11 [i_3]) < var_12))) : (~16320)))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 18;i_9 += 1)
        {

            for (int i_10 = 0; i_10 < 18;i_10 += 1)
            {

                for (int i_11 = 0; i_11 < 18;i_11 += 1)
                {
                    arr_49 [i_10] [i_10] [8] [3] [i_10] = (arr_29 [i_3 + 1] [14]);
                    var_25 = ((-636270518 ? (arr_38 [i_3] [i_3 + 1] [i_3]) : (arr_38 [6] [i_3 + 1] [i_10])));
                    arr_50 [i_3] = ((((~(arr_46 [i_3] [i_3] [1] [i_10] [i_10]))) - (arr_0 [i_3 + 1])));
                    arr_51 [i_3] [i_10] [i_11] = (((arr_8 [i_3] [i_3 - 1]) + (arr_31 [i_3] [i_3 - 1] [i_3 - 1] [i_3])));
                }
                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_55 [i_3] [i_9] [7] [1] [1] = 37030;
                    var_26 = (max(var_26, (((~(arr_3 [i_3]))))));
                    arr_56 [i_3] [i_3] [2] = (((((7 ? -1 : 11))) % (arr_11 [i_3 + 1])));
                }
                var_27 = (min(var_27, (arr_34 [i_3 + 1] [i_3 - 1] [12])));
                arr_57 [i_3] [i_3] [i_3] [1] = ((-(((arr_30 [16] [i_9]) ? 4127839965739046631 : (arr_44 [i_3] [i_9] [i_10])))));
                var_28 = (-16344 != 253);
            }
            arr_58 [i_3 + 1] [10] [10] = (arr_24 [i_3] [i_3 - 1]);
        }
        var_29 &= ((-(max(var_8, (arr_13 [i_3 + 1])))));
    }
    var_30 = (min(((~(max(3491560356, var_14)))), var_8));
    #pragma endscop
}
