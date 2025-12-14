/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1 + 1] [i_0] = ((((((((arr_4 [i_0] [i_1]) & var_17))) ? (1 < 520198201809564993) : (((arr_1 [i_1]) ? (arr_3 [i_0] [i_0] [i_1 - 2]) : 1)))) >= (17162 < var_4)));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        {
                            var_21 = 1;
                            var_22 = 7;
                            arr_12 [i_2] [i_1 - 2] [i_2] [i_1 - 2] [i_1 - 2] [i_2] = ((var_17 ? (min(((var_1 & (arr_2 [i_0]))), ((min(1, 1))))) : ((((!((((arr_7 [i_0] [i_1] [i_0] [i_2]) & (arr_10 [i_0] [i_0]))))))))));

                            for (int i_4 = 0; i_4 < 12;i_4 += 1)
                            {
                                var_23 = (min(var_23, (((((max((!var_6), (((arr_3 [i_0] [i_0] [i_2]) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_13 [i_0] [i_0] [i_0] [i_0] [i_4])))))) ? ((((0 < (var_5 & 1))))) : -23254)))));
                                var_24 = -33552384;
                                var_25 = ((((arr_11 [i_2 + 1] [i_2 - 3] [i_2 - 1] [i_2 + 3]) ? (arr_11 [i_2] [i_2 + 3] [i_2] [i_2 - 3]) : (arr_11 [i_2] [i_2 + 3] [i_2 + 1] [i_2]))));
                            }
                            var_26 = 1356165596969327798;
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_20 [i_5] [i_5] |= 2251799813685248;
        var_27 = 1750454701;
    }
    for (int i_6 = 3; i_6 < 10;i_6 += 1)
    {
        var_28 *= (min((18446744073709551609 & 1), ((max((min((arr_13 [i_6] [i_6 - 2] [i_6 + 1] [i_6] [i_6 + 1]), (arr_7 [i_6] [i_6] [i_6 - 2] [6]))), (!var_7))))));
        var_29 = ((~(!var_19)));
    }
    var_30 &= 1;
    #pragma endscop
}
