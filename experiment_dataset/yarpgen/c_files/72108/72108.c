/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_3;
    var_20 = (var_14 == var_1);

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        arr_2 [i_0] |= (!82);
        var_21 = ((((-((68 ? 26 : var_1)))) | ((~((max(var_0, (arr_0 [i_0]))))))));
        var_22 = (arr_1 [i_0] [i_0]);
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= (min(9080, (((~var_18) ? (arr_3 [i_1] [i_1]) : -5))));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 3; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 20;i_4 += 1)
                {
                    {
                        var_23 = ((((!(arr_15 [i_4] [i_4 + 1] [i_4] [i_4 - 1] [i_4] [i_4]))) ? (min((min(11601505511394821942, 2656441080)), ((((arr_14 [i_1]) <= var_4))))) : (min((max(0, 7769141358439692726)), 30))));
                        arr_16 [i_1] [i_1] [i_3] [i_4] = 3427395708;
                        arr_17 [i_4] = var_18;
                    }
                }
            }
            arr_18 [i_1] [i_1] [i_2] = (((arr_11 [i_1] [i_2] [i_1]) > (arr_8 [i_1] [i_2])));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    {
                        var_24 = var_4;
                        var_25 += (min(((((arr_3 [i_5] [i_5]) >> (((arr_14 [i_5]) ? 1 : 1))))), ((max(0, var_14)))));
                        arr_25 [i_1] [i_1] [i_1] [i_1] [i_1] [i_6] = var_18;
                        var_26 -= ((~(-31 & -8351)));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
    {
        arr_30 [i_7] [i_7] = (max(3290869877, var_7));
        var_27 = (arr_6 [i_7] [i_7] [i_7]);
    }
    #pragma endscop
}
