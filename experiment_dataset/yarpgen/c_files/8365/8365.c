/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_14 = (max(var_14, (1 == 1)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [17] [i_1] = (arr_0 [i_2]);
                    var_15 = ((var_2 ? var_7 : (((((~(arr_5 [8] [8] [i_2] [i_1])))) ? 1 : (2135046548560385592 ^ var_9)))));
                }
            }
        }
        arr_8 [6] = ((-(arr_2 [i_0] [6])));
    }

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_16 = var_13;
        var_17 ^= 4318599961982776235;
        var_18 = (-65 == 3581362614049220326);
    }
    for (int i_4 = 1; i_4 < 14;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 17;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                var_19 = (arr_17 [i_4] [i_5] [i_5]);
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        {
                            var_20 = (arr_4 [17] [i_4]);
                            var_21 -= ((((((arr_18 [i_7 + 1]) * var_4))) ? 15613163471306883463 : ((((!(arr_18 [i_7 + 1])))))));
                        }
                    }
                }
                var_22 |= (~14865381459660331305);
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 17;i_10 += 1)
                    {
                        {
                            var_23 = ((+(((!(((arr_1 [i_5]) || (arr_14 [i_10]))))))));
                            arr_33 [i_4 - 1] [i_5] [i_6] [i_9] [i_5] = (((min(-9223372036854775803, 0)) <= ((((arr_17 [i_4] [i_4 + 2] [i_5]) | var_8)))));
                        }
                    }
                }
                arr_34 [i_5] [i_5] [i_6] [i_6] = var_8;
            }
            var_24 = var_12;
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            arr_37 [i_11] [i_11] [i_11] = ((((!(arr_22 [i_4] [i_4] [i_4 - 1] [i_4]))) ? (~3581362614049220331) : ((((-32767 - 1) ? (!var_5) : (arr_17 [5] [i_11] [i_11]))))));
            arr_38 [i_11] = ((!(((~(arr_29 [i_4 - 1]))))));
        }
        /* LoopNest 3 */
        for (int i_12 = 0; i_12 < 17;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 15;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 1;i_14 += 1)
                {
                    {
                        arr_48 [i_13] [i_13 + 2] [i_12] [i_12] [i_4] [i_4] = 13495669102209376884;
                        var_25 ^= (min(14865381459660331270, (((7122284472146255156 * (!-12206))))));
                        var_26 = (max((((((((arr_45 [i_4] [i_12] [i_13] [i_14]) ? 128 : var_9))) ? -32575 : (arr_22 [i_14] [i_14] [11] [i_14])))), (arr_36 [i_4] [i_13] [4])));
                    }
                }
            }
        }
        var_27 = 62253;
    }
    /* vectorizable */
    for (int i_15 = 2; i_15 < 16;i_15 += 1)
    {
        arr_52 [1] = (((!1) ? -var_3 : ((var_8 ? var_3 : var_0))));
        var_28 = (max(var_28, (((var_13 ? (arr_4 [i_15 + 1] [i_15 - 1]) : 213)))));
    }
    var_29 = var_8;
    /* LoopNest 2 */
    for (int i_16 = 0; i_16 < 14;i_16 += 1)
    {
        for (int i_17 = 0; i_17 < 14;i_17 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_18 = 0; i_18 < 14;i_18 += 1)
                {
                    for (int i_19 = 0; i_19 < 1;i_19 += 1)
                    {
                        {
                            arr_65 [4] [i_17] [i_18] [i_17] = ((((min((arr_41 [i_17]), (arr_19 [i_18])))) ? (arr_24 [i_16] [i_17] [i_18] [i_19]) : 1));
                            arr_66 [i_17] [i_17] [i_17] [i_17] = ((-21574 == ((((max(126, (-32767 - 1)))) ? (min(32640, (arr_14 [i_19]))) : (arr_46 [i_17])))));
                            arr_67 [i_17] [i_17] = (-21574 ^ var_6);
                            arr_68 [i_16] [i_17] [i_18] [i_18] = ((-((((arr_59 [i_17] [i_18]) > var_3)))));
                        }
                    }
                }
                arr_69 [i_16] [i_17] [i_17] = (max((arr_14 [i_16]), (arr_14 [i_17])));
            }
        }
    }
    #pragma endscop
}
