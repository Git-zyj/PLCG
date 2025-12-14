/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95410
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_1 ^ ((1 % ((4954048144911261907 >> (var_3 + 1266574273)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_8 [i_0] [i_1] [i_0] = 1;
                var_16 = (min(var_16, (1 != 1)));
                var_17 = ((((((1 && 1) >> (1 == 867645835)))) ? ((((((arr_7 [i_0] [i_0]) * (arr_1 [i_0] [i_0])))) ? ((max(var_7, var_9))) : (min(var_3, var_10)))) : (arr_3 [i_1])));
                arr_9 [i_0] [i_0] [i_0] = (min((((arr_0 [i_0]) ? var_0 : (arr_0 [i_0]))), (arr_3 [i_0])));
            }
        }
    }

    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        arr_12 [i_2] = (((var_14 ? var_6 : var_14)));
        var_18 &= ((var_14 + (((!1) ? (!1) : 5460836528249355376))));
        arr_13 [i_2] = 1;
        var_19 = (arr_10 [i_2 + 2] [16]);
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 17;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_23 [i_2 - 1] [i_3] [i_3] [i_3] [i_3] = var_2;

                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            arr_27 [9] [i_2 - 2] [i_4] [i_3] = ((((((var_12 == var_11) ? (arr_24 [i_4 + 3] [i_5 - 1]) : ((var_12 << (var_1 - 1553660959)))))) ? (max((((1 ? var_2 : 1))), -5460836528249355376)) : (arr_26 [i_2] [i_2] [i_2] [i_3] [16] [16])));
                            arr_28 [i_2] [i_2] [i_3] [i_4] [i_3] [i_6 - 1] = var_13;
                            var_20 = var_11;
                        }
                        arr_29 [i_2] [i_2] [i_4] [i_3] [i_4] = var_13;
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 14;i_7 += 1)
    {
        arr_32 [i_7] = (arr_6 [i_7] [i_7 + 1] [i_7 - 1]);
        var_21 = (var_0 & var_12);
        var_22 = 1;
        var_23 = (var_14 ? var_10 : (arr_20 [i_7] [i_7 + 1]));
        var_24 = (!1);
    }
    for (int i_8 = 0; i_8 < 23;i_8 += 1)
    {
        arr_36 [i_8] [i_8] = (~var_3);
        var_25 = ((+((max((arr_34 [10]), (arr_34 [i_8]))))));
        var_26 &= arr_33 [i_8];
        arr_37 [i_8] = (((((var_14 ? (arr_34 [i_8]) : (arr_33 [i_8])))) >= (max((max(var_11, -5460836528249355377)), ((max(var_0, (arr_33 [i_8]))))))));
        var_27 = ((((((867645835 > -5460836528249355385) ? ((((arr_35 [i_8] [i_8]) ? 6 : var_14))) : var_5))) ? ((((arr_34 [i_8]) ? (arr_33 [i_8]) : (arr_34 [i_8])))) : 1));
    }
    #pragma endscop
}
