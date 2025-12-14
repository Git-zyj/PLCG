/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_9 [i_0] [i_1 - 1] [i_0] [i_3 + 2] = var_7;
                            arr_10 [i_0] [1] [1] = (arr_2 [4] [i_0]);
                        }
                    }
                }
                var_18 = (((4095 ? (arr_0 [0] [i_1]) : (min(4080, 18120904203925367519)))) & (((~(arr_6 [i_0 + 1] [i_0 - 2] [i_0])))));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 15;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        {
                            var_19 -= 0;

                            for (int i_6 = 0; i_6 < 15;i_6 += 1)
                            {
                                arr_18 [i_5] [i_5] [0] [i_0] [i_6] = (max((arr_6 [i_0] [i_1] [i_0]), ((65535 ? 18120904203925367519 : (!4095)))));
                                arr_19 [10] [i_1 + 1] [i_4] [i_5] [10] [i_0] [i_6] = ((((min(var_2, -0))) ? ((max(var_2, var_15))) : ((((arr_13 [i_0 - 1] [i_1] [i_4] [i_0] [i_0 + 1] [i_0 + 1]) < (var_10 ^ var_13))))));
                            }
                            var_20 = (max((((!((max(var_8, var_16)))))), ((~((max(var_6, var_1)))))));
                            var_21 = (325839869784184096 - -121);
                            arr_20 [i_0] [i_1] [9] [i_5] = (((460241587 ^ (arr_4 [i_1 + 2] [i_0 - 2] [i_4] [i_0]))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (min(var_22, (112 & 200830197)));
    var_23 *= (((((((max(var_13, var_9))) ? ((min(var_5, var_6))) : var_9))) ? (((4095 | var_4) ? ((max(-20103, 13))) : var_9)) : ((((max(var_4, var_9))) ? -55268 : (min(var_9, var_11))))));
    #pragma endscop
}
