/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(var_1, ((459002359 ? var_0 : -61))))), (min((var_4 ^ var_5), (((1 ? 56742 : -37)))))));
    var_16 = (((((var_14 ? (max(var_0, var_3)) : 37))) ? (max(12998775034973469757, 7)) : ((min(var_8, (((var_13 >> (var_10 + 14)))))))));
    var_17 = (max((min((((var_11 ? var_1 : var_13))), (max(var_6, var_9)))), ((min(var_2, (~var_11))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_1] [i_0 - 1] = (((50 | 55) ? ((((((arr_6 [i_0] [11] [i_1]) ? (arr_5 [i_0 + 1] [i_1] [i_1]) : (arr_6 [i_1] [i_0] [i_0])))))) : -2805421728090514194));
                /* LoopNest 3 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((41 << ((((40 ? (arr_14 [i_4] [6] [i_1] [i_1] [i_0]) : 18446744073709551615)) - 8016582066078081735)))));
                                var_19 = (i_2 % 2 == 0) ? (max((min(18446744073709551615, -79)), ((((arr_8 [i_0 - 1] [i_2]) >> (((arr_8 [i_0 - 1] [i_2]) - 11))))))) : (max((min(18446744073709551615, -79)), ((((((arr_8 [i_0 - 1] [i_2]) + 2147483647)) >> (((((arr_8 [i_0 - 1] [i_2]) - 11)) + 77)))))));
                            }
                        }
                    }
                }
                var_20 = (max(var_20, (arr_13 [i_1] [i_1] [i_0] [i_1] [i_0])));
                var_21 = (min((max((arr_14 [13] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0 - 1]), (arr_3 [i_0 + 1]))), (((arr_3 [i_0 + 1]) * 0))));
                arr_16 [i_1] = (((arr_1 [i_1]) ? ((((((arr_10 [i_1]) ^ 4294967274))) ? (min((arr_15 [i_1] [9] [i_0] [i_0] [i_0]), (arr_12 [i_1] [i_1] [i_1]))) : (arr_14 [i_0] [i_0] [i_0] [i_1] [i_1]))) : (arr_9 [i_1] [i_0] [i_0])));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 14;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 11;i_7 += 1)
            {
                {
                    var_22 = (((702411252 & -8675472636410085032) || 307232278));
                    var_23 ^= ((((((arr_4 [i_7] [i_7 + 2] [i_7]) ? (arr_4 [i_7 + 1] [i_7 + 2] [i_7]) : (arr_4 [i_7] [i_7 + 1] [i_7 + 3])))) + (min((((4294967283 ? (arr_18 [i_6]) : (arr_19 [i_5] [i_5])))), (max(3987735017, 3987735018))))));
                    arr_24 [i_5] [i_5] [i_5] [i_5] = (((((arr_23 [i_7 + 3] [i_7 - 1] [i_7 + 1] [i_7 + 3]) ? (arr_12 [6] [i_7 + 3] [i_7 + 3]) : (arr_23 [i_7 + 1] [i_7 + 3] [i_7 + 2] [i_7 - 1])))) ? (arr_12 [6] [i_7 + 2] [i_7 - 1]) : (((min((arr_23 [i_7 - 1] [i_7 - 1] [i_7 - 1] [i_7 - 1]), -30)))));
                }
            }
        }
    }
    #pragma endscop
}
