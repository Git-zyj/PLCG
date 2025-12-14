/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85993
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_3;
    var_11 *= var_9;
    var_12 |= var_1;

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_13 = (min(var_13, ((((((arr_0 [10]) ? (arr_0 [6]) : (arr_0 [14])))) ? (((arr_0 [10]) ? (arr_0 [14]) : var_0)) : ((var_0 * (arr_0 [2])))))));
        var_14 -= min(8159084477364606990, 12505453759679684809);
    }
    for (int i_1 = 1; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                var_15 = (max(var_15, (min((arr_15 [i_2] [i_1 + 1] [12] [i_4] [i_1 + 1]), (((!(arr_13 [i_1 - 1] [i_1 + 1] [i_1 - 1]))))))));
                                arr_16 [i_1] [i_2] [i_3] [i_3] [i_3] = var_4;
                            }
                        }
                    }
                    var_16 ^= ((arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]) ? (min((arr_7 [i_1 + 1] [i_2] [i_3]), 18446744073709551615)) : (arr_7 [i_3] [i_2] [i_1 - 1]));
                }
            }
        }
        var_17 = ((((arr_9 [i_1 - 1] [10] [i_1 + 1]) ? 17320112458281048958 : (arr_9 [i_1 + 1] [0] [i_1 - 1]))) << (((arr_15 [i_1 + 1] [i_1 + 1] [4] [i_1 + 1] [i_1 + 1]) - 7995365787110495960)));

        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            var_18 &= min(var_9, (min((arr_13 [i_6] [i_6] [i_6]), (min(var_8, (arr_13 [i_1] [i_6] [i_1 + 1]))))));
            arr_19 [9] &= (var_0 ? ((((((arr_15 [i_1] [i_1] [i_6] [i_1] [i_1 - 1]) ? var_8 : 0))) ? (arr_8 [i_1 - 1] [i_6]) : (var_6 / var_7))) : (((arr_11 [i_1 + 1] [i_6]) * (min((arr_3 [i_1] [i_6]), (arr_3 [i_6] [i_1]))))));
            arr_20 [i_1] [11] = ((((((arr_17 [12]) << (2390045079949931924 - 2390045079949931909)))) ? (min(var_9, 14729008740222772533)) : (~var_0)));
            arr_21 [i_1] [i_6] = -var_6;
        }
        for (int i_7 = 2; i_7 < 11;i_7 += 1)
        {

            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_19 = (((var_2 <= (arr_5 [i_7 - 2] [i_1 + 1]))) ? (arr_12 [i_1] [i_7 - 1] [i_8] [i_8]) : ((var_5 ^ (arr_3 [i_1 - 1] [i_8]))));
                var_20 = (18 ? (min((arr_4 [i_1] [i_7 - 1]), (arr_4 [i_1] [i_7]))) : 5050050504811080801);
            }
            for (int i_9 = 0; i_9 < 14;i_9 += 1) /* same iter space */
            {
                var_21 = (min(var_21, var_7));
                var_22 = (((((min(var_5, (arr_22 [i_9] [i_7 + 2]))) / (arr_7 [i_9] [i_9] [i_7 + 3])))) ? (min(((((arr_15 [i_1] [i_7 + 2] [i_9] [i_9] [1]) <= 9603892251030319975))), (((arr_7 [i_7] [i_7] [i_7]) ? var_3 : (arr_25 [i_7]))))) : ((18108293392166771097 ? (arr_17 [i_1 - 1]) : (arr_17 [i_1 + 1]))));
                arr_31 [i_9] = var_9;
            }
            var_23 = (((((var_6 >= 13396693568898470804) ? ((var_2 ? var_9 : (arr_30 [i_1]))) : (min(17077618117489655081, 8055857065330094754))))) ? (((+((((arr_11 [i_1 + 1] [i_7]) < 16947664491268389631)))))) : ((2104696061150733976 | (!3905829596869767837))));
        }
        /* vectorizable */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            var_24 = var_4;
            var_25 ^= 18446744073709551612;
            arr_34 [4] [4] = arr_18 [i_1 - 1];
        }
        var_26 = var_0;

        for (int i_11 = 0; i_11 < 14;i_11 += 1)
        {
            arr_37 [i_1 + 1] [i_11] [i_11] = (+((~(min((arr_11 [i_1] [10]), var_1)))));
            var_27 = var_6;
        }
    }
    #pragma endscop
}
