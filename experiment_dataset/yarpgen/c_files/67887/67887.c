/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((((max(54520, ((15 ? var_0 : 1005711250)))) / 3)))));
    var_11 = min(var_0, (~-1));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 9;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_4] [i_4] = (var_9 % var_5);
                            var_12 |= var_3;
                            var_13 = (min(var_13, ((((var_7 ? 54490 : 10))))));
                        }
                        arr_16 [i_0] [i_1] [i_2 - 3] [i_3] = ((var_7 >> ((var_3 ? 15 : var_2))));
                    }
                    for (int i_5 = 2; i_5 < 9;i_5 += 1)
                    {
                        var_14 |= ((((((arr_9 [i_5] [3] [6]) ? ((var_1 ? (arr_4 [i_0] [i_0]) : 37530850)) : (min((arr_4 [i_0] [i_1]), 3883502794))))) ? ((min(((483760878 ? 13 : var_4)), ((11019 ? var_2 : (arr_17 [i_0] [i_1] [i_2] [1])))))) : (max(-3167111308771939432, ((max(1, var_6)))))));
                        var_15 = 1;
                        var_16 = (max(var_16, ((((max((((-26667 ? var_4 : (arr_10 [7] [i_1] [i_1] [i_1])))), (min((arr_2 [i_0]), 3610146094)))) != 483760878)))));

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_17 ^= 226;
                            arr_21 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = (((((arr_7 [i_0] [i_1] [3] [i_1]) != (arr_19 [i_6] [i_6] [i_1] [i_1] [i_1]))) ? ((1 ? var_5 : var_8)) : ((var_8 ? -28493 : 14269))));
                            var_18 = 13;
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_24 [5] [i_5] [i_5] [3] [5] = ((-1441364200426126516 && (18 ^ 455568417)));
                            var_19 += -16;
                            var_20 = ((+(((-32767 - 1) ? var_0 : 17005379873283425099))));
                            var_21 = (min(var_21, var_5));
                            var_22 = var_3;
                        }
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        var_23 -= (arr_2 [i_8]);
                        arr_27 [i_0] [i_0] [i_2] [6] = (max((((var_1 ? ((min(211, 29))) : 27014))), (-67 + 3211914611)));
                    }
                    arr_28 [i_1] = var_7;
                    arr_29 [i_0] [i_1] [i_0] [i_0] = 19361;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 3; i_9 < 15;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 18;i_10 += 1)
        {
            {
                arr_36 [i_9] [i_9] [i_10] = ((((max((arr_31 [i_9 - 3]), (arr_35 [i_9] [i_9 + 2] [15])))) ? (((((arr_35 [i_9] [i_9 + 2] [i_10]) <= -27469)))) : (((arr_32 [i_10] [i_9 + 2]) ? 1239548545 : (arr_31 [i_9])))));
                arr_37 [i_9] = ((-13 ? (arr_31 [i_10]) : ((var_1 | (max(var_7, (arr_30 [i_9])))))));
            }
        }
    }
    #pragma endscop
}
