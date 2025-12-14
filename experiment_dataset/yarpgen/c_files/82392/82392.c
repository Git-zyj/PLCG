/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_11 = (arr_6 [i_0]);
                    var_12 = (min(var_6, (((1876098310 ? (arr_1 [i_0 - 2]) : (arr_7 [i_0 - 2] [0] [i_0 + 1] [i_0]))))));
                }
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_13 ^= (((!var_0) >= ((((-(arr_8 [i_1]))) ^ ((((arr_6 [i_0]) - (arr_4 [i_1]))))))));
                    arr_12 [i_0] [i_1] [i_3] = (max((((var_4 - var_10) / (((((arr_0 [i_0]) && var_7)))))), (((var_6 ? (max(var_5, var_9)) : (var_0 && var_0))))));
                    var_14 -= ((~(min((~92), (!var_4)))));

                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        var_15 = ((18446744073709551602 - ((((1876098323 - (arr_9 [i_0])))))));
                        arr_15 [3] [i_1] [i_0] [i_4] = (min((-5 * -1463043604), (((-(arr_11 [i_0 - 2] [i_4] [i_4]))))));
                        var_16 = ((61478 ? (arr_5 [i_1] [i_3] [i_1]) : ((~(arr_2 [i_0])))));
                        arr_16 [i_3] [i_0] [i_0] [i_1] [i_4] = (((((((((arr_14 [i_0] [5] [i_3] [i_4]) < 0)))) - (arr_7 [i_4] [i_4] [i_4] [i_0]))) - ((max(22701, (max(var_2, (arr_3 [i_0]))))))));
                    }
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_17 ^= ((~((((!-1876098298) == (min(3, 1876098321)))))));
                        var_18 -= arr_6 [i_3];
                    }
                    for (int i_6 = 0; i_6 < 18;i_6 += 1)
                    {
                        var_19 *= (((!1876098310) ? ((max(((max(var_5, (arr_4 [8])))), var_9))) : (min(((min(var_4, (arr_21 [i_6] [i_3] [i_1] [6])))), (var_6 + var_3)))));
                        arr_24 [i_0 + 1] [i_0] [i_1] [i_3] [i_6] = ((var_5 ? (min(250, var_9)) : (((((((var_5 + 2147483647) >> (var_5 + 30)))) || var_8)))));
                    }

                    for (int i_7 = 4; i_7 < 17;i_7 += 1)
                    {
                        var_20 ^= ((((((((arr_7 [i_1] [i_3] [i_0 - 2] [i_1]) + 53548))) / ((var_8 ? var_6 : var_1))))) ? var_6 : ((((((arr_2 [i_1]) != (arr_1 [i_3]))) ? var_1 : ((max((arr_21 [i_0] [i_1] [i_0 + 1] [i_1]), (arr_3 [i_1]))))))));
                        var_21 ^= (min(((((~(arr_9 [i_0 + 1]))) >= (((max(53548, -10036)))))), (((!var_1) == (!var_3)))));
                    }
                }
                var_22 = ((-((~(arr_4 [i_0])))));
                var_23 = ((((max(var_9, (min(var_4, var_2))))) ? ((((max(var_9, (arr_26 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1]))) <= (max((arr_25 [i_0]), (arr_19 [i_1])))))) : (((!33) ? (min(2147483646, (arr_23 [i_0 - 2] [3] [i_1] [i_1]))) : (!var_0)))));
            }
        }
    }
    var_24 = ((!(((var_5 ? (max(-1953337802, var_0)) : ((var_1 ? var_5 : var_10)))))));
    var_25 ^= ((((((!(var_7 || var_1))))) >= (min((((22701 ? var_9 : var_1))), var_7))));
    #pragma endscop
}
