/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_20 = ((-4492827857149751218 ? 1333790592 : (arr_0 [i_0])));
        arr_2 [i_0] = ((((max(12342, -256))) ? (arr_1 [i_0] [i_0]) : (((!(arr_0 [i_0]))))));
        arr_3 [i_0] [18] = ((max(255, var_9)));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_21 = (+((max((arr_6 [i_1]), -6241899029791840544))));
        var_22 = (((~1073737728) >> ((((~(arr_1 [7] [i_1]))) + 55))));

        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            arr_11 [i_1] [i_1] = var_6;
            arr_12 [i_1] [i_2 - 1] = ((((((min(var_7, 69))) + (((arr_5 [i_1] [i_1]) + (arr_9 [i_1] [i_1])))))) ? (arr_7 [i_2 - 1] [i_2]) : (var_19 + -1903959497));
            var_23 = var_7;
            arr_13 [7] = (((((((18446744072635813888 ? 1 : 1999))) ? 6357775986011907753 : 1)) < ((((((-(arr_7 [i_1] [i_1])))) * (((arr_1 [i_1] [i_2 - 1]) ? (arr_8 [i_1] [i_2]) : (arr_9 [i_1] [i_2]))))))));
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_24 = (((arr_16 [i_1] [i_1] [i_1]) ? (arr_16 [i_1] [i_3] [i_1]) : (arr_16 [i_1] [i_1] [4])));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 16;i_5 += 1)
                {
                    {
                        var_25 = (((arr_20 [i_4] [i_4] [i_4] [i_5 + 2] [18]) * (arr_20 [i_5] [i_4] [i_4] [i_5 + 2] [i_5])));
                        var_26 = (arr_17 [i_5 + 1] [i_5 + 2] [i_5 - 1] [i_5 + 1]);
                    }
                }
            }
            arr_22 [i_1] [4] [i_3] = 14;
            var_27 = (arr_0 [i_1]);
            var_28 = (((((var_15 ? ((max(45615, 11039))) : ((2 * (arr_1 [i_1] [i_3])))))) / -1));
        }
        for (int i_6 = 3; i_6 < 18;i_6 += 1)
        {

            for (int i_7 = 0; i_7 < 0;i_7 += 1)
            {

                for (int i_8 = 0; i_8 < 19;i_8 += 1)
                {
                    arr_30 [i_1] [i_6] [i_7] [10] = (arr_16 [i_1] [i_6 - 2] [i_7 + 1]);
                    var_29 = min((arr_16 [i_7] [i_7 + 1] [i_8]), (min(var_8, (arr_16 [i_1] [i_7 + 1] [i_8]))));
                    var_30 = (max(var_30, (arr_27 [i_1] [i_1] [i_7 + 1] [i_1])));
                    var_31 = var_15;
                }
                var_32 = -1865584417;
                var_33 = ((!((max(((-(arr_10 [i_1] [i_6] [0]))), (-14 < 67))))));
            }
            var_34 = min((((arr_6 [i_6]) ? (((10150561736924323312 ? -7339 : 8190))) : (arr_16 [i_1] [i_1] [i_1]))), (max(((max((arr_5 [i_1] [i_6 + 1]), (arr_15 [i_1] [0] [i_1])))), (arr_16 [i_1] [i_6 - 3] [i_1]))));
        }
        /* LoopNest 3 */
        for (int i_9 = 3; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 19;i_11 += 1)
                {
                    {
                        var_35 = (max((65535 * 4), (((!(arr_16 [i_1] [i_9 - 1] [i_1]))))));
                        arr_41 [9] [i_10] [i_10] [i_10] [i_11] [i_11] = (((169 ? ((arr_25 [i_9] [i_11] [i_9]) : (arr_25 [i_1] [i_9] [14])))));
                    }
                }
            }
        }
        arr_42 [i_1] [i_1] = (((((7 * (6357775986011907756 == -23213)))) == ((-(max((arr_29 [i_1]), (arr_28 [i_1] [i_1] [i_1])))))));
    }
    var_36 = var_18;
    var_37 = var_5;
    #pragma endscop
}
