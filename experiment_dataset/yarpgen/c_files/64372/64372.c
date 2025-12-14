/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64372
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_1;

    for (int i_0 = 1; i_0 < 12;i_0 += 1) /* same iter space */
    {
        var_11 = (max(var_11, (((-((min((max(45, 23)), -1))))))));
        var_12 += ((max((!4103813275034755214), 23)));
        arr_4 [i_0] = ((!((max(-40, -12)))));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1) /* same iter space */
    {
        var_13 |= ((((min((arr_5 [6]), (!-46)))) ? (((min(-117, -61)))) : (max(var_0, ((min(var_3, var_3)))))));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 13;i_4 += 1)
                {
                    {
                        var_14 = (max(var_14, ((((~13311360694829102984) ? (((4103813275034755199 ? var_7 : 119))) : ((var_9 ? 5135383378880448632 : var_2)))))));

                        for (int i_5 = 1; i_5 < 12;i_5 += 1)
                        {
                            var_15 = ((var_6 ? (max((max((arr_1 [6]), (arr_17 [i_1]))), (((arr_14 [i_1] [i_2] [i_3] [i_4] [i_1]) ? -216645943 : var_6)))) : ((((!(arr_0 [i_1 + 1] [i_5 + 2])))))));
                            arr_19 [i_1] [i_2] [i_1] [i_4] [i_5 + 2] = ((((((!var_6) ? -3599799508 : 14342930798674796400))) ? 95 : (max(-101, (arr_0 [12] [4])))));
                            arr_20 [i_1] [i_2] [i_2] [i_3] [i_4 + 1] [i_1] [i_5 + 2] = (min((((+(max((arr_9 [i_1]), var_6))))), (max(14342930798674796389, var_2))));
                            arr_21 [7] [8] [7] [i_4] [i_1] = ((-(!0)));
                        }
                        for (int i_6 = 0; i_6 < 14;i_6 += 1)
                        {
                            var_16 = (!((max(20132, (arr_24 [i_1] [i_1] [i_1 + 2] [2] [i_1] [i_1 - 1] [i_1])))));
                            arr_26 [i_1] [6] [3] [i_4 - 1] [3] [i_4] [i_4] = (((-(max(var_1, var_9)))));
                        }
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 14;i_7 += 1)
                        {
                            var_17 = 14342930798674796389;
                            arr_30 [i_1 + 2] [6] [8] [i_1] [6] [i_7] = ((5532 ? (arr_1 [i_1 + 1]) : (!-7081)));
                        }
                        var_18 = (min(13311360694829102972, 36));
                    }
                }
            }
        }
    }
    #pragma endscop
}
