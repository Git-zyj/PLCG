/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62740
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 ^= (((-94 + 2147483647) << (1 - 1)));
    var_15 = var_9;
    var_16 = var_6;
    var_17 = (81 > -var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_18 = (min((max(((max(var_8, 31))), 9223372036854775783)), var_5));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    var_19 = (arr_3 [i_0 - 1] [i_0 - 1]);
                    arr_8 [i_1] [i_0] [i_1] [i_2] &= ((arr_7 [i_0] [i_1] [i_0] [i_0 + 1]) + (arr_7 [i_0] [i_1] [i_1] [i_1]));
                }
                for (int i_3 = 0; i_3 < 17;i_3 += 1) /* same iter space */
                {
                    var_20 = (max(var_20, ((max(((((arr_11 [i_1]) != 653274308))), ((min(42, 10384710943104923449))))))));
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            {
                                var_21 = var_1;
                                arr_17 [i_0] [i_0] [i_0] [i_4] [i_4 + 1] [3] = (arr_7 [i_0] [i_0] [i_0 + 1] [i_0 + 1]);
                                arr_18 [i_0] [i_0] [i_3] [i_3] [i_4] [i_0] [i_5] = (((arr_1 [i_4]) % 31));
                                arr_19 [i_0] = (((((((~1694945970) != (62971 + var_8))))) * (max(var_0, (-1694945971 <= var_6)))));
                                var_22 = (max(var_22, (((((max((max(var_1, var_5)), (((~(arr_2 [i_4]))))))) ? var_10 : (~2147483648))))));
                            }
                        }
                    }
                }
                for (int i_6 = 0; i_6 < 17;i_6 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 15;i_8 += 1)
                        {
                            {
                                var_23 = (min(var_23, -653274308));
                                var_24 = var_3;
                                arr_29 [i_0] [i_0] [i_6] [i_7] = 8062033130604628197;
                            }
                        }
                    }

                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        var_25 = (min(((min(var_6, var_8))), ((~(-1 || var_13)))));
                        arr_33 [i_1] [2] [i_9] [i_1] [i_0] |= (min((((-366443093 + (arr_6 [i_1])))), (((~var_10) ? 10384710943104923449 : 1))));
                        var_26 = (((((var_6 ? var_13 : (arr_22 [i_0] [i_0] [8] [i_0 + 1])))) && (!var_9)));
                    }
                }
                var_27 = (((((var_5 ? -var_5 : var_4))) ? (max((-8633376437434919398 + var_0), -1)) : ((max(28, (var_10 + 1))))));
                var_28 += ((((min(1, (max(var_8, var_10))))) ? (arr_11 [i_1]) : (min((~-11), (arr_21 [i_0 - 1] [i_1] [i_0 - 1])))));
            }
        }
    }
    #pragma endscop
}
