/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8988
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 |= (arr_7 [18] [i_0] [18]);

                    for (int i_3 = 3; i_3 < 23;i_3 += 1)
                    {
                        var_14 ^= ((((max(0, 1)) ? var_1 : (arr_0 [i_0 - 1]))) + (((186 ? (arr_1 [i_3]) : (arr_7 [14] [16] [14])))));
                        arr_11 [13] [11] [i_2] [i_0] [i_1] = (~(((arr_7 [i_1] [i_3 + 2] [i_3 - 1]) & var_6)));
                    }
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        var_15 = var_12;
                        var_16 = (max(var_3, (((arr_7 [i_1] [i_4 - 1] [i_4 - 1]) ? (arr_7 [i_1] [i_4 - 1] [i_4 - 1]) : var_12))));
                    }
                    for (int i_5 = 4; i_5 < 23;i_5 += 1)
                    {
                        var_17 = (((((min(178, var_7)))) ? var_5 : ((((!(var_11 || 18446744073709551615)))))));
                        arr_18 [9] [9] [i_1] = -44869;
                    }
                    var_18 = (max(var_18, ((min(((-(arr_10 [i_0 + 1] [i_0 - 2] [18] [i_0 + 1] [i_0 + 1]))), ((max(var_10, (3732552544719194437 <= var_4)))))))));
                    arr_19 [i_0] [i_1] [i_1] = (arr_13 [i_1] [i_2] [i_1] [i_1] [i_1]);

                    for (int i_6 = 1; i_6 < 24;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            var_19 -= -22;
                            var_20 = (min(var_20, (((min(var_5, (~20667)))))));
                            var_21 = (arr_8 [i_0] [8]);
                        }
                        for (int i_8 = 1; i_8 < 21;i_8 += 1) /* same iter space */
                        {
                            var_22 = var_11;
                            var_23 = -var_11;
                            arr_29 [2] [2] [i_1] [2] [i_1] = min(9223688953375221612, 18446744073709551600);
                            arr_30 [i_0] [i_0] [1] [i_6] [i_6 - 1] [i_1] = (((arr_16 [i_0 - 1] [21]) == (min(var_7, var_6))));
                            var_24 -= (arr_24 [i_0] [i_2] [i_8]);
                        }
                        for (int i_9 = 1; i_9 < 21;i_9 += 1) /* same iter space */
                        {
                            var_25 = var_5;
                            var_26 = (178 == ((((78 && var_5) && ((max(var_2, var_1)))))));
                            arr_34 [4] [i_6] [i_1] [i_1] [i_0 + 1] = 531447295;
                        }
                        var_27 = ((((((max((arr_28 [i_0 + 1] [i_0 + 1] [13] [i_2] [13] [i_6] [i_6]), var_0))))) / ((var_2 ? (((1161928922 ? 1 : 1))) : (arr_14 [16] [i_1] [i_2] [i_6])))));
                        var_28 ^= ((((min((arr_27 [i_6] [i_6] [1] [i_6 - 1] [10] [i_6] [i_2]), (arr_20 [i_0] [16] [i_0] [i_6 - 1])))) % (17748283264301243641 / 1)));

                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            var_29 = (min(var_29, (((~(~var_5))))));
                            var_30 ^= ((96 != ((var_5 >> (var_0 - 26)))));
                            var_31 ^= -95;
                            var_32 ^= ((1 ^ ((max((arr_5 [10]), 255)))));
                        }
                        arr_39 [i_1] [20] [i_1] = ((((3980738974 ^ ((var_11 ? 1 : 412316860416))))) ? (((-(arr_21 [i_0 - 2] [i_0 - 1] [i_2] [i_0 - 2])))) : ((~(((arr_31 [i_0 - 1] [i_0 - 1] [i_1] [i_1] [i_2] [i_2] [i_0 - 1]) ? (arr_26 [i_0] [1] [i_1] [i_2] [i_2] [0]) : (arr_31 [1] [i_0] [1] [24] [1] [i_2] [1]))))));
                    }
                }
            }
        }
    }
    var_33 *= max(var_3, 4761603437928382926);
    var_34 = (min(var_34, var_8));
    #pragma endscop
}
