/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69186
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    arr_7 [i_0] [9] = (((((0 ? var_1 : (arr_1 [i_0] [i_0])))) ? ((692775529 ? (-127 - 1) : -493395444279815893)) : ((((arr_1 [i_0] [i_0]) * (arr_1 [i_0] [i_0]))))));
                    var_11 = (((var_8 | (var_2 - -4699789240849307220))));
                    arr_8 [i_2] [11] [i_0] = ((max(var_5, (arr_2 [i_0 - 2]))));
                    arr_9 [i_0] [7] = (var_6 + 3);
                }
            }
        }
    }
    var_12 = var_3;

    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_12 [5] = (((9223372036854775807 - var_3) - (var_5 * var_6)));

        for (int i_4 = 1; i_4 < 1;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    {
                        var_13 *= (max((((arr_15 [i_4 - 1] [i_4] [i_4 - 1]) ? (arr_15 [i_4 - 1] [4] [i_4 - 1]) : var_6)), ((max((arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]), (arr_15 [i_4 - 1] [i_4 - 1] [i_4 - 1]))))));
                        arr_21 [i_5] [i_5] [4] [11] = (arr_4 [i_6]);
                        arr_22 [i_5] = ((var_1 - (!var_3)));
                        arr_23 [2] [i_5] [i_5] [i_3] = (-127 - 1);
                    }
                }
            }
            var_14 = ((((((arr_20 [i_4 - 1] [i_4] [8] [i_4]) - (arr_20 [i_4 - 1] [0] [i_4 - 1] [1])))) ? var_4 : ((max((arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4]), 17)))));
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_15 += -8;
            arr_26 [i_3] [i_7] [i_3] = (((((arr_17 [i_7]) ^ var_2)) * ((var_3 ? (arr_25 [i_3] [i_7]) : ((var_6 ? var_3 : var_2))))));
            arr_27 [i_7] [i_7 - 1] [i_3] = (!var_4);

            for (int i_8 = 0; i_8 < 16;i_8 += 1)
            {
                var_16 += var_6;
                var_17 = (!(((var_8 ? 65529 : var_4))));
            }
        }
        for (int i_9 = 0; i_9 < 16;i_9 += 1)
        {
            var_18 = (max(var_18, ((max((arr_11 [i_9] [i_9]), ((2195000268 ? var_4 : 1)))))));
            var_19 = 120;
        }
        var_20 *= ((((((arr_14 [4] [10]) ? var_7 : var_1))) ? (((arr_10 [i_3]) + var_4)) : ((((120 + var_7) - (arr_6 [i_3] [i_3] [i_3]))))));
    }
    for (int i_10 = 0; i_10 < 1;i_10 += 1)
    {
        var_21 = -7;
        var_22 = (3295254230559974997 & var_4);
        arr_34 [i_10] = var_8;
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_38 [i_11] = (max(16760832, 0));
        var_23 = (((var_8 ? var_1 : (((!(arr_35 [i_11])))))) * (((86 & 692775520) ? (-97 > 1) : 1601786477)));
    }
    var_24 *= (((((var_5 & var_0) >= var_1)) ? (var_7 & var_3) : (min(var_2, var_7))));
    #pragma endscop
}
