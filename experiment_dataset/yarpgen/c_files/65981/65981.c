/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65981
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 |= 7;
    var_12 = 32384;
    var_13 = (((var_5 << var_4) | (min(var_4, var_4))));
    var_14 = var_3;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((!39) == var_9));
        var_15 *= var_7;
        var_16 = (max(var_16, (((~((~(!var_4))))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_12 [i_2] [i_1] [i_0] = (min(var_0, ((133 << (25991 < var_0)))));
                    var_17 = var_6;

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_0] = var_6;
                        var_18 = ((-((max(28974, var_9)))));

                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            var_19 = ((((!var_7) || (((-1653649857 ? var_10 : 64))))));
                            var_20 = ((var_8 - (((((28 ? 1 : var_5)) >> (!var_2))))));
                            var_21 = var_7;
                            arr_18 [i_0] [i_1] [i_2] = var_9;
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_22 = var_0;
                            var_23 = (min((((!(var_4 * var_5)))), ((var_3 ? (((max((arr_11 [i_0] [i_0]), (arr_21 [i_3]))))) : 2813308172))));
                            var_24 -= ((-((29442 - (-312650607 <= var_2)))));
                        }
                        for (int i_6 = 2; i_6 < 20;i_6 += 1)
                        {
                            arr_26 [i_0] = ((-(var_4 / var_3)));
                            var_25 |= var_9;
                            var_26 = (max((arr_10 [i_0] [i_0] [i_0] [i_0]), ((((-32767 - 1) != 167245097)))));
                            arr_27 [i_0] |= ((144115188075855871 == (!-5723627168749450734)));
                            arr_28 [i_0] [i_0] [i_0] = var_8;
                        }
                        var_27 = (min(((max(1, -3817768417275796405))), (max(220, 1152921502459363328))));
                    }
                }
            }
        }
        arr_29 [i_0] = (max(((max((arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))), 5723627168749450749));
    }
    for (int i_7 = 1; i_7 < 12;i_7 += 1)
    {
        arr_32 [i_7 + 1] [i_7] = min((max(-3817768417275796405, 3817768417275796396)), ((((var_0 / 5723627168749450733) == ((min(10211, var_1)))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 13;i_9 += 1)
            {
                {
                    arr_40 [i_7 + 1] [i_7] [i_7] = (min(11, 18446744073709551602));
                    arr_41 [i_7] = (var_6 ? ((-227850464 * (((arr_10 [i_7] [i_7] [i_9] [i_9]) ? var_1 : var_3)))) : var_6);
                    var_28 = (min((min(var_10, (var_9 == var_10))), 1481659095));
                }
            }
        }
        arr_42 [i_7] [i_7] = 32741;
        arr_43 [i_7] = (((var_8 / var_7) && (((arr_7 [i_7] [i_7 - 1]) >= (arr_37 [i_7 + 1] [i_7 - 1] [i_7] [i_7 + 2])))));
    }
    #pragma endscop
}
