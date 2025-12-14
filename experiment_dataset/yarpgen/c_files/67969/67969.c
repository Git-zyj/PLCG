/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_2 <= (-9223372036854775807 - 1)));
    var_20 = var_2;

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_3 [i_0] = (min(var_2, -126));
        var_21 = ((934745106 ? 7 : 45));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        var_22 = (min(-31269, (arr_4 [i_1 + 2] [i_1 + 1])));
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 20;i_3 += 1)
            {
                {
                    arr_12 [i_1] [i_3] = ((((934745106 ? (arr_11 [i_2] [i_3]) : 51)) % 934745106));
                    arr_13 [i_1 - 1] [i_3] = ((((min(934745106, 2812132909))) ? ((((((arr_11 [6] [i_1 - 1]) ? (arr_4 [i_1] [i_1]) : 4229631959))) ? ((8627488723528171987 >> (var_12 + 2150170887415008767))) : (((((arr_6 [i_2]) != (arr_4 [i_1 - 1] [i_3]))))))) : (((((max(var_12, (arr_6 [i_1 + 1])))) ? (min((arr_10 [i_2]), (arr_7 [i_1 - 1] [i_2] [i_3 + 1]))) : (arr_8 [i_1 + 1] [i_1] [i_1 + 1]))))));

                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        var_23 = (arr_6 [i_1]);
                        var_24 &= (((((arr_11 [i_2 - 4] [i_4]) != 10)) ? (((!(45 - 1482834387)))) : -125));
                        var_25 = min(-16, 23);
                        var_26 = ((-2489557292252645246 ? 50558 : 2812132909));
                    }
                    for (int i_5 = 3; i_5 < 17;i_5 += 1)
                    {
                        var_27 -= 255;
                        arr_19 [i_3] [i_3] [i_3] = (max((arr_8 [i_5] [2] [i_1 + 1]), (((((-(arr_14 [17] [17] [i_3] [i_5 + 3]))) == (~var_6))))));
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 21;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 21;i_7 += 1)
                        {
                            var_28 = (min(var_28, ((((arr_25 [18] [i_2 - 4] [i_3 - 1] [i_1 - 1] [i_7]) - (arr_9 [i_1] [i_2 - 1] [4]))))));
                            var_29 -= var_14;
                            var_30 = (min(var_30, 5714));
                            var_31 -= -29900;
                            var_32 = (((arr_8 [i_1 + 1] [i_2 + 2] [i_2 + 2]) <= (arr_8 [i_1 + 1] [i_2 - 2] [i_2 + 2])));
                        }
                        var_33 = -19000;
                        var_34 = ((((((arr_24 [i_1 + 1] [i_3]) * var_18))) ? (((arr_6 [11]) ? (arr_4 [i_2] [i_2 - 2]) : var_0)) : -53));
                        var_35 = (arr_15 [16] [i_2] [i_2] [i_2 + 1]);
                        var_36 = arr_6 [12];
                    }
                }
            }
        }
        arr_26 [i_1] = ((((((((arr_6 [i_1 + 1]) + (arr_24 [i_1] [0]))) - (arr_6 [i_1 + 2])))) ? 63 : 65519));
        var_37 = (max((arr_9 [i_1] [i_1 + 1] [14]), (arr_18 [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1 + 1] [11])));
    }
    for (int i_8 = 4; i_8 < 15;i_8 += 1)
    {
        arr_31 [i_8 + 3] = (arr_22 [i_8] [i_8 + 1] [i_8 - 1] [i_8]);
        arr_32 [i_8] = ((18999 ? 1482834387 : 0));
    }
    /* vectorizable */
    for (int i_9 = 2; i_9 < 9;i_9 += 1)
    {
        var_38 = (arr_25 [i_9] [i_9 - 1] [i_9] [i_9 - 2] [6]);
        arr_36 [i_9] = (arr_4 [i_9] [18]);
    }
    var_39 = (((min((max(63, 1482834387)), -19000)) & (var_4 ^ var_11)));
    var_40 = ((-21382 ? 30683 : -75));
    #pragma endscop
}
