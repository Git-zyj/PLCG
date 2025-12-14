/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1) /* same iter space */
                    {
                        var_19 = (~3119344274370975179);

                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            var_20 |= (!1125899906842623);
                            var_21 = (arr_12 [i_0] [i_0] [i_0]);
                        }
                        arr_15 [i_0] [i_0] [i_0] [i_0] = var_10;
                        var_22 = (max(var_22, (arr_11 [i_2 + 1] [5] [4] [i_0])));
                    }
                    for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                    {
                        var_23 = (max(((max(((2503434705 ? 2108795246 : 1125899906842601)), var_4))), 26388279066624));
                        var_24 = (max(var_24, ((max((max(17217273720756967928, 18446744073709551615)), 2503434704)))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] = (min(((max((arr_11 [i_2 + 1] [i_2] [i_2 + 1] [i_2]), (arr_11 [i_0] [i_0] [i_2 + 1] [i_5])))), 2503434704));
                        var_25 |= (min(-6182594502339763756, 0));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 10;i_6 += 1)
                    {
                        arr_21 [i_0] [i_0] [i_0] [1] = (5971 == var_0);

                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            var_26 = (max(var_26, (((!(((-(arr_14 [i_0] [7] [12] [12] [7] [i_7] [12])))))))));
                            var_27 = (((((arr_2 [i_0]) << 0)) == 4294967290));
                            var_28 = (58 & -6740);
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            var_29 = (((arr_8 [i_2] [i_2] [i_2 + 1] [11]) <= 17217273720756967928));
                            var_30 = (((arr_23 [i_2 - 1] [i_6] [i_6 - 1] [9] [i_8] [i_8]) / var_18));
                        }
                    }
                    for (int i_9 = 2; i_9 < 12;i_9 += 1)
                    {
                        var_31 = ((158 >> (30287 - 30280)));
                        var_32 = 1791532611;
                    }
                    var_33 |= (min(((4294967290 - (arr_11 [i_0] [i_0] [i_0] [i_0]))), 1));
                    var_34 = var_4;
                }
            }
        }
    }
    var_35 = var_2;
    var_36 = (min((max(-6559392006232142524, (var_4 > var_4))), 0));
    #pragma endscop
}
