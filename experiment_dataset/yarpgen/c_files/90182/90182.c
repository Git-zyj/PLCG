/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (((((max(var_5, var_1))) && (var_5 > 255))));
    var_15 = (max(var_15, (((((max((3453677657167269677 > var_9), (var_0 / var_3)))) ? var_5 : var_9)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_16 *= ((46428 ? 0 : 16527578796456987202));
        arr_3 [i_0] [1] &= 1;
        arr_4 [i_0] = ((var_12 ? 1 : (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 0))));
        var_17 = 0;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_18 = (min(var_18, ((((((~(((25 > (arr_2 [i_1]))))))) ? (arr_1 [i_1] [i_1]) : ((0 ? (arr_0 [i_1]) : (((arr_2 [i_1]) + 5)))))))));
        arr_7 [i_1] [i_1] &= 251;
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    {
                        var_19 = ((-11343 ? (max(-0, var_6)) : (max((11342 + 18446744073709551615), ((min(var_1, 233)))))));
                        arr_16 [i_4] [i_3] [i_2] [i_4] = (min((min(65535, ((49 << (((-1 + 31) - 23)))))), ((((min(126, 0))) / 19))));
                        var_20 = 0;
                        var_21 = (min(var_21, ((((~1946745994636658163) ? var_9 : (arr_6 [i_1]))))));

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            arr_19 [i_5] [i_4] [i_4] [i_4] [i_2] [i_1] = (min((arr_10 [i_1] [i_1]), ((-38 ? (min(9223372036854775807, (arr_8 [i_1] [i_3] [i_1]))) : 65519))));
                            var_22 = (min(var_22, ((((123 / 1) ? (min(7716432000487577695, 29)) : 0)))));
                            arr_20 [i_1] [i_4] [i_4] [i_4] [i_5] = (((17 * (arr_12 [i_5] [i_3] [i_1]))));
                            arr_21 [i_4] [i_4] [i_2] [i_2] [i_2] [i_4] [i_4] = (((2047 && var_3) ? ((-(0 * var_1))) : (((((min((arr_11 [i_5] [i_4]), (arr_9 [i_5] [i_5])))) ? (arr_14 [i_1] [i_4] [i_3] [i_4] [i_5]) : 1630914050)))));
                            var_23 += (((((!((1 && (arr_1 [i_1] [i_1])))))) * ((((((-44 ? var_8 : 1527151162))) && ((!(arr_11 [i_3] [i_1]))))))));
                        }
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_26 [i_6] = (min((min(2147483647, 68719476735)), (max(0, 1))));

        for (int i_7 = 2; i_7 < 14;i_7 += 1)
        {
            arr_29 [i_6] = ((~((min(64, 18446744073709551615)))));
            arr_30 [i_6] [i_7 - 2] = ((var_6 ? (max(-2010595439, var_0)) : ((((var_5 / var_5) << (((max(var_12, 32585)) - 345327072)))))));
        }
    }
    #pragma endscop
}
