/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70316
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0 - 1] [i_0 - 1]) >> 19));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 = (max((max((arr_2 [i_0] [i_0]), 1)), (((3334936701 >= (arr_5 [i_0] [i_1] [i_1]))))));
                    arr_8 [i_0] [i_0] [i_2] [i_2] = ((6026280176582425765 ? 4294967268 : (max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 1])))));
                    var_19 = (~var_14);
                    arr_9 [9] [4] [i_2] [i_0] = ((arr_4 [i_0] [i_0] [i_0]) ? ((-(((arr_7 [i_0]) ? var_8 : (arr_7 [i_0]))))) : (arr_3 [i_0]));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 9;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    {
                        var_20 = var_0;
                        arr_20 [i_0] [i_0] [i_0 - 1] = (((min(((-(arr_13 [i_0] [i_5 - 1]))), (((32746 > (arr_1 [i_5 + 2])))))) & (((arr_13 [i_0] [i_0 - 1]) * -0))));
                    }
                }
            }
        }
        arr_21 [i_0] = 5790825324055443773;
        var_21 = max((arr_10 [i_0]), ((max(var_15, (((arr_3 [i_0]) ? 87287782 : 87287782))))));
    }
    for (int i_6 = 2; i_6 < 13;i_6 += 1)
    {
        /* LoopNest 3 */
        for (int i_7 = 3; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 3; i_8 < 16;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    {
                        var_22 = 8742994057967814469;
                        var_23 = ((((min(((min(var_13, -2046819998577993812))), ((var_7 ? (arr_32 [i_6] [i_7] [i_8] [i_9]) : 5790825324055443773))))) && ((0 || (arr_25 [i_6 + 4])))));
                        var_24 = (min(var_24, (((-1404968074 ^ (min((arr_26 [i_6 + 3] [i_6] [i_8 + 1]), 1085787450)))))));
                    }
                }
            }
        }
        var_25 += (max((((~(((!(arr_22 [i_6 + 4] [i_6]))))))), (max(-32764, ((var_11 >> (var_10 - 25853)))))));
        var_26 &= ((((arr_27 [i_6 - 2] [14] [i_6 + 4] [i_6]) ? (arr_22 [i_6 + 1] [i_6 + 4]) : (min(21017, 640464957)))));
        arr_33 [i_6] = ((var_6 ? ((379321453 ? (var_9 % 175) : (arr_26 [i_6] [i_6] [i_6]))) : var_9));
    }
    /* LoopNest 3 */
    for (int i_10 = 3; i_10 < 8;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                {
                    arr_41 [i_10] [i_11] = (((((((arr_31 [14] [i_10 + 1] [i_12] [i_11]) >= (arr_31 [i_11] [i_10 - 3] [i_12] [i_12]))))) != (min(1, 1750153134623369389))));
                    var_27 = (((var_6 || var_13) || ((max((arr_35 [i_11]), (arr_35 [i_11]))))));
                    var_28 = (i_10 % 2 == 0) ? (((var_10 << (((max((arr_7 [i_10]), (arr_15 [i_10]))) - 808))))) : (((var_10 << (((((max((arr_7 [i_10]), (arr_15 [i_10]))) - 808)) - 22039)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_13 = 0; i_13 < 1;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 15;i_14 += 1)
        {
            {
                var_29 = 12655918749654107842;
                arr_47 [8] [13] = var_8;
                var_30 = var_12;
            }
        }
    }
    var_31 = (max((max(var_15, ((-2142 ? var_9 : var_15)))), (((-(~53689))))));
    #pragma endscop
}
