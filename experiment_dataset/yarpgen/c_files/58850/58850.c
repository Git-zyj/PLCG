/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_14 = (min(var_14, (arr_5 [6] [i_0])));

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_15 *= 325782749;
                    var_16 = ((((var_1 ? (var_0 | 4294967295) : (~5)))) ? (((((-32745 ? 4095 : 1)) >> (170872407 - 170872379)))) : (((((3038265729391398988 >> (-1 + 42)))) ? (arr_5 [3] [i_1]) : (max(2794215688111955618, 63)))));
                    arr_10 [i_1] = var_12;
                    arr_11 [i_1] [i_0] [i_1] = 1519465587;
                }
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        arr_17 [i_1] [i_1] = var_5;
                        var_17 += ((102 & (max(((((arr_12 [i_0] [i_1] [i_0] [i_0]) || 1503544247))), (arr_13 [i_0] [i_1] [i_3] [i_4])))));
                    }
                    arr_18 [15] [i_1] = ((-((var_4 ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1])))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_23 [i_0] [i_1] [i_5] = ((((((-30317 + 2147483647) >> (var_11 - 1569326622)))) % 18446744073709551615));

                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {

                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            arr_30 [i_1] = var_5;
                            var_18 = ((!((!((((arr_22 [i_1] [i_6]) ? 125 : var_0)))))));
                            var_19 = ((((((arr_3 [i_1]) ^ (arr_3 [i_1])))) ? (((var_1 << ((((arr_5 [i_0] [i_1]) >= 4294963201)))))) : (((!var_2) & ((var_7 ? var_10 : var_0))))));
                            arr_31 [1] [1] [i_1] [1] = (((((var_3 >= 3648742940) != (~14659))) && var_10));
                        }
                        var_20 = -83;
                        arr_32 [i_0] [i_1] [i_5] [1] = (((((~((102 ? 38 : 163))))) >= ((-((-2968 ? var_5 : 4294967295))))));
                        arr_33 [i_1] [11] [i_5] [i_5] [i_5] = (((((109 / ((var_6 ? var_12 : (arr_16 [i_0] [i_1] [i_1] [i_5] [i_6])))))) | var_6));
                    }
                }
            }
        }
    }
    var_21 = 2250579260;
    #pragma endscop
}
