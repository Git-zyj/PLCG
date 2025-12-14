/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_13 ^= ((((((69457709 ? (arr_2 [i_2]) : 1))) ? (max(var_0, 4225509587)) : ((max(4225509586, var_3))))));
                            arr_11 [i_3] = var_10;
                            arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = (((-2147483647 - 1) | var_2));
                            arr_13 [i_3 - 2] [i_3] [i_0] [i_0] [i_3] [i_0] = (max((max(var_11, (4225509587 | var_7))), ((69457709 - (((max(var_8, -8881))))))));
                        }
                    }
                }
                arr_14 [8] [i_0] = (((((var_8 + 2147483647) >> (((((arr_8 [2]) | var_11)) + 53)))) >> (4225509578 - 4225509547)));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_20 [1] [i_1] [i_4] [i_4] = (!var_4);
                            arr_21 [i_5] [i_4] [i_4] [i_4] [i_1] [i_0] = (((var_4 + 2147483647) >> (4225509590 - 4225509579)));
                            var_14 = var_4;
                            var_15 = (min(var_15, (((max(var_1, (~16405822397487294453)))))));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            {
                                var_16 = (min(var_16, (((((var_10 * (213 / 4225509574))) != (arr_6 [i_1 + 1] [i_8] [1] [i_7]))))));
                                var_17 = ((~(((var_4 ? 82 : (arr_25 [i_8] [i_0] [i_1 + 1] [i_0]))))));
                            }
                        }
                    }
                }
                var_18 = (max(var_18, ((((((var_3 ? 34359738367 : 15))) ? ((var_6 ? (((max(var_11, 66)))) : ((-69 ? 18446744073709551615 : -35)))) : ((max((arr_10 [i_0] [i_0] [i_1] [i_0] [18]), (~47)))))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 16;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 16;i_10 += 1)
        {
            {
                var_19 = (max((((arr_17 [i_9] [i_9] [i_10]) ? (arr_17 [i_9] [i_9] [i_9]) : var_7)), ((min((arr_15 [i_9]), (arr_25 [i_10] [i_10] [i_9] [i_9]))))));
                /* LoopNest 2 */
                for (int i_11 = 1; i_11 < 15;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 16;i_12 += 1)
                    {
                        {
                            var_20 = (max((((!((max(var_10, 15)))))), var_0));
                            arr_42 [i_9] [i_9] [i_10] [i_9] = ((-(~var_11)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_13 = 0; i_13 < 16;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 16;i_14 += 1)
                    {
                        {
                            var_21 = (+((+(((arr_23 [i_9] [i_10] [i_13] [i_14]) ? var_3 : 4225509586)))));
                            arr_51 [i_14] [i_13] [i_10] [i_14] = ((((!(((4234 ? var_8 : var_7))))) || (((-(((arr_22 [i_9] [i_10] [i_13] [1]) ? 68 : 5177526697274622666)))))));
                            var_22 = 11323;
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_15 = 0; i_15 < 23;i_15 += 1)
    {
        for (int i_16 = 0; i_16 < 23;i_16 += 1)
        {
            {
                var_23 = ((~(arr_7 [i_16] [i_16] [i_16] [i_16])));
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 23;i_17 += 1)
                {
                    for (int i_18 = 0; i_18 < 23;i_18 += 1)
                    {
                        {
                            var_24 = max(((((1584126669 ? 27 : -28)))), (max((~-103), (arr_25 [i_18] [i_17] [i_16] [10]))));
                            var_25 = (max((max(0, 1)), (((1 < (min(var_7, 1)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
