/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76270
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76270 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76270
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 += var_12;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (1 + 58504);
        arr_4 [i_0] [i_0] = ((-(!var_10)));
        var_17 = (min(var_17, (((((18572 ? 1 : 703999610030965925))) && (!var_5)))));
    }
    for (int i_1 = 4; i_1 < 20;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_18 = (((var_3 / var_15) ? (1 & -690086881) : (var_8 ^ 874854333)));
            arr_9 [i_1] = ((var_9 != (((var_2 ? var_3 : var_10)))));
            var_19 *= ((-((1 ? var_15 : 192))));
        }
        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_20 = (arr_8 [i_3]);
            var_21 += var_7;
            var_22 = ((var_12 ? (arr_11 [i_1 - 2] [i_1 + 2]) : (min(((var_2 >> (var_4 - 14046472753898978720))), ((min(1, -16996)))))));
            arr_13 [i_1 + 1] [i_3] = ((var_12 ? (min(5886570843534676312, ((var_2 ? 26548 : var_1)))) : ((((690086881 | var_0) ? 0 : var_15)))));
        }
        arr_14 [0] [i_1 + 1] = -6000388068106095413;
        var_23 = (~(max((min(1036, -5886570843534676306)), (var_3 + 18572))));
        arr_15 [i_1] = ((((min(((var_6 ? -6856085285675734463 : 1)), (arr_8 [i_1 + 2])))) | ((var_10 ? (min(var_11, var_7)) : (((22086 ? (arr_8 [i_1]) : 141)))))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 0;i_4 += 1)
    {
        var_24 *= (((-937335903364156329 + 9223372036854775807) << 0));
        var_25 *= var_0;
        arr_18 [i_4] [i_4] &= (arr_11 [i_4 + 1] [i_4 + 1]);
    }
    #pragma endscop
}
