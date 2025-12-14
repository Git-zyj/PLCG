/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((max(16, (~147))))));
    var_15 &= var_3;

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        var_16 = ((~(((arr_1 [i_0] [i_0 - 2]) ? (arr_1 [i_0] [i_0]) : var_3))));
        var_17 |= max((arr_1 [1] [i_0 + 3]), (((~var_0) ? (((~(arr_0 [18] [18])))) : ((1595461918249441358 ? 5544108260516568671 : (arr_0 [14] [i_0]))))));
        var_18 = (min(var_18, (((140 ? -1 : 1)))));
        var_19 ^= (max((arr_1 [4] [i_0 + 3]), (((3751817263105129495 != (arr_1 [4] [i_0 - 1]))))));
        var_20 = (min((max((arr_0 [i_0] [i_0]), -1)), (4230230512 != 3001370525)));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 19;i_4 += 1)
                {
                    {
                        var_21 = (min((((!(arr_11 [i_1] [i_1] [i_4])))), ((min(38, (arr_10 [i_3] [i_3] [i_4 + 1] [i_3] [i_3] [i_4]))))));
                        var_22 = (min(var_22, ((max(((-(((1 || (arr_10 [i_1] [i_2] [6] [i_2] [i_3] [i_1])))))), var_5)))));
                        var_23 = (min(var_23, 3730266085));
                        var_24 ^= ((((min((max(0, (-9223372036854775807 - 1))), (arr_9 [i_2] [i_4] [i_4 - 1])))) ? 0 : (arr_6 [i_4 - 1])));

                        for (int i_5 = 0; i_5 < 21;i_5 += 1)
                        {
                            arr_16 [i_5] [i_4 + 2] [i_5] = 91;
                            var_25 += (max(79, (((arr_15 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4 + 1]) ? (!-28180) : (arr_14 [i_4 - 1] [6] [i_4 + 1] [i_4 + 1] [i_4] [18])))));
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_26 = ((~(!64736776)));
                            var_27 = (max(var_27, -3364610596849500641));
                            var_28 = ((-((-(arr_4 [i_6])))));
                            var_29 = (((((~1024) + 2147483647)) << ((((30663 | (arr_15 [i_4] [i_2] [i_3] [i_4 + 1] [i_3]))) - 30719))));
                        }
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 21;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 21;i_8 += 1)
            {
                {
                    var_30 &= (min(((~(arr_18 [i_1] [i_7] [i_8] [i_8] [i_1]))), ((((min(4095, -3751817263105129494)) != (((-1595461918249441339 ? 9 : -604838382))))))));
                    arr_25 [i_8] [i_8] [i_8] [i_1] = ((-((((arr_20 [i_7] [i_7] [0]) == (arr_20 [i_1] [i_7] [i_1]))))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_9 = 0; i_9 < 20;i_9 += 1)
    {
        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                {
                    var_31 = (~(max(var_8, -46)));
                    var_32 = (min(((((arr_12 [i_10 + 1] [i_10] [i_10]) && (!0)))), ((~(arr_10 [i_9] [i_9] [i_11] [i_9] [i_11] [i_10 - 1])))));
                    var_33 = ((((max(10463801475241431998, (arr_31 [i_11] [i_10] [i_10] [i_9])))) ? ((((!(arr_31 [i_11] [i_10] [i_10] [i_9]))))) : (((arr_27 [i_9]) * (arr_27 [i_9])))));
                }
            }
        }
    }
    var_34 = (max(var_34, 3001370525));
    #pragma endscop
}
