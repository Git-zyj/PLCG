/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        var_10 = (max(var_10, ((((arr_0 [4]) ? (((arr_1 [1]) ? ((-3664266329236303811 | (arr_0 [6]))) : (arr_1 [1]))) : (arr_0 [6]))))));
        var_11 ^= (arr_1 [2]);

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_6 [i_0] [5] = ((((-(arr_4 [i_0] [i_0 - 1] [i_1] [i_1])))));
                arr_7 [i_0 - 1] [i_0] = (((-((-1562366946032259708 ? var_1 : (arr_3 [i_2] [i_1] [1]))))));
                arr_8 [i_0] [i_0] [i_0] [i_2] = (arr_1 [i_0]);
            }
            arr_9 [i_0] [i_0] = ((((((!(arr_0 [i_0]))))) ^ ((((max(var_7, (arr_0 [i_0])))) ? (arr_1 [i_0]) : (arr_0 [i_0])))));
        }
    }
    for (int i_3 = 3; i_3 < 16;i_3 += 1) /* same iter space */
    {
        arr_12 [i_3 - 1] = ((!(((((min((arr_10 [i_3 - 3]), 1099511627520))) ? (arr_11 [i_3 - 3]) : (arr_10 [i_3 + 3]))))));
        var_12 = (((((((((arr_10 [i_3]) - (arr_10 [i_3])))) ? (min((arr_10 [i_3]), (arr_11 [i_3]))) : ((((arr_10 [18]) ? (arr_11 [i_3 - 1]) : (arr_11 [i_3 + 2]))))))) ? ((((arr_10 [i_3]) | (((arr_10 [i_3]) ? (arr_11 [i_3]) : (arr_11 [i_3])))))) : ((((((arr_11 [5]) ? var_7 : (arr_11 [i_3 - 1])))) ? (arr_11 [i_3 - 3]) : (arr_10 [i_3 + 2])))));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1) /* same iter space */
    {
        arr_15 [i_4] [i_4] = (!var_9);

        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_13 = (((((arr_17 [i_4 + 2] [i_4 + 1] [i_4 - 1]) || var_9)) ? ((1099511627520 ? 1562366946032259707 : (arr_19 [1] [i_4 - 1] [i_6]))) : 936733969175608385));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 18;i_7 += 1)
                {
                    for (int i_8 = 2; i_8 < 16;i_8 += 1)
                    {
                        {
                            var_14 = (min(var_14, ((((((((arr_10 [i_6]) ? (arr_21 [i_4] [i_5]) : (arr_27 [i_6] [i_5])))) ? var_7 : (arr_23 [i_8] [i_5] [i_6] [9] [i_8] [9])))))));
                            var_15 = (max(var_15, (arr_23 [i_6] [i_5] [i_6] [i_7 + 1] [2] [i_5])));
                            arr_28 [1] [i_4 + 1] [i_4] [i_4] [i_4] = (((-(arr_20 [i_4 - 3] [i_5] [i_4 - 3]))));
                        }
                    }
                }
            }
            arr_29 [i_4] [i_5] = ((-(arr_23 [i_4 + 3] [i_4 + 3] [i_4 + 3] [i_5] [i_5] [i_5])));
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_16 -= (max(((-(arr_30 [i_9] [i_9] [11] [i_10]))), 0));
                        arr_34 [i_10] [4] [i_5] [i_4] = var_1;
                        arr_35 [i_4] [i_4 - 1] [i_4 - 1] [i_5] [i_4 - 1] |= ((~(arr_13 [i_4])));
                        var_17 = ((-(arr_26 [1] [1] [i_9] [i_9] [i_10])));
                        var_18 = (!var_6);
                    }
                }
            }
            var_19 = 125;
        }
    }
    for (int i_11 = 3; i_11 < 16;i_11 += 1) /* same iter space */
    {
        var_20 = (max(var_20, var_1));
        var_21 = (arr_16 [i_11 + 2]);
        var_22 = (min(var_22, ((((arr_10 [i_11 - 1]) ? (arr_23 [i_11] [i_11 + 1] [i_11] [i_11 - 2] [i_11 - 2] [4]) : (arr_33 [i_11] [i_11] [i_11] [i_11]))))));
        /* LoopNest 3 */
        for (int i_12 = 1; i_12 < 15;i_12 += 1)
        {
            for (int i_13 = 2; i_13 < 18;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 19;i_14 += 1)
                {
                    {
                        arr_47 [i_14] [i_13] [1] [i_11 + 1] [17] [i_11] = (arr_21 [i_13] [i_14]);
                        var_23 = var_6;
                        var_24 = (arr_24 [i_11 + 2] [i_11 + 2] [i_13] [i_13 - 1] [i_13 - 1] [i_14]);
                    }
                }
            }
        }
    }

    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        /* LoopNest 2 */
        for (int i_16 = 1; i_16 < 18;i_16 += 1)
        {
            for (int i_17 = 0; i_17 < 19;i_17 += 1)
            {
                {
                    arr_54 [i_15] [i_16] [i_17] [1] &= (((((arr_45 [i_15] [i_15] [i_15] [8] [i_15] [2]) ? -8 : (arr_51 [1]))) > (((min(255, (arr_36 [i_15])))))));
                    var_25 = arr_42 [i_15] [i_15] [i_17];
                    var_26 = ((((((!(arr_22 [i_15] [i_15] [i_16 - 1] [i_17])))) - (((arr_52 [i_15] [17] [i_16] [i_15]) ? (arr_11 [i_15]) : -1784)))));
                    var_27 = (max(var_27, -35));
                }
            }
        }
        arr_55 [i_15] &= ((var_0 & (max((arr_44 [i_15] [i_15]), 0))));
        var_28 -= ((+((((((arr_21 [i_15] [i_15]) ? (arr_11 [1]) : (arr_44 [i_15] [i_15])))) ? (!var_2) : (min((arr_24 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15]), (arr_50 [i_15] [i_15])))))));
        var_29 = 6879297204600369747;
    }
    for (int i_18 = 0; i_18 < 10;i_18 += 1)
    {
        var_30 ^= var_8;
        arr_58 [i_18] = (arr_40 [i_18] [6]);
    }
    var_31 = var_3;
    #pragma endscop
}
