/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_20 |= 56;
                                var_21 = (((((arr_4 [i_1] [i_1 + 2]) & ((max(var_9, var_7))))) << ((((((-(arr_2 [i_4] [i_1])))) <= ((var_15 & (arr_8 [i_3] [i_1] [i_3] [5] [i_1] [i_3]))))))));
                                arr_10 [i_3] [i_3] [i_3] = ((((((arr_2 [i_1 - 1] [i_1 - 1]) ? (arr_2 [i_1 + 2] [i_1 - 1]) : var_11))) ? ((((arr_2 [i_1 + 2] [i_1 - 1]) / var_13))) : (7 / 56)));
                                var_22 = (max(var_22, 200));
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 18;i_6 += 1)
                    {
                        {
                            var_23 = (-(((((var_13 ? (-9223372036854775807 - 1) : 127))) ? (((arr_12 [i_5] [i_6]) ? 199 : var_13)) : var_12)));
                            var_24 = (min(255, -2305843009079476224));
                            var_25 += (~1);
                            var_26 *= (max(-var_19, -var_16));
                        }
                    }
                }
                arr_15 [i_1 + 1] [i_0] [i_0] = ((min(-110, var_2)));
                var_27 = (min(var_27, ((max(var_14, (((((var_11 ? var_12 : (arr_3 [i_0] [i_0] [i_1 + 2])))) ? 126 : (max(var_9, (arr_3 [i_1] [i_0] [i_0]))))))))));
                arr_16 [i_1] [i_0] = -127;
            }
        }
    }
    var_28 += 0;
    var_29 = (min(var_29, ((min((var_0 <= -0), (!var_11))))));
    #pragma endscop
}
