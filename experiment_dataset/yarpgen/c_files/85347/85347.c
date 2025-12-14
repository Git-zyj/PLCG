/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85347
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_4] = (((((6193500056003550181 ? 12 : -1))) ? ((((~var_8) == ((28 ? -32757 : 1))))) : ((((max(33552384, 18446744073709551615))) ? 13197 : ((min(1, 1)))))));
                                arr_18 [10] [10] [10] [i_0] = ((((((~((33 ? 233 : (arr_10 [i_0]))))) + 2147483647)) >> (14338041177620394396 - 14338041177620394369)));
                                arr_19 [i_0] [i_1] [i_2] [i_0 + 2] [i_4] [i_0] = (min(((-11 ? (arr_1 [i_0]) : ((-32744 - (arr_1 [i_3]))))), (((!(arr_9 [i_4] [i_0] [i_2 + 2] [i_1] [i_0 + 1] [i_0]))))));
                                arr_20 [i_2] [i_2] [i_0] [i_2 + 1] [i_0] [i_2 - 1] = ((((((-32767 - 1) ? 2 : 14))) ? ((-((3194425784 + (arr_6 [i_0] [i_0]))))) : var_14));
                                arr_21 [1] [1] [i_3] [i_0] = (((((18446744073709551615 ? 96 : (arr_1 [i_1 + 2])))) ? (min(var_9, 18730)) : (((3 - (arr_10 [i_2 + 1]))))));
                            }
                        }
                    }
                    arr_22 [0] [i_0] [i_2] = 233;
                }
            }
        }
        arr_23 [i_0] [i_0] = ((var_18 | ((-15 ? (arr_7 [i_0] [i_0 - 2] [i_0]) : (arr_11 [i_0 + 2] [i_0 - 2] [i_0] [i_0 + 2])))));
    }
    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 17;i_7 += 1)
            {
                {
                    arr_34 [i_7] [i_7] [6] [i_7] = ((-32750 || (arr_27 [i_6 + 2] [i_6 - 2] [i_6 + 2])));
                    arr_35 [i_5] [i_5] [0] [i_7] = 18446744073709551594;
                }
            }
        }
        arr_36 [i_5] = (max(((1 << (((-255 + 286) - 5)))), (((((((arr_27 [i_5] [i_5] [i_5]) || var_5))) < (arr_33 [i_5] [i_5] [i_5]))))));
    }
    var_19 = (max((~4108702896089157207), ((((var_4 ? 39976 : var_0))))));
    var_20 = var_15;
    var_21 = ((((((((14338041177620394398 ? var_9 : 2))) ? var_6 : 14))) ? ((var_17 + (5 % 4655))) : -var_2));
    #pragma endscop
}
