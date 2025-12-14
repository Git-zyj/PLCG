/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94286
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94286 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94286
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((-2147483647 - 1) ? 17443461142056953755 : 2401397528)))));
    var_14 = (min((min(((var_5 ? var_10 : var_11)), var_6)), ((min((var_8 % var_2), var_12)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = var_1;
                arr_5 [i_0] [i_1] [i_1] = (((~274877890560) ? ((((arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]) ? (arr_3 [i_0 + 2] [i_0 + 2] [i_0 - 1]) : (arr_3 [i_0 + 2] [i_0 - 1] [i_0 + 2])))) : (arr_0 [i_0 + 1])));
                arr_6 [i_1] = (((arr_2 [i_1]) + ((((~var_6) <= 274877890560)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_15 = var_10;
                            var_16 = (((((((!(arr_7 [i_0 + 1] [i_1] [i_1]))) ? (((arr_11 [i_0] [i_1] [i_2] [i_2] [i_2] [11]) ? (arr_1 [i_0] [i_3]) : -2597)) : (arr_8 [i_0] [i_1] [i_2] [i_3])))) ? var_7 : var_7));

                            for (int i_4 = 4; i_4 < 22;i_4 += 1)
                            {
                                var_17 += (min(((min((!var_4), ((-9223372036854775790 == (arr_15 [i_0] [i_1] [i_2] [15])))))), ((~(((arr_3 [i_0 - 1] [i_1] [i_0 - 1]) & (arr_7 [i_0] [i_1] [2])))))));
                                var_18 ^= (arr_1 [i_4] [i_3]);
                                arr_17 [i_1] [i_1] [i_3 - 2] = (min((!627884168401355988), ((((arr_1 [i_0] [i_0]) ? 0 : 7957776903007148331)))));
                                var_19 = (min(var_19, ((min((arr_0 [i_3 - 4]), ((1316751774 * (arr_10 [i_0 + 2]))))))));
                                var_20 += var_1;
                            }
                            for (int i_5 = 3; i_5 < 20;i_5 += 1)
                            {
                                arr_21 [i_1] [i_1] [i_2] [15] [i_5 + 1] = (((min((arr_16 [i_0 - 1] [i_3 - 2] [i_5 - 1] [i_3 - 3] [i_1]), 37608)) % (arr_16 [i_0 + 2] [i_3 - 3] [i_5 + 2] [i_2] [i_2])));
                                var_21 = var_0;
                                arr_22 [i_5] [i_3] [i_1] [i_1] [i_1] [i_0] = ((((((var_12 ? var_2 : var_1))) >= (((arr_14 [i_0 + 2] [i_0] [i_0] [i_0] [i_0]) ? 1937777544 : (arr_10 [i_3]))))));
                                arr_23 [i_1] [2] [i_2] = (((((arr_19 [10] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_1] [i_0] [i_0]) + 2147483647)) >> ((min(var_11, (!21))))));
                            }
                            for (int i_6 = 1; i_6 < 22;i_6 += 1)
                            {
                                var_22 = (((~var_11) | (arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2])));
                                var_23 = (min(18446744073709551611, 117));
                                arr_26 [i_0] [i_1] [i_1] [i_3] [i_0 - 1] [i_2] [i_0 + 1] = var_6;
                            }
                            var_24 = (min(114, (min(var_7, (!var_2)))));
                            arr_27 [5] [i_1] [i_2] [22] = (min(((-((-10 ? (arr_10 [i_0]) : 274877890571)))), (~782421490)));
                        }
                    }
                }
            }
        }
    }
    var_25 = -var_5;
    #pragma endscop
}
