/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65014
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((var_2 | ((max(var_1, var_3)))));
    var_15 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_16 = (arr_4 [i_2]);
                            var_17 = 14982396721471537979;
                            var_18 = (arr_7 [i_3] [i_1] [17] [i_1 + 1]);
                            var_19 = (((arr_5 [i_1] [i_1] [i_1] [i_1 + 1]) * (arr_5 [5] [i_1 + 3] [i_1] [i_1 + 2])));
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_20 = (max(var_20, var_11));
                                arr_19 [i_4] [i_4] [i_4] [i_1] [i_4] = (min((arr_11 [7] [i_1 - 1] [i_4]), 53));
                                var_21 = ((-484156346 ? 1108307720798208 : 18446744073709551611));
                                arr_20 [i_0] [i_1 + 2] [i_4] [i_5] [i_4] = ((289882749992510304 / (((((arr_11 [i_4] [i_5 - 2] [i_4]) || var_6))))));
                                var_22 = ((((max(-1437837444, -27))) || (((arr_13 [i_5 + 1] [i_1 + 2] [i_6 + 2]) || var_4))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 2; i_7 < 18;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 19;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                {
                    var_23 = (min((((var_3 <= (arr_8 [i_9])))), (max(((var_6 ? -6657251298659126703 : (arr_1 [i_8]))), ((min(var_2, -1759879754)))))));
                    var_24 = (max(var_2, var_8));
                }
            }
        }
    }
    var_25 = (var_7 / var_9);
    #pragma endscop
}
