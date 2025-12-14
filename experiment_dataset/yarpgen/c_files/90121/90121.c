/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 20;i_1 += 1)
        {
            {
                var_19 = ((var_16 ? (--0) : (min(var_2, (arr_3 [i_0] [i_0] [i_0])))));
                var_20 = (min(((255 ? ((-(arr_1 [i_0]))) : (arr_2 [i_1 - 2]))), -1187521947));
            }
        }
    }

    for (int i_2 = 4; i_2 < 12;i_2 += 1)
    {
        var_21 &= ((-(((arr_3 [i_2] [i_2 - 2] [i_2 + 2]) ? var_1 : (arr_6 [i_2])))));
        arr_7 [i_2] [i_2] = (((((266 >> ((((arr_1 [i_2]) > (arr_4 [i_2 - 2]))))))) ? (arr_6 [i_2]) : ((var_12 ? (min((arr_3 [i_2] [i_2 - 1] [i_2 - 3]), 22886)) : (max(var_11, var_2))))));
        var_22 -= (((((-1909490032 ? var_12 : (arr_0 [i_2])))) ? (((!(arr_2 [i_2 + 4])))) : (((arr_6 [i_2 - 1]) ? 1 : (arr_6 [i_2 + 2])))));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_23 = (((-((var_4 ? (arr_2 [i_3]) : var_8)))));
        arr_10 [i_3] = (((max(((max(var_16, (arr_9 [i_3] [i_3])))), (((arr_5 [i_3] [i_3]) ? var_13 : var_6)))) << (-276 + 319)));
        var_24 &= 2693887376;
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        var_25 |= (((((-(arr_12 [i_4] [i_4])))) ? (arr_12 [i_4] [i_4]) : (min(-1, (arr_12 [i_4] [i_4])))));
        var_26 = (min((((arr_12 [i_4] [i_4]) ? (arr_12 [i_4] [i_4]) : (arr_13 [i_4] [i_4]))), (((((-(arr_12 [i_4] [i_4]))) > (arr_12 [i_4] [i_4]))))));
        arr_14 [i_4] = (min((var_10 ^ 2833), (!var_10)));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            arr_20 [i_6] |= (arr_15 [i_6] [i_6]);
            var_27 = 1;
            var_28 &= (arr_17 [i_5]);
        }
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_29 = (max(var_29, ((var_11 ? -277 : (((var_11 && ((((arr_22 [i_5]) | var_1))))))))));
            var_30 += ((((((arr_16 [i_7]) | (arr_16 [i_5])))) ? (max(var_5, var_5)) : 1));
            var_31 -= min(0, (((arr_16 [i_5]) ? var_14 : ((302 ? (arr_17 [i_5]) : (arr_15 [i_7] [i_5]))))));
        }
        for (int i_8 = 0; i_8 < 24;i_8 += 1)
        {
            var_32 = var_16;
            var_33 += (((((-(arr_16 [i_5])))) > ((258 ? (arr_17 [i_8]) : var_8))));
            arr_27 [i_5] = (arr_23 [i_5] [i_5] [i_8]);
        }
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            arr_30 [i_9] [i_9] [i_9] = var_11;

            /* vectorizable */
            for (int i_10 = 0; i_10 < 24;i_10 += 1)
            {
                arr_34 [i_5] [i_5] = (((arr_32 [i_5] [i_5]) ? var_2 : (arr_29 [i_5])));
                arr_35 [i_5] = ((arr_24 [i_10] [i_10] [i_10]) - 32093);
            }
            arr_36 [i_5] [i_5] = (((min((arr_28 [i_9] [i_5] [i_5]), (arr_28 [i_5] [i_9] [i_9]))) > ((4294967284 ? (arr_28 [i_5] [i_9] [i_5]) : 96))));
        }
        arr_37 [i_5] = ((((((arr_15 [i_5] [i_5]) >> (var_3 + 383)))) ? ((min((arr_15 [i_5] [i_5]), (arr_15 [i_5] [i_5])))) : (~var_10)));

        for (int i_11 = 0; i_11 < 1;i_11 += 1)
        {
            var_34 = ((-(((arr_23 [i_5] [i_11] [i_5]) ? ((var_9 ? var_6 : (arr_33 [i_5] [i_11] [i_11]))) : (((min((arr_40 [i_5] [i_5]), var_18))))))));
            arr_41 [i_5] [i_11] [i_5] = ((var_0 && (arr_16 [i_5])));
        }
        var_35 = (max((arr_18 [i_5] [i_5]), (arr_39 [i_5])));
    }
    var_36 = 60045;
    #pragma endscop
}
