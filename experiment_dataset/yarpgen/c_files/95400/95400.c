/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = ((((((-1 <= 2603671750) ? (var_4 * var_12) : -var_7))) ? (((((var_5 ? var_12 : var_0))) ? var_12 : var_11)) : -var_11));
                var_17 = (((!1) ? 6462180749710641973 : (((var_11 ? var_14 : var_11)))));

                for (int i_2 = 2; i_2 < 9;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        var_18 = ((((var_11 ? var_0 : var_9)) | var_11));
                        var_19 = ((((((var_14 ? var_9 : var_14)))) ? (((var_0 ? var_12 : var_4))) : ((var_9 ? (var_5 & var_13) : (-104 ^ 589579499)))));
                        var_20 = ((!(var_8 && var_10)));
                        var_21 = (+((45044 ? (-127 - 1) : ((-119 ? 9 : -1618549833)))));
                    }
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        var_22 = (((var_1 >= var_5) && (var_9 || var_13)));

                        for (int i_5 = 1; i_5 < 10;i_5 += 1)
                        {
                            var_23 += ((2603671757 >= ((var_5 ? var_9 : var_6))));
                            var_24 = (~-32);
                        }
                        var_25 = (((var_1 / (~var_8))));
                    }
                    var_26 = (((~var_4) ? ((var_7 ? var_4 : var_5)) : var_2));
                }
                for (int i_6 = 0; i_6 < 1;i_6 += 1)
                {
                    var_27 = (var_7 ^ (var_5 / var_0));
                    var_28 += (var_8 >= var_0);
                    var_29 = -var_8;
                    var_30 = (min(var_30, ((((-2147483621 ? 9703068284839237566 : 2803984429))))));
                    var_31 = ((var_1 ? (((var_12 ? var_7 : var_0))) : ((var_11 ? var_6 : var_6))));
                }
                for (int i_7 = 0; i_7 < 11;i_7 += 1)
                {
                    var_32 = (((((((var_6 ? var_0 : var_10))) ? (var_13 / var_0) : var_11)) >= ((-(var_10 <= var_2)))));
                    var_33 &= (-var_14 / (((((var_2 ? var_1 : var_7))) - (~var_10))));
                }
            }
        }
    }
    #pragma endscop
}
