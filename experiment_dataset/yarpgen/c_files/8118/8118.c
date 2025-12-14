/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8118
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8118 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8118
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((((-2140072551261487601 > 12417) * -1373458088))) - 3099309737742929705));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] &= ((((((9223372036854775807 ? 590902504 : 4294967295)) & (!3968))) | ((((-22144 != -195354143) | (var_15 | -12418))))));
                var_17 = var_12;
                arr_6 [i_1] [i_1] [i_0] = ((-(-2147483647 - 1)));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_18 = (((14625 < 4294967295) - (min((~2662271998), var_12))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 18;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_19 = (max(var_19, 14625));
                                var_20 = ((!((((((arr_12 [i_6] [i_5]) % 2277612738)) + ((((-22145 + 2147483647) >> (var_12 - 8694307069062623694)))))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 21;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((var_8 & 109) || var_12))))));
                                arr_27 [i_2] [i_3] [i_4] [i_7] [i_2] [i_7] [i_8] = ((((!((((arr_17 [i_2] [i_3] [i_2]) ? -597309801 : -153653471))))) ? var_6 : 3955));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] = ((-(arr_9 [i_4] [i_8])));
                            }
                        }
                    }
                    var_22 = var_8;
                    arr_29 [i_4] [i_3] = (((((5 / (-1452624902202955503 / -22142)))) ? (((~-5983958052617717640) & (0 < 3658642905))) : 2694103211));
                }
            }
        }
        var_23 = (max(0, (((!(~21956))))));
        arr_30 [i_2] = var_6;
        arr_31 [i_2] = (var_15 ? -14626 : 42131);
    }
    for (int i_9 = 2; i_9 < 10;i_9 += 1)
    {
        var_24 = var_11;
        arr_35 [i_9] = ((-((~(!10155734709427480131)))));
    }
    #pragma endscop
}
