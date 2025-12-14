/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_17 -= ((-64 ? -3888 : 69));
        var_18 = (min(var_18, 2626113428));
        var_19 |= -1;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_20 |= var_13;
        var_21 -= ((((max((!var_2), ((3319608346 ? (-2147483647 - 1) : (-2147483647 - 1)))))) ? ((7027267920987028565 ? -87 : 6027508791468658405)) : 32132));
        var_22 -= (((!1) % var_9));

        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            var_23 = (min(var_23, (max((((arr_6 [i_2 + 1] [i_2 + 2] [i_2 + 1]) ? var_6 : (arr_5 [i_2 + 2] [i_2 + 1]))), ((((max((arr_1 [i_1]), 2147483647))) ? (arr_2 [i_1]) : (max(1, var_4))))))));
            var_24 = (min(var_24, ((max((arr_3 [i_1]), var_6)))));
            var_25 |= (--4294967295);
            var_26 -= ((((((arr_3 [i_2 - 2]) + 11))) ? (((!(arr_3 [i_2 + 1])))) : ((1 ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 2])))));
        }
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            var_27 = (min(var_27, ((max((-1 || var_15), ((((0 || (arr_7 [i_3] [i_1] [i_1]))) && ((((arr_7 [i_3] [i_1] [i_1]) ? var_8 : 0))))))))));
            var_28 -= ((((4294967295 ? var_14 : var_12))));
        }
        var_29 ^= (((arr_1 [i_1]) > -1));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 15;i_4 += 1)
    {
        var_30 = (min(var_30, 13947));
        var_31 += var_3;
        var_32 = (max(var_32, (~2147483634)));

        for (int i_5 = 0; i_5 < 15;i_5 += 1)
        {
            var_33 += (~var_6);
            var_34 *= (arr_5 [i_4] [i_5]);
            var_35 = (min(var_35, (((!(arr_5 [i_5] [1]))))));
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        var_36 *= (~-5333604234527606218);
                        var_37 -= 65;
                    }
                }
            }
            var_38 |= (((((arr_7 [i_5] [i_4] [i_4]) % var_7)) > 2337420943771833473));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            var_39 += ((~(~65515)));
            var_40 = -7626089485412824131;
            var_41 -= var_7;
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            arr_22 [i_4] [i_9] &= (((var_16 ? var_5 : (arr_0 [i_4]))));

            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                var_42 = (min(var_42, var_7));
                var_43 -= (((1 != var_16) != (arr_5 [i_4] [i_9])));
                var_44 ^= (((72 > 309047900) != var_11));
            }
            var_45 -= (-1 ? (var_1 & 134) : var_10);
            var_46 |= var_4;
        }
        var_47 += ((!(arr_12 [i_4] [i_4])));
    }
    var_48 ^= (min(((!(var_7 % var_10))), (max((!-1715717196), var_14))));
    var_49 += (((8322734840762288390 / -1478891283) - var_2));
    var_50 *= 1;
    #pragma endscop
}
