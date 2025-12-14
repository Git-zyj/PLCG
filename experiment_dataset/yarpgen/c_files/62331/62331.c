/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62331
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_18 = (arr_0 [i_0]);
                arr_6 [i_0] = (arr_1 [i_0 + 1]);
                var_19 &= (min(16808058261262671906, (((10603 == var_5) % (((arr_1 [i_0 - 3]) ? (arr_2 [i_0] [4]) : 1))))));
                var_20 = (!-var_0);
            }
        }
    }
    var_21 = ((((((12 <= 1) ? var_11 : var_2))) ? 816542748 : 0));
    var_22 = var_12;
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 14;i_3 += 1)
        {
            {
                var_23 *= ((var_5 | (max(0, 0))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_19 [1] [i_3] [i_4] [i_4] [i_4] = max(131, 0);
                            var_24 = arr_8 [11];
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 12;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 10;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_25 *= 0;
                                var_26 *= -75;
                                arr_27 [i_6] [i_7] = 1252456618;
                                var_27 = ((+((var_12 - ((((arr_15 [i_2] [i_2] [i_2] [i_2]) < 1125899772624896)))))));
                                arr_28 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = var_13;
                            }
                        }
                    }
                }
                arr_29 [i_2] [1] = -87;
            }
        }
    }
    #pragma endscop
}
