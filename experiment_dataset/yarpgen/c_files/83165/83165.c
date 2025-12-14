/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -var_5;
    var_15 = ((var_11 ? var_13 : var_11));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_16 |= 2147483647;
                var_17 = ((3794355947 ? ((min(54314, 0))) : ((min((min(-24048, 76)), (arr_4 [i_0]))))));
                var_18 = ((((min((arr_1 [i_1 - 1] [i_0 - 3]), (arr_3 [i_0 + 1] [i_1])))) ? (~64) : -80));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = 176;
                            var_20 = (max(var_20, ((min(251, (min(80, 9)))))));
                            var_21 = (min((min(var_3, (arr_0 [i_2 - 2]))), (~var_3)));

                            for (int i_4 = 1; i_4 < 18;i_4 += 1)
                            {
                                var_22 = (min(var_22, (((((max(120, -18746)))) != (((80 + var_7) * (((arr_0 [i_3]) * 32228))))))));
                                var_23 ^= (min((((var_3 ? (arr_7 [9] [i_0] [16] [16]) : 85))), (((var_2 <= (arr_11 [i_2 - 1] [5] [1] [i_4 + 1] [i_0 - 3] [i_1 - 1]))))));
                                var_24 = (88 <= 24353);
                                var_25 = (min(((min(var_5, var_6))), 127));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
