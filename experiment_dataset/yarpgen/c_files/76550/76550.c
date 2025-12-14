/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_19 |= ((((max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) ? ((~((max(var_7, var_5))))) : (((((-(arr_1 [i_0])))) ? var_3 : var_9))));
        var_20 = ((!(((~((min(var_8, var_5))))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = ((((min(var_17, (arr_1 [i_1])))) ? (((!var_0) ? ((~(arr_1 [i_1]))) : -var_9)) : ((-18419 ? 1 : 1))));

        /* vectorizable */
        for (int i_2 = 2; i_2 < 8;i_2 += 1)
        {
            var_21 |= (arr_7 [i_2 - 1] [i_2]);
            arr_8 [i_1] [i_2 + 3] = ((174 ? var_3 : (arr_5 [i_1] [i_2 - 2] [i_2])));
            var_22 = ((1 ? 3958244560 : 62992));
        }
    }
    for (int i_3 = 0; i_3 < 11;i_3 += 1) /* same iter space */
    {
        var_23 = (max(var_17, (max(var_16, ((max(var_7, var_13)))))));
        var_24 = (max(var_4, (+-336722751)));

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            arr_13 [i_4] = (max(((min((arr_0 [i_4]), (arr_0 [i_4])))), (~3958244560)));
            arr_14 [i_3] [i_4] [1] = (max(((336722736 ? 3958244548 : 1)), var_0));
            var_25 = ((((max((arr_5 [1] [1] [1]), (min(var_8, var_5))))) ? (min(((0 ? (arr_9 [i_3]) : 1910446554578969364)), (((var_5 ? var_3 : var_15))))) : ((max((arr_10 [i_4] [i_3]), var_5)))));
            arr_15 [i_4] = ((-(!-26072)));
            var_26 = (arr_2 [i_3]);
        }
        for (int i_5 = 1; i_5 < 10;i_5 += 1)
        {
            arr_20 [i_3] [i_5] = (((((+(((arr_17 [i_5]) ? var_12 : var_2))))) ? (arr_5 [i_5] [i_5] [i_3]) : (~8160)));
            /* LoopNest 2 */
            for (int i_6 = 1; i_6 < 1;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_5] [i_6] [i_5] [i_5] [i_5] = (!-var_1);
                        var_27 = (-34 ? -8162 : -40);
                        arr_26 [i_5] [i_5] [i_5] = 1;
                    }
                }
            }
            var_28 = (!var_18);
        }
    }
    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
    {
        var_29 = ((~((max(-103, (arr_17 [8]))))));
        arr_29 [i_8] = ((((min(((var_1 ? -12560 : var_17)), var_6))) ? ((min(var_0, 34))) : (~var_14)));
    }
    var_30 = max(var_8, -6);
    #pragma endscop
}
