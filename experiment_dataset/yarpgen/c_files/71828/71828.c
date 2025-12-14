/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71828
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -512;

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_8 [i_0] [i_1] = (min((var_4 && var_4), 1160273621));
            arr_9 [i_0] [i_0] [i_1] = ((-(min((min(1160273618, 8072217925676240642)), ((min(var_6, 1096)))))));

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                arr_13 [i_0] [i_1] [i_1] [i_2] = (((((min(1082, 511)) ? (-2147483647 - 1) : (1 >= var_8)))));
                arr_14 [i_2] [i_1] [i_2] [i_2] = (min(3134693668, ((max(1, var_0)))));
            }
            arr_15 [i_0] [i_1] = (!161);
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            var_15 = (min(var_15, (!22)));
            arr_18 [i_0] [i_3] [i_3] = ((var_10 == ((1160273630 ? var_3 : var_14))));
            var_16 = var_1;
            arr_19 [i_3] [i_3] [i_0] = 161;
        }
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {

        for (int i_5 = 0; i_5 < 10;i_5 += 1)
        {
            var_17 += (min(1, (max(-512, -5))));
            arr_24 [i_4] = 122;
            var_18 = 52;
        }
        var_19 = (max(var_19, ((((min((!1), (14820858343967457755 != -16))) ? (((-(1 * 6943091931023439667)))) : (min(-3, (var_14 / 14765579660938243497))))))));
    }
    var_20 = (max(var_20, (((((min(var_3, (min(-24, var_8))))) + 65535)))));
    var_21 = ((-(((min(14820858343967457755, 6943091931023439667)) % -var_9))));
    var_22 = ((-26268 < ((15 ? (var_6 & -1479341216) : ((max(231, 1)))))));
    #pragma endscop
}
