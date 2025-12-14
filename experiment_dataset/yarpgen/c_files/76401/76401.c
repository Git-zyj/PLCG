/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((12 << (18387339003221084144 - 18387339003221084137)));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = (88 ? 2 : 88);
        var_12 = 14344;
        var_13 = (arr_0 [i_0]);
        arr_3 [i_0] [i_0] = ((~(min(((min((arr_0 [i_0]), 88))), (((arr_1 [i_0]) ? (arr_0 [i_0]) : var_10))))));
        var_14 ^= (167 <= 53);
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_15 = (min(var_15, (~var_10)));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_16 = ((30 ? 36 : 3850206406));
                                var_17 = (max(var_17, ((((arr_16 [i_3] [i_4] [i_3] [i_2] [i_1]) ? ((max(78, 25))) : (((max(9627146010748773681, var_10)) << (((((arr_4 [i_1]) | (arr_12 [i_5] [i_4] [i_3] [i_1] [i_1]))) + 1796)))))))));
                                var_18 = ((-(min((arr_4 [i_1 - 1]), (~var_1)))));
                                arr_20 [i_1] [i_1 + 1] [i_1] [i_1] [i_1] [i_5] [8] = (53 + 212);
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((!((((arr_17 [i_3] [i_2] [i_3] [i_1] [i_5]) ? (arr_19 [i_1]) : ((var_8 ? var_8 : var_1)))))));
                            }
                        }
                    }
                    var_19 = ((43 ? 202 : 3));
                    var_20 = ((((var_7 == (arr_5 [i_1 + 1])))));
                }
            }
        }
        var_21 = (arr_15 [i_1] [i_1] [13] [i_1] [i_1]);
    }
    var_22 = ((((max(1200663281, -27))) > ((max((max(var_1, var_4)), (((2226516761 ? var_6 : var_10))))))));
    var_23 = (+-var_1);
    #pragma endscop
}
