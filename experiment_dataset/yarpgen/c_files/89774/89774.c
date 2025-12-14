/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_4 < (var_3 & -1319262206)));
    var_16 = (min(((((~24) % var_11))), (((~var_14) ? (!119) : (max(1570284565, var_14))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = 4097;
                    arr_8 [i_0] [i_1] [i_2] [8] = (min(((0 ? (((1 ? 1570284566 : 73))) : ((var_14 ? var_5 : (arr_6 [i_0] [i_0] [i_2] [i_2]))))), (((((((arr_3 [i_1]) ? 18446744073709551609 : -32762))) || ((1 || (arr_4 [i_1]))))))));
                    var_17 -= (max(38493, 7425693051973257036));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_18 = ((-((max((var_2 || var_2), var_4)))));
                                var_19 = (max(var_19, ((((!138) ? var_6 : var_11)))));
                                var_20 ^= -122;
                                arr_13 [i_4] [i_3] [i_3] [i_0] [i_0] = (max((arr_11 [i_0] [i_1] [i_3] [i_3] [i_4]), (arr_1 [i_0] [3])));
                            }
                        }
                    }

                    for (int i_5 = 4; i_5 < 12;i_5 += 1)
                    {
                        var_21 = var_8;
                        var_22 = (57 ? (max((((var_4 ? var_4 : var_1))), (min((arr_6 [i_0] [i_1] [6] [i_1]), 1570284565)))) : -1);
                        arr_16 [i_5] [i_5 + 2] [i_5 + 2] [i_5 - 2] [i_5 - 3] = ((3753 ? ((~(arr_4 [i_5 + 1]))) : ((max(((min(var_13, (arr_3 [6])))), (max(var_2, 60333)))))));
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 1;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            {
                var_23 = (arr_1 [i_6] [i_7]);
                var_24 = ((((2718641273 ? var_4 : (arr_10 [i_6 - 1] [i_7])))) - ((5221 ? (((arr_12 [i_6] [i_6]) ? 3146422756 : var_7)) : (((~(arr_21 [9] [5] [i_6])))))));
                var_25 *= (max(-1570284591, 2323976661766452926));
            }
        }
    }
    var_26 = ((var_3 % (((((270644530 ? 113 : var_3))) ? 29675 : ((var_11 ? var_3 : var_4))))));
    #pragma endscop
}
