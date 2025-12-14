/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_19 |= -125;

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_20 = (min((((((min(-1008238055, 63))) ? (((arr_1 [i_3]) ? (arr_1 [i_1]) : (arr_2 [i_1] [i_2]))) : (~-125)))), (min((min((arr_7 [i_0] [i_0] [i_1] [i_0]), (arr_6 [i_0 - 1] [1] [6]))), var_14))));
                        var_21 &= (1 < 193);
                        arr_11 [17] [i_0] [i_0] [i_0 - 1] = (min((((41 ? var_16 : var_17))), (((189 >= (arr_1 [i_1]))))));
                        var_22 *= max((((!121) ? ((min((arr_2 [10] [10]), var_1))) : (arr_7 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_1]))), (((arr_10 [i_0 - 1] [i_0 - 1]) ? (arr_0 [18] [18]) : (arr_3 [i_0] [17] [i_2]))));
                        arr_12 [i_0] [1] [i_2] [i_2] [i_2] [i_2] = ((62 ? 349585372 : -42));
                    }

                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        var_23 = (max(var_23, (!-125)));
                        var_24 = ((var_4 == ((max(((var_9 ? var_16 : var_11)), (((arr_4 [13] [i_0]) & 1686366243)))))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        arr_21 [i_0] [i_1] [i_2] [i_5] = var_7;

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_25 = (4272655552 <= var_15);
                            arr_24 [i_0] [i_2] = (max((((~(!var_4)))), var_4));
                            var_26 ^= ((-1457764553 ? 3945381923 : 349585372));
                            var_27 = (max(var_27, (arr_18 [1] [i_1] [i_0] [12] [i_2] [1])));
                        }
                        var_28 = (arr_15 [1] [i_1] [i_0] [i_2] [1]);
                        arr_25 [10] [i_0] [i_2] [i_2] = var_3;
                        var_29 = (max(131, 3));
                    }
                }
            }
        }
    }
    var_30 = ((!((((((32763 ? 1194650167 : 2669210376))) ? ((-1457764564 ? 70368744177663 : 599053205)) : var_0)))));
    #pragma endscop
}
