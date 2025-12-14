/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57476
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= (min(((1 ? (max(var_13, var_15)) : var_17)), ((min(var_3, (((var_7 + 2147483647) << (((-1096286330 + 1096286360) - 30)))))))));
    var_20 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 1; i_4 < 1;i_4 += 1)
                            {
                                arr_12 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] = 15;
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = (((arr_8 [i_0] [i_1] [i_2] [i_2] [i_4] [i_3]) || ((((arr_10 [i_4 - 1] [i_3] [i_3] [i_3] [i_3] [i_2] [1]) % (arr_10 [i_0 - 1] [i_0] [i_0] [i_1] [i_2] [i_3] [i_4]))))));
                                var_21 = (arr_5 [i_4] [i_2] [i_1 + 1]);
                                var_22 = (max((((-3685017214175169523 && -6) | ((max(253, 24))))), 2147483641));
                            }
                            for (int i_5 = 2; i_5 < 19;i_5 += 1)
                            {
                                var_23 = ((((min((arr_6 [i_1 - 1] [i_0] [i_1 - 1] [i_0]), (((arr_14 [i_0]) - 3))))) ? -2034140611 : -17));
                                arr_17 [0] [i_0] [i_2] [i_2] [9] = ((((var_11 > (max((arr_4 [i_2]), var_0)))) ? (((max(var_9, var_11)) - (arr_0 [i_0] [i_0 + 1]))) : (((max(87, 65535))))));
                                arr_18 [i_0 - 2] [i_1] [i_2] [i_0 - 2] [i_2] [i_0] = ((((!(arr_2 [i_1] [i_1 + 3] [i_2])))) - ((min((arr_1 [i_0]), -1))));
                                arr_19 [i_0] = (((var_2 ^ 2225408457) >= (((~(arr_3 [i_0 - 2] [i_1 + 1] [i_2]))))));
                            }
                            var_24 = ((1839152243 - var_15) <= 248);
                            var_25 *= (((((max(var_2, var_6)))) - ((var_2 ? 0 : 32765))));
                            var_26 &= (max(var_18, (((var_16 ? var_7 : var_8)))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 20;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 18;i_7 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_6 - 1] = var_4;
                            arr_28 [i_0] [i_1 + 2] [i_0] [i_7] = (max(1839152243, 1));
                            arr_29 [i_0] [i_1 + 1] [i_6] = ((((arr_26 [i_0]) || (1 || var_12))) ? (((min(1, 1)))) : (((arr_26 [i_0]) ? var_16 : 24830)));
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    arr_32 [i_0] [i_1] = ((((min((min(238, 64)), 1))) / 3));
                    var_27 = (min(1898695377, (((1 | (arr_14 [i_0 + 1]))))));
                }
                arr_33 [i_0] [i_0] = max((((arr_3 [i_0 - 1] [i_1] [i_0]) < (arr_9 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0] [i_0]))), (arr_3 [i_0] [i_1] [i_1]));
                var_28 = ((((min(1, 0))) != (((((min(var_4, var_3)) + 2147483647)) << (((arr_3 [i_0 - 1] [i_0 - 1] [i_1]) - 1))))));
            }
        }
    }
    #pragma endscop
}
