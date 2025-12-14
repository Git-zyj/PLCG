/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75358
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75358 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75358
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 0;
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [i_1] [4] [i_3] = var_11;
                        var_14 ^= (((((+(max((arr_8 [i_0] [i_1 + 1]), (arr_7 [3] [i_2])))))) ? (((((arr_9 [i_0] [i_3] [i_2] [i_2]) > -5235005614505678174)) ? -7642 : (max((arr_7 [8] [i_1]), -8174)))) : (((var_0 ? ((max(var_13, (arr_1 [i_0] [i_1])))) : (((1 == (arr_0 [i_3] [i_0])))))))));
                    }
                }
            }
        }
        arr_11 [i_0] = (((((1 > (((((arr_6 [i_0] [i_0]) || (arr_7 [2] [i_0])))))))) > (min((max(16383, -574993305)), ((0 ? 1 : -2552))))));
        var_15 = var_12;
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 22;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {

                        for (int i_8 = 1; i_8 < 21;i_8 += 1)
                        {
                            arr_27 [i_4] [i_5] [i_6] [1] [i_8] = 7642;
                            var_16 = var_11;
                        }
                        var_17 ^= ((((-17571 ? 3169456651949122107 : 173)) + ((3169456651949122107 - (arr_21 [i_4 - 2] [i_4 + 2] [i_4 + 2])))));
                        var_18 = ((524287 ? (max((min(5235005614505678174, 7658)), 713277672)) : 7641));
                        var_19 = var_13;
                    }
                }
            }
        }
        arr_28 [i_4] = (min((((((-5094862737898221194 ? 2557 : -2559))) ? ((((!(arr_17 [i_4]))))) : (((arr_25 [i_4] [i_4] [i_4] [i_4] [i_4]) ? 8581520247096565182 : (arr_15 [i_4] [i_4]))))), (((var_13 || ((max(-8581520247096565183, var_11))))))));
        var_20 = (arr_13 [i_4]);
    }
    for (int i_9 = 2; i_9 < 18;i_9 += 1) /* same iter space */
    {
        arr_32 [i_9] [i_9 + 4] = (min(((min((min(var_7, 574993305)), (var_5 || var_0)))), 10));
        var_21 = ((((((((arr_25 [i_9 + 3] [i_9 - 1] [i_9] [i_9] [i_9]) | (arr_30 [i_9])))) == 2145010040152112523)) ? (((((1 >> (255 - 233))) != (((3169456651949122107 > (arr_18 [i_9] [i_9] [i_9] [14]))))))) : (((5235005614505678173 != 15277287421760429509) % (arr_13 [i_9 - 1])))));
        arr_33 [i_9] [i_9] = (min(130, (arr_20 [i_9])));
        var_22 = ((max(((min(-2044596527, 1))), (422705978 * 0))));
    }
    var_23 = ((((((-29743 | var_3) ? ((var_4 ? 255 : var_9)) : (var_9 / var_12)))) ? ((min(var_5, (max(var_0, -5117))))) : (303403709 == var_9)));
    #pragma endscop
}
