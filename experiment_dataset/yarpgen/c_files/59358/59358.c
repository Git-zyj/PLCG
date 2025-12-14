/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_3, var_2));
    var_17 = (min(var_17, (((var_11 >> (var_3 - 11635942378654566425))))));
    var_18 |= ((var_10 ? var_15 : var_9));

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_19 = var_4;
        var_20 = ((max(((1 ? 56 : (arr_1 [i_0]))), (3715412428 == var_12))));
        arr_2 [i_0 - 1] |= -11239;
    }
    for (int i_1 = 0; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            var_21 = var_4;
            var_22 |= ((arr_6 [i_1]) != (arr_3 [i_2 + 2]));
            var_23 = var_12;
            var_24 = (min(var_24, (((0 ? (arr_5 [i_2 + 2] [i_1]) : (arr_5 [i_2 + 2] [i_1]))))));
        }
        for (int i_3 = 0; i_3 < 12;i_3 += 1)
        {
            arr_11 [i_1] = (var_7 == 2893458037);
            var_25 = ((+((-((max((arr_8 [i_3] [i_1]), var_12)))))));

            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                var_26 = ((!((((arr_14 [i_4] [i_4 + 3] [i_4 + 3]) ? var_9 : 2044)))));
                arr_16 [i_1] [i_1] [i_1] [i_1] |= ((~2019) ? (max(18446744073709551598, (arr_12 [i_4] [i_4 - 1] [i_4 + 2]))) : ((((!(arr_12 [1] [i_4 - 1] [i_4 + 2]))))));
                /* LoopNest 2 */
                for (int i_5 = 3; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_27 -= min(((~((~(arr_8 [7] [7]))))), var_14);
                            var_28 = max((max((max((arr_8 [i_1] [11]), (arr_13 [0] [i_3]))), ((min(2019, var_13))))), (~var_15));
                        }
                    }
                }
            }
            for (int i_7 = 2; i_7 < 10;i_7 += 1)
            {
                var_29 = (min(((min(var_9, (min((arr_18 [i_1] [i_1] [i_1] [i_1]), var_2))))), ((max(32767, -2020)))));
                var_30 = ((34489 ? -1 : (((arr_5 [i_7] [i_7 - 1]) ? (-32767 - 1) : var_2))));
                var_31 *= ((((max(210, (min((arr_4 [i_7]), var_3))))) || (arr_8 [i_3] [i_1])));
                arr_23 [i_1] [i_3] [i_7] = ((!(((~var_7) == 13508137055014474210))));
            }
            var_32 = (min((arr_13 [i_3] [i_1]), (((!(-9223372036854775807 - 1))))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 12;i_8 += 1)
        {
            var_33 = (max(var_33, ((((arr_20 [i_8] [i_1]) ? (arr_27 [i_8]) : -2045)))));

            for (int i_9 = 1; i_9 < 10;i_9 += 1)
            {
                arr_30 [i_9 + 2] [i_8] [i_1] = ((-76 ? -80 : (arr_21 [i_9 + 2] [i_9 + 1] [i_8])));
                var_34 = (min(var_34, (arr_25 [i_8])));
            }
        }
        arr_31 [i_1] = ((((min(var_10, 32767))) >= ((((62813 ? 2733 : (arr_22 [i_1])))))));
        var_35 = (((((var_13 ? (arr_14 [i_1] [i_1] [i_1]) : (((max(28, (arr_10 [i_1] [i_1])))))))) ? ((min((arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]), 28))) : (6 ^ var_3)));
    }
    #pragma endscop
}
