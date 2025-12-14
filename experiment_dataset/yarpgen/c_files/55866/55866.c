/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((((((-7407242775539452438 <= 10453226951146933651) ? (~-2632787311969795513) : 2632787311969795512))) ? var_1 : 2632787311969795512));
    var_16 = (min(var_16, (((!((((0 ? 217 : var_5)))))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_17 ^= (((((((85 >> (-204761631 + 204761643)))) ? (48926 / 38192) : 0)) * (!2632787311969795512)));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 18;i_3 += 1)
                {
                    {
                        var_18 -= max((max((min((arr_2 [i_2]), var_2)), (min(-7407242775539452456, var_4)))), var_10);
                        arr_11 [7] = (max((~7407242775539452455), (((3907073591444049799 ? 0 : 774250328)))));
                    }
                }
            }
            var_19 -= ((!((min((-9223372036854775807 - 1), -1595250169)))));
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1)
    {
        var_20 = (min(var_20, (((!(1 < 155))))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 13;i_6 += 1)
            {
                {
                    var_21 = ((123 ? (min(2632787311969795511, -32714)) : 35559));
                    arr_19 [9] [i_5] [i_5] [i_4] = 9128;
                }
            }
        }

        /* vectorizable */
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            arr_24 [i_4] [i_7] = 5;
            arr_25 [1] = ((-(!var_14)));
            arr_26 [i_4] = -8;
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            arr_29 [i_8] = (((arr_17 [i_4] [i_8] [i_4] [i_4]) ? ((19213 ? (arr_27 [i_4] [i_4]) : var_0)) : -52203));
            arr_30 [i_4] [6] |= (~(~172));

            for (int i_9 = 1; i_9 < 11;i_9 += 1)
            {
                arr_33 [i_4] [i_8] [i_9] [i_8] = ((+(((var_2 + 2147483647) << (260096 - 260096)))));
                arr_34 [i_8] [1] [i_9 + 2] = (235 & 6536);
                var_22 = -1;
            }
            arr_35 [i_8] = ((-4096 * (var_7 / -11744)));
        }
    }
    var_23 = (max(var_23, (!29966)));
    var_24 = var_5;
    #pragma endscop
}
