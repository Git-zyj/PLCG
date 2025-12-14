/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69501
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69501 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69501
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(0, 1503));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_13 = ((-(((!0) ? 28 : (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = (((~0) << (!0)));
    }
    var_14 = (~0);
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 2; i_4 < 22;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_1] [i_1] = ((!((((arr_17 [i_4 + 1] [1] [i_3 - 1] [i_4 - 2] [i_3 - 1]) << (var_2 - 41))))));
                                arr_19 [i_5] [i_1] [i_1] [i_1] [i_1] = var_1;
                                arr_20 [i_1] [i_4 - 1] [i_3] [i_1] [i_1] = (min((min((arr_5 [i_1]), var_10)), ((((0 ? 18446744073709551615 : 1766826502)) + (~1)))));
                                arr_21 [i_1] [i_4] [i_5] = (((((((min(18052, 1))) ? (((9318 % (arr_4 [i_5] [i_4 - 1])))) : ((var_1 << (((arr_16 [i_4 - 2]) - 41847))))))) ? ((((-(arr_17 [i_1] [i_2] [i_3] [i_4] [i_5]))))) : (((!(((var_3 << (var_5 - 1458038437)))))))));
                                var_15 = (!1);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 3; i_6 < 22;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            {
                                var_16 = var_4;
                                var_17 = ((((((((arr_10 [i_1] [i_1]) - 1))) ? var_10 : (arr_13 [i_3 - 1]))) <= ((max(var_1, -0)))));
                                var_18 = (min(var_18, (((min(((-18052 ? 231 : 59)), ((-(arr_24 [6] [i_7] [i_6 - 1] [i_3 - 1] [i_2] [i_1])))))))));
                                arr_26 [i_1] [i_2] = ((((~var_11) ? (~var_5) : (arr_5 [20]))) + ((((((var_8 ? (arr_9 [i_7] [12] [i_3]) : (arr_16 [i_3]))) + 2147483647)) << (((max(19877, var_4)) - 19877)))));
                                var_19 = (min(var_19, ((min(-1, ((~(max(-432858640329521849, 0)))))))));
                            }
                        }
                    }
                    var_20 *= ((0 ? (((-(var_10 - var_9)))) : (((231 ? 1 : -5401945112303669198)))));
                }
            }
        }
    }
    var_21 = ((((((!3565086169) ? ((-5401945112303669198 ? var_10 : var_11)) : (!255)))) ? (min(11990866546020401790, (!var_1))) : ((((!(!var_0)))))));
    #pragma endscop
}
