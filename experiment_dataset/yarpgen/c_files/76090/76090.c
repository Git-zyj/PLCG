/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] = (arr_3 [i_0] [i_1 + 2] [i_1]);
                var_12 = (65519 & 399734840957877802);
                arr_5 [i_1] = ((1 ? ((((!(arr_0 [i_0]))))) : var_1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            arr_13 [i_2] [i_3] = ((((arr_9 [i_2] [i_3]) ? -399734840957877792 : (arr_9 [i_2] [i_2]))));
            var_13 = ((-((((arr_12 [i_2] [i_3]) <= var_10)))));
            arr_14 [i_3] [i_3] [i_2] = var_7;

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    arr_19 [i_2] [i_5] [i_3] [i_3] = (((((((max(25, var_10))) ? ((min(var_10, 399734840957877826))) : -0))) ? ((~((var_0 ? 11350748020140073558 : -399734840957877802)))) : (((1384113075 ? var_9 : var_4)))));
                    var_14 = (((~((max(var_11, 16))))) <= ((-(-127 - 1))));
                    var_15 = (max(var_15, (((((arr_6 [i_3] [i_4]) <= var_5))))));
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        {
                            arr_24 [i_2] [i_4] [i_7] [i_7] = (-32767 - 1);
                            var_16 = (((arr_18 [i_2] [i_3] [i_4] [i_6 - 1] [i_7 + 2] [i_3]) <= (((var_1 <= var_8) ? (arr_10 [i_2] [i_3]) : 24344))));
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 24;i_8 += 1)
            {
                arr_29 [i_3] = ((-((((arr_25 [i_2] [i_8 + 1]) <= ((7033 ? var_4 : 4011577272)))))));
                var_17 = (min(((((!(arr_20 [i_3] [i_3] [i_8] [i_3]))) ? (~21) : (min(var_5, (arr_23 [i_2]))))), ((((18446744073709551603 <= var_6) <= (arr_25 [i_2] [i_3]))))));
            }
            for (int i_9 = 1; i_9 < 24;i_9 += 1)
            {
                var_18 = (((min(var_9, 2791914979)) <= (((((-399734840957877802 <= 65519) <= var_1))))));
                var_19 = (max(65502, (arr_10 [i_9 + 1] [i_9 - 1])));
                /* LoopNest 2 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_20 = (min(var_20, 3979092077785834226));
                            arr_37 [i_9 - 1] [i_3] [i_9] [i_2] [i_11] [i_2] = ((~((-(arr_21 [i_3] [i_9 - 1])))));
                        }
                    }
                }
                var_21 = (min(var_21, ((((-32767 - 1) <= ((((max(-399734840957877805, var_11))) ? (max(var_2, 3138446169527681039)) : var_5)))))));
            }
            for (int i_12 = 1; i_12 < 1;i_12 += 1)
            {
                arr_41 [i_2] [i_2] [i_2] = ((!((((var_4 ? 1 : 3629654148))))));
                arr_42 [i_2] [i_3] [i_3] [i_12 - 1] = (((var_1 ? var_7 : (1 <= var_5))));
            }

            for (int i_13 = 0; i_13 < 25;i_13 += 1)
            {
                arr_45 [i_13] [i_13] = (--2910854227);
                var_22 ^= min(34516, -399734840957877803);
                var_23 = 2846;
            }
        }
        var_24 += ((((min((2831000879729694417 + var_9), var_7))) <= var_6));
    }
    for (int i_14 = 0; i_14 < 10;i_14 += 1)
    {
        var_25 = (((3629654142 ^ var_8) ? var_10 : (arr_43 [i_14])));
        var_26 = (((max((arr_39 [i_14] [i_14]), 14651)) <= ((((2846 <= (((!(arr_27 [i_14] [i_14] [i_14]))))))))));
    }
    var_27 = (((((var_8 <= (110 <= var_0)))) <= 65514));
    var_28 = (var_5 | var_3);
    #pragma endscop
}
