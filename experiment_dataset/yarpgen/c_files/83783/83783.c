/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83783
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83783 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83783
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_4 [i_0] = (min((((!1) ? var_5 : var_10)), var_6));
        var_19 = ((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : 8454074879166452158))) ? ((1099511627775 ? (arr_2 [i_0] [i_0]) : 1811384958)) : (((((((arr_0 [6] [6]) || var_13)) || 151))))));
        arr_5 [i_0] [i_0] = var_12;
        var_20 = (max(var_20, -var_5));
        arr_6 [i_0] [16] = ((((((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        arr_11 [i_1] &= ((var_1 ? 60 : 1464599187089519206));
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    {
                        var_21 = (((arr_18 [i_3]) ? (arr_18 [i_3]) : var_6));

                        for (int i_5 = 2; i_5 < 21;i_5 += 1)
                        {
                            var_22 *= 16982144886620032402;
                            var_23 *= -var_0;
                            var_24 = (min(var_24, var_4));
                        }
                    }
                }
            }
        }
        var_25 = 488264189641973430;
    }
    for (int i_6 = 0; i_6 < 21;i_6 += 1)
    {
        arr_27 [i_6] &= ((-(!1)));
        arr_28 [i_6] = (max((max(var_3, ((var_10 ? (arr_16 [i_6] [i_6] [i_6]) : 4305928973375899964)))), ((((arr_22 [23] [i_6] [i_6] [i_6] [i_6]) ? var_12 : (arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
        arr_29 [i_6] = 1;
        arr_30 [i_6] &= (2721193012 - 29);
        var_26 = (min(var_26, (((!(arr_22 [i_6] [i_6] [i_6] [i_6] [i_6]))))));
    }
    var_27 = var_2;
    var_28 = var_3;
    var_29 = (var_16 <= 1);
    var_30 &= 110;
    #pragma endscop
}
