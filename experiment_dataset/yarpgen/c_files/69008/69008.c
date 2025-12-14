/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= max(((max(var_4, var_3))), ((((max(14466911301271502879, -93))) ? 63 : (!var_5))));
    var_14 = (var_11 / var_8);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((~(arr_4 [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 1;i_4 += 1) /* same iter space */
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_3] [i_1 + 2] [i_0] = (arr_2 [i_2] [i_1]);
                                var_15 = 58;
                                var_16 = ((!(-2147483647 - 1)));
                            }
                            /* vectorizable */
                            for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
                            {
                                var_17 = 2147483647;
                                var_18 = ((~(-2147483647 - 1)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 24;i_6 += 1)
                            {
                                var_19 = (((arr_11 [i_0] [i_1] [i_1] [18] [i_3] [i_3]) ? -2147483647 : 2147483647));
                                var_20 = (((arr_12 [i_3] [i_1 + 3] [i_1 + 1] [i_3]) ? ((((!(-2147483647 - 1))))) : 6215888665204666984));
                            }
                            for (int i_7 = 0; i_7 < 24;i_7 += 1)
                            {
                                var_21 = 18446744073709551615;
                                arr_25 [i_7] [i_3] [i_2] [i_1 - 1] [i_3] [i_0] = var_10;
                            }
                            var_22 ^= 3862168464;

                            for (int i_8 = 0; i_8 < 24;i_8 += 1)
                            {
                                var_23 = (((+((2147483643 ? (arr_0 [10]) : (arr_21 [i_3]))))));
                                var_24 -= (((((((arr_24 [i_1 + 1] [i_8] [i_2] [1] [i_1 + 1]) & (arr_24 [i_1 + 2] [i_2] [16] [16] [i_8]))) + 2147483647)) >> (-var_9 - 17255880249704336498)));
                                var_25 += ((~(((((~(arr_14 [i_3]))) != -31)))));
                                arr_28 [6] [i_1 + 1] [i_2] [i_3] [i_3] = (-2147483647 / 248);
                                var_26 = (arr_0 [i_1 + 3]);
                            }
                            for (int i_9 = 0; i_9 < 24;i_9 += 1)
                            {
                                var_27 = (max(((min((arr_10 [i_1 - 1] [i_1 + 1] [i_1] [i_1 - 1]), var_7))), (max((arr_3 [i_1 + 1] [i_1 - 1]), var_0))));
                                var_28 = 94;
                            }
                            var_29 += ((((((!-93) ? (arr_22 [i_0] [20] [1] [i_2] [i_2]) : (max((arr_8 [i_2] [i_2] [i_0] [i_0]), (arr_27 [i_0] [18] [i_0] [i_1] [i_2] [i_3])))))) ? (arr_27 [0] [16] [i_2] [i_3] [i_2] [i_3]) : var_10));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
