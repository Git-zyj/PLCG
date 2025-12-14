/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_15 * ((var_6 ? var_12 : var_1)))));
    var_17 -= 0;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_0] [13] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_18 = (((var_7 + 2147483647) >> ((((((arr_0 [i_1]) ? (arr_10 [i_2] [i_1] [i_2 - 1]) : -6531130632200128658))) & ((-685064280 ? var_4 : var_3))))));
                            arr_13 [i_0] [i_1] [i_2] [i_3] = var_15;
                            var_19 = var_4;
                        }
                    }
                }
                var_20 ^= ((+((~(((arr_5 [i_0] [i_1]) ? var_3 : (arr_0 [i_1])))))));
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 17;i_6 += 1)
                        {
                            {
                                arr_22 [i_0] [i_1] [i_4] [1] [i_6] = (-685064279 <= var_3);
                                var_21 = (max(((var_6 + (~-8340489493406287613))), (((min((arr_18 [2] [i_1] [i_1] [i_1] [i_1] [i_1]), -8340489493406287638))))));
                            }
                        }
                    }
                }
                var_22 = (max(var_22, (((-var_8 % ((min(var_15, var_7))))))));
            }
        }
    }
    var_23 = var_13;
    #pragma endscop
}
