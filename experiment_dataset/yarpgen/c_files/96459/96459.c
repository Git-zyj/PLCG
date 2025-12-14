/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96459
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96459 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96459
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~var_3);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 4; i_3 < 12;i_3 += 1)
                    {
                        var_18 *= (arr_0 [i_3]);
                        arr_11 [i_0 + 1] [i_1 - 2] [i_1 - 2] [i_0] = (0 || 1651133316);
                        var_19 = (min(var_19, (((max((arr_5 [i_0] [i_0 + 2]), (((arr_2 [i_1] [i_3]) ? var_0 : var_12))))))));
                        arr_12 [i_0] = var_1;
                        var_20 = -1651133317;
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        var_21 = (min(var_21, (((-1 % ((1651133317 ? 15 : 0)))))));
                        var_22 *= (((3044965485999230213 && -1777168290812288784) || ((((((arr_7 [i_0] [i_0] [i_0] [i_4]) >= (arr_10 [i_1] [i_0]))) ? (((6 ? 0 : var_14))) : ((15 ? var_8 : (arr_6 [10] [i_1] [i_2]))))))));
                        var_23 *= 48701;
                    }
                    arr_15 [i_2] [5] [i_0] [i_1 + 2] = -14;
                    var_24 = (((((-((((arr_10 [i_0] [i_0]) == (arr_5 [i_0] [i_1]))))))) ? (((((((var_2 >= (arr_0 [i_0]))))) > ((var_8 - (arr_0 [i_0])))))) : var_16));
                }
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    arr_19 [i_0 - 2] [i_0] = ((((((arr_6 [i_0 + 1] [i_0 + 2] [i_1 + 2]) ? var_5 : var_12))) ? (((arr_8 [i_0 + 2] [i_1] [i_0] [8]) + (var_9 <= 1633433892))) : (max(((-15 ? (arr_16 [i_0] [i_5]) : 54126)), ((((arr_9 [i_0 + 2] [i_1] [i_0] [i_0 - 1]) ? 4294967295 : -15)))))));
                    var_25 = (min(var_25, 1777168290812288783));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_26 = (min(var_26, var_13));
                                var_27 = (min(var_27, ((((((1777168290812288783 ? 30368 : 0))) ? (((!(arr_14 [i_1 - 1] [i_6] [i_6] [i_7] [i_6] [i_7])))) : (arr_14 [i_1 + 2] [i_1] [i_7] [i_7] [i_7] [i_7]))))));
                            }
                        }
                    }
                }
                arr_25 [i_0] [i_0] = (-1651133317 != (((arr_16 [i_1 - 1] [i_0 + 1]) ? var_4 : 62)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 0; i_8 < 15;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            {
                var_28 = (min(var_28, (((((((arr_28 [i_8] [i_9]) + (arr_28 [i_9] [i_9])))) ? var_3 : (min(1777168290812288783, -30369)))))));
                var_29 = ((((!((min(var_0, -8625811318299092485)))))));
                var_30 -= (arr_27 [i_8]);
                var_31 += ((-(((!(arr_30 [i_8] [i_9]))))));
            }
        }
    }
    var_32 = ((-((var_5 ? (var_5 / 67108863) : 0))));
    #pragma endscop
}
