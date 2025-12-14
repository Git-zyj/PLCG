/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (~var_8);
    var_13 = var_6;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((!(~13681743239299801505)));
        arr_3 [11] = (max((((((16777212 ? var_10 : 264241152)) <= ((var_3 ? var_9 : (arr_0 [i_0] [i_0])))))), (min(var_2, -1544))));
        var_14 = (((arr_1 [i_0] [13]) ? (((55769 & var_10) ? ((55767 ? var_4 : var_11)) : (-115 % var_11))) : ((55758 ? (9764 > 55771) : -112))));
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_3 = 1; i_3 < 24;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 22;i_4 += 1)
                    {
                        {

                            for (int i_5 = 1; i_5 < 22;i_5 += 1)
                            {
                                arr_19 [i_1 + 1] [i_1 + 1] [12] [i_1 + 1] [i_1] [i_1] [i_1] = var_0;
                                arr_20 [i_5] [i_4 + 1] [i_1] = (min(55768, (((max((arr_10 [i_1 - 1] [i_1] [i_1]), (arr_4 [i_5]))) * var_4))));
                                arr_21 [i_5] [i_4] [i_1] |= (((((-20064 ? 9752 : 1))) >= (856 / var_7)));
                                var_15 = (max(var_15, var_5));
                            }
                            for (int i_6 = 1; i_6 < 23;i_6 += 1)
                            {
                                arr_25 [i_1] [14] [i_2 - 1] [i_3] [i_3] [i_4 - 2] [i_6] = ((~115) ? ((max((arr_10 [i_3 + 1] [i_3] [i_3 + 1]), -264241154))) : (((arr_4 [i_1 + 1]) & (arr_4 [i_1 + 2]))));
                                var_16 = (((min(406116562507764653, ((max(-264241157, var_5))))) << ((min((-406116562507764653 != var_1), (arr_24 [i_6 - 1] [i_6] [i_6 + 1] [i_4 + 3] [i_4 + 3] [1] [i_1 + 2]))))));
                                arr_26 [i_4] [i_4 - 3] [i_4] [1] [i_4 - 2] = (arr_16 [i_1] [i_1] [i_3 - 1] [i_3 - 1] [18]);
                            }
                            var_17 = (arr_9 [i_1] [i_1] [i_1]);
                            arr_27 [i_1] [i_2] [i_3] [i_4] = 4059044261179585065;
                        }
                    }
                }
                arr_28 [i_1 + 1] [i_1] [i_2 - 1] = (arr_10 [i_2 - 1] [i_2] [i_2 - 1]);
                arr_29 [i_1] [i_2 - 1] [24] = (((((!9767) ? (arr_9 [i_1] [i_1] [i_2 - 1]) : 47424)) != (((130 ? ((max(96, 55758))) : var_3)))));
                var_18 += ((((max(55741, (arr_22 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 1])))) ? (arr_6 [i_2] [i_1]) : var_7));
            }
        }
    }
    #pragma endscop
}
