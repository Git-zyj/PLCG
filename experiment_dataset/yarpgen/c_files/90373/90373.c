/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90373
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_17 *= (min((((((arr_3 [i_0]) ? (arr_3 [i_1]) : var_4)))), (arr_6 [i_0] [20])));
                arr_7 [13] = 48;

                for (int i_2 = 4; i_2 < 24;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = (((((((((arr_2 [1]) ? (arr_9 [i_0] [9] [i_0]) : var_3))) ? -99 : (max((arr_2 [i_0]), var_2))))) && (arr_9 [19] [i_1] [i_1])));
                    arr_11 [i_0] [18] [i_1] [i_2] = ((var_10 == ((var_8 ? (arr_1 [i_1 + 1]) : 1))));
                    arr_12 [1] [i_2] = (687068740648983521 - 17759675333060568094);
                    var_18 -= var_10;
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_19 = ((-(((!(arr_4 [i_0 - 3]))))));
                    arr_15 [15] = (((arr_13 [i_0] [i_1] [10] [19]) | (((((arr_4 [15]) || ((min(3587938395341589993, (arr_6 [i_3] [i_1]))))))))));
                    arr_16 [i_1 + 1] [i_1] [i_3] = (((--0) ? (arr_2 [i_1]) : (((((arr_6 [i_1] [i_3]) && (arr_13 [i_0] [i_1] [i_1] [i_3]))) ? (arr_1 [i_0]) : (arr_14 [0] [11] [i_3])))));
                    arr_17 [8] [i_1] [i_1] [1] = (((arr_5 [10]) / (arr_2 [i_1])));
                }
                arr_18 [i_1] [i_0 - 1] = (((arr_8 [i_0] [i_0] [23]) / ((-(arr_8 [i_0 + 2] [i_0 - 3] [i_1])))));
                var_20 *= ((((min((arr_2 [i_0 + 4]), (arr_1 [i_0 - 4])))) || (arr_1 [i_0 - 1])));
            }
        }
    }
    var_21 = 3587938395341589993;

    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_21 [i_4] [i_4] = (arr_0 [1]);
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 19;i_6 += 1)
            {
                {
                    var_22 &= 3074491035;
                    var_23 += ((~((((var_8 | (arr_6 [8] [8]))) - (!-4384486514508889209)))));
                    var_24 = (max(var_24, (arr_9 [i_6] [19] [i_4])));
                }
            }
        }
        arr_27 [i_4] = ((((((min(26692, 208))) ? (((arr_22 [10] [6]) ? 65535 : (arr_6 [i_4] [i_4]))) : (max(var_10, (arr_20 [i_4] [i_4]))))) - (~var_0)));
        arr_28 [i_4] = (min(((max(var_15, (arr_19 [i_4])))), ((-(arr_2 [i_4])))));
    }
    for (int i_7 = 1; i_7 < 19;i_7 += 1)
    {
        arr_32 [i_7] = (arr_9 [i_7] [i_7] [i_7]);
        var_25 |= ((((((((var_2 & (arr_31 [14])))) == -0))) + (arr_3 [i_7])));
        arr_33 [i_7] [0] |= ((!((((arr_9 [i_7 + 2] [i_7 + 2] [i_7]) ^ (arr_29 [10] [i_7]))))));
        var_26 ^= 1;
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1)
    {
        var_27 *= ((((var_6 - (arr_19 [i_8])))) ? ((var_5 ^ (arr_23 [i_8] [i_8]))) : (arr_8 [i_8] [i_8] [i_8]));
        arr_37 [i_8] [i_8] = (((!var_10) <= (arr_9 [i_8] [i_8] [5])));
        arr_38 [i_8] [i_8] = 17759675333060568094;
        var_28 = (min(var_28, ((((((((arr_29 [i_8] [i_8]) <= (arr_34 [i_8] [10])))) != var_0)) ? var_13 : var_6))));
    }
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        var_29 = (((((var_10 ? var_7 : (arr_1 [i_9])))) ? ((((((arr_14 [i_9] [i_9] [i_9]) / (arr_40 [i_9] [i_9])))) ? var_16 : var_13)) : (-32767 - 1)));
        arr_41 [i_9] = (arr_40 [i_9] [i_9]);
    }
    #pragma endscop
}
