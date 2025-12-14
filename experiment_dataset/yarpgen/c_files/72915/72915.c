/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, var_11));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_14 = var_12;
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 12;i_3 += 1) /* same iter space */
                    {
                        var_15 = (((arr_4 [i_2 - 1] [i_1] [i_0]) ? (var_1 > var_1) : (arr_10 [i_2 - 1])));
                        var_16 &= var_12;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_17 = var_6;
                        var_18 = (arr_5 [i_2 - 1] [i_2 - 1] [i_2 - 1]);
                        var_19 &= var_11;
                        var_20 = (((!var_10) ? (((!(arr_2 [i_4])))) : -var_2));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_21 = (arr_10 [6]);
                        var_22 = var_2;
                        var_23 = (arr_2 [i_1 + 2]);
                    }
                    var_24 ^= 65535;
                    var_25 = (!21654);
                }
            }
        }
        var_26 = (arr_12 [i_0 - 1]);
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        var_27 = (arr_17 [i_6] [i_6] [i_6] [i_6] [i_6]);
        var_28 = 1;
        var_29 = (arr_12 [i_6]);
    }
    #pragma endscop
}
