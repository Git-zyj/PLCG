/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_1;

    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        var_17 = (arr_0 [i_0]);
        var_18 = var_14;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_19 -= ((109 ? 127 : 114));
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 3; i_3 < 10;i_3 += 1)
            {
                {
                    arr_11 [i_1] [i_1] [i_1] = (((arr_2 [i_1] [0]) * -112));
                    var_20 += (arr_2 [i_2] [7]);
                }
            }
        }
        var_21 += ((30624 ? 127 : -117));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            {

                /* vectorizable */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_22 = ((-(!var_7)));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                arr_24 [i_8] [23] [i_5] [8] = (((116 ? var_9 : 117)));
                                var_23 ^= (((((3971937935403347403 ? var_6 : (arr_15 [i_4] [15] [i_4])))) ? (arr_16 [i_4]) : var_7));
                            }
                        }
                    }
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    var_24 = (max(((((min(var_3, (arr_25 [i_9])))) ? (((max(124, var_13)))) : (min(var_10, 16697547759880575283)))), ((((-30293 + (arr_22 [18] [i_4] [24] [13] [i_5] [1] [24])))))));
                    var_25 = ((!((!(((arr_19 [i_4] [24] [i_4] [i_4] [i_4] [24]) && 4294967276))))));
                }
                var_26 = (max(var_26, var_12));
                arr_27 [i_4] [i_5] [i_5] = ((0 ? ((max((arr_19 [i_4] [i_4] [i_5] [i_5] [i_4] [i_5]), var_13))) : (arr_20 [i_4] [i_4] [6] [i_4])));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    var_27 += (!-var_3);
                    arr_30 [i_4] [i_4] [i_4] [1] = var_11;
                    var_28 = var_3;

                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        arr_34 [i_4] [i_5] [19] [18] = ((18446744073709551597 ? var_10 : (arr_28 [i_5] [i_4])));
                        var_29 -= (((arr_16 [i_11]) != var_14));
                    }
                }
            }
        }
    }
    var_30 = ((var_14 ? (((((var_13 ? -36 : var_10))) + (max(var_11, -43)))) : (((var_4 ? (var_15 < var_7) : (var_0 >= var_15))))));
    #pragma endscop
}
