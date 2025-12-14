/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84573
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84573 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84573
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((((arr_2 [i_0] [i_0] [0]) / ((min(var_16, var_13))))), ((((!var_5) - -19639))))))));
                var_21 = 51528;
                arr_4 [i_0] [14] [i_1] = -11737;
            }
        }
    }
    var_22 += var_15;

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_7 [i_2] [10] &= (max(var_2, 2147483647));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            arr_10 [i_2] [i_3] [i_3] = ((((6244 < (32417 - 674793008))) ? (min(var_2, var_17)) : var_17));
            arr_11 [i_2] = (max(((max(var_7, 32417))), (min(var_17, var_16))));
            var_23 = (max(var_19, ((((var_1 ? var_6 : -674793011)) - 19638))));
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_24 = (min(var_24, (((!(((-3565782718712748829 ? -21294 : (arr_6 [i_4])))))))));
                        arr_17 [i_2] [i_3] [i_3] [i_2] = -5963035019264711365;
                    }
                }
            }
        }
        for (int i_6 = 1; i_6 < 1;i_6 += 1)
        {
            arr_21 [i_2] [i_6] [6] = (((+-2156088313510945542) ? -5963035019264711365 : var_5));
            arr_22 [i_6] [i_2] [i_2] = (min(2047, -5879));
            arr_23 [i_2] [i_2] [i_2] = -1;
        }
    }
    var_25 = (var_8 + var_1);
    var_26 = (min(var_26, (-1 - 2889)));
    #pragma endscop
}
