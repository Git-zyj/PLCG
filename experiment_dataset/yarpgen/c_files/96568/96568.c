/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96568
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_15, ((((((11 ? 4222981193 : var_4))) || (((var_4 % var_3) && (var_2 << var_14))))))));

    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        var_16 *= (((((min(var_3, var_5)))) ? (var_13 ^ var_1) : ((var_9 ? var_6 : ((var_0 << (var_2 - 2103473421)))))));
        arr_3 [12] = (((-108 >= 110) >= (((((var_10 ? var_4 : var_6))) ? (~18101) : ((min(var_13, var_8)))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_17 *= (((var_1 & var_6) == 82));
            var_18 = (min(var_18, ((min((((var_6 ? var_13 : var_9))), ((var_0 ? ((max(115, 148))) : ((70 ? 56621 : 107)))))))));
            var_19 |= (((var_13 ^ var_4) - ((var_11 ? var_12 : var_4))));
        }
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (max(var_3, var_3));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 16;i_4 += 1)
            {
                {

                    for (int i_5 = 4; i_5 < 15;i_5 += 1)
                    {
                        var_20 = (max(var_20, (((((((var_1 ? var_2 : var_13)) >= (((var_4 ? var_5 : var_5))))) ? ((var_13 ? var_14 : (var_5 - var_3))) : (max(((var_10 ? var_10 : var_8)), ((var_8 ? var_9 : var_14)))))))));
                        var_21 += var_0;
                        var_22 |= (min(var_3, var_9));
                    }
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        arr_22 [i_2] [i_3] [i_4] &= ((var_7 << (var_11 - 233)));

                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            var_23 ^= (var_14 | var_8);
                            var_24 = (((var_6 != var_14) ? ((var_0 ? var_7 : var_4)) : var_3));
                            var_25 = ((((var_3 ? var_8 : var_6)) << (var_1 - 37)));
                            var_26 = (((((var_14 ? var_4 : var_0))) ? ((-59 ? 8533499 : 1707066128)) : var_2));
                        }
                        arr_25 [i_2] = ((var_6 ? var_12 : var_10));
                        var_27 ^= (var_8 || var_10);
                    }
                    for (int i_8 = 0; i_8 < 16;i_8 += 1)
                    {
                        arr_29 [i_2] [i_2] [14] [9] [i_4] [i_8] = max(var_0, ((((var_11 ^ var_6) < ((var_12 ? var_3 : var_0))))));
                        var_28 &= min(var_1, ((85 ? 165 : 2133109921)));
                    }
                    for (int i_9 = 0; i_9 < 16;i_9 += 1)
                    {
                        var_29 -= var_13;
                        var_30 = (max(var_30, ((var_12 ? var_9 : ((var_14 - (min(var_12, var_2))))))));
                        var_31 = ((((min(var_4, var_6))) ? (!var_0) : (var_5 / var_4)));
                        arr_32 [i_2] [i_2] = (!var_5);
                    }
                    var_32 |= (min((((var_4 ? var_14 : (!var_7)))), (var_2 & var_8)));
                }
            }
        }
        var_33 *= (min(((176 ? 85 : 70)), (40 != 165)));
        arr_33 [i_2] = ((((((var_9 / var_0) ? var_2 : var_9))) ? (min(((var_14 ? var_3 : var_2)), var_13)) : (((var_5 / var_2) * var_3))));
    }
    #pragma endscop
}
