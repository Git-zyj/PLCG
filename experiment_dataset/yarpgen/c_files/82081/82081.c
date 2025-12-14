/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((~(((((var_9 ? var_1 : var_14)) > var_5)))));
    var_17 = var_10;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            var_18 *= (((max(var_7, var_15)) >= (var_8 < var_6)));
            var_19 -= (~var_11);
            var_20 -= var_5;
            var_21 = (max((var_7 >= var_7), -var_4));
            var_22 = (max(var_22, (((((max(var_1, var_1))) ? -var_0 : (var_0 < var_15))))));
        }
        /* vectorizable */
        for (int i_2 = 1; i_2 < 16;i_2 += 1) /* same iter space */
        {
            arr_6 [i_0] = ((var_8 >> (var_12 - 10987)));
            var_23 = (!var_8);
        }
        /* vectorizable */
        for (int i_3 = 1; i_3 < 16;i_3 += 1) /* same iter space */
        {
            arr_10 [i_0] [i_3] = (var_15 + var_1);
            var_24 = var_13;
            var_25 = (max(var_25, (!var_10)));
        }
        var_26 = ((-((var_3 ? var_12 : var_15))));

        for (int i_4 = 2; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 17;i_7 += 1)
                    {
                        {
                            var_27 = ((min(var_3, (var_2 == var_0))));
                            var_28 = ((-((var_4 ? var_0 : var_0))));
                            var_29 = ((!(((var_2 ? var_4 : var_3)))));
                            var_30 &= ((((min(var_1, var_3))) ? ((var_15 ? var_9 : var_8)) : ((((var_9 + 2147483647) >> (var_4 != var_3))))));
                        }
                    }
                }
            }
            var_31 = ((~((max(var_11, var_12)))));
            var_32 = (~var_6);
            var_33 = (min(var_33, ((((min(var_11, var_8)) * (var_10 < var_12))))));
        }
        var_34 = (((-(var_10 / var_8))));
    }
    for (int i_8 = 0; i_8 < 18;i_8 += 1)
    {
        var_35 = (var_9 != var_14);
        var_36 = (max(var_12, var_4));
    }

    for (int i_9 = 0; i_9 < 23;i_9 += 1)
    {
        var_37 = (~var_4);
        var_38 = ((((((var_15 + 9223372036854775807) >> var_12))) ^ ((var_2 ? var_2 : (min(var_9, var_1))))));

        for (int i_10 = 0; i_10 < 1;i_10 += 1)
        {
            var_39 = (((~var_8) ? var_14 : (var_7 < var_5)));
            var_40 = ((~(!var_12)));
            var_41 = -var_11;
            var_42 = (!var_0);
            arr_28 [i_10] = (var_6 <= var_3);
        }
        for (int i_11 = 0; i_11 < 23;i_11 += 1)
        {
            var_43 = (((var_15 + 9223372036854775807) >> (var_8 - 2302589572462646069)));
            arr_31 [i_9] [i_11] = (((var_9 ^ (var_2 | var_2))));
            var_44 = ((var_6 ? ((var_8 << (var_12 || var_10))) : (((((min(var_13, var_14))) + -var_2)))));
            var_45 *= max(((var_7 ? var_13 : var_7)), ((((((var_11 ? var_14 : var_3))) ? (!var_5) : var_6))));
            var_46 = ((max((~var_5), ((var_10 ? var_10 : var_1)))) >> ((((var_5 ? (~var_5) : ((var_6 ? var_5 : var_2)))) + 365433401)));
        }
    }
    #pragma endscop
}
