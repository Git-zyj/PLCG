/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98040
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98040 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98040
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((46528 ? var_1 : 219));

                for (int i_2 = 1; i_2 < 15;i_2 += 1)
                {
                    var_15 = (min(var_15, (((((4112612048 >> (var_5 - 34))) | ((((arr_7 [i_2] [i_2 + 1] [i_2] [i_0]) ? (arr_7 [i_0] [i_2 + 1] [i_2 + 2] [i_0]) : (arr_7 [i_0] [i_2 - 1] [i_1] [i_2 + 1])))))))));
                    arr_8 [i_0] [i_1] [i_2] |= var_13;
                    var_16 = 1;

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_17 = (arr_10 [i_2] [i_2 - 1] [i_2 + 1] [i_2] [i_2 + 1]);
                        arr_13 [i_3] [i_1] [i_1] [i_3] [i_3] [i_1] = ((((arr_6 [i_0]) ? var_1 : var_14)));
                    }
                }
                for (int i_4 = 3; i_4 < 16;i_4 += 1)
                {

                    for (int i_5 = 2; i_5 < 15;i_5 += 1)
                    {
                        var_18 = (max(1, var_14));
                        var_19 = (max(78, (arr_19 [i_0])));
                        var_20 = (((((var_5 ? (arr_10 [i_0] [i_1] [i_0] [i_4 - 3] [i_5 + 1]) : (arr_16 [i_4] [i_1] [i_0] [i_4 - 2])))) ? (((53 ^ (arr_10 [i_0] [i_5] [i_5 + 1] [i_4 - 2] [i_5 - 1])))) : 16));
                        var_21 = (max((min((((arr_17 [i_0] [i_0] [i_0] [i_4] [i_5]) && var_4)), (arr_20 [i_0] [i_1] [i_1] [i_5 - 1]))), ((!(((var_5 ? -2920 : (arr_20 [i_5] [i_0] [i_1] [i_0]))))))));
                        arr_21 [i_1] [i_4] [i_1] [i_5 - 2] = max((((((~(arr_11 [i_4])))) ? (min(var_4, 148)) : (22990 < var_5))), (max((max(var_6, 14202363844228229602)), (arr_3 [i_5 + 1] [i_4]))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        var_22 += (!var_3);
                        arr_26 [i_0] [i_0] [i_1] [i_0] [i_4] [i_6] = (!var_11);
                        var_23 += (((arr_0 [i_0] [i_1]) * var_10));
                        var_24 = var_7;
                    }
                    arr_27 [i_0] [i_1] [i_4] [i_0] = (arr_9 [i_4 + 1] [i_4 + 1] [i_4 - 1] [i_4] [i_4 - 3]);
                }
            }
        }
    }
    var_25 = ((((min((95 == var_6), (var_10 % 2394729228508689708)))) ? (~32736) : (((min(var_11, (-127 - 1)))))));
    var_26 = var_13;
    /* LoopNest 3 */
    for (int i_7 = 0; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                {
                    arr_38 [i_7] [i_9] [i_7] [i_9] = ((~(((!(arr_33 [i_7] [i_7] [i_7]))))));
                    var_27 = var_13;
                    var_28 = (max(var_28, 1));
                    var_29 = (min(-32504, ((var_3 >> ((((~(arr_37 [i_7] [i_9] [i_7] [i_9 + 1]))) + 3330))))));
                }
            }
        }
    }
    var_30 = var_13;
    #pragma endscop
}
