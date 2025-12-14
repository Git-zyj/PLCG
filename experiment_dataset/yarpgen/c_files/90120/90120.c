/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90120
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90120 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90120
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_19 = 1;

                for (int i_2 = 3; i_2 < 24;i_2 += 1)
                {
                    var_20 ^= 1;
                    arr_8 [i_2] = var_15;
                }
                /* vectorizable */
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    var_21 = (~var_15);
                    var_22 = (max(var_22, ((((arr_9 [i_3 + 2] [i_0 - 1] [i_0 + 2] [i_0 - 1]) ? (arr_9 [i_3 - 1] [i_0 - 3] [i_0 - 4] [i_0 - 3]) : (arr_7 [1]))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 25;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 23;i_5 += 1)
                        {
                            {
                                arr_16 [i_5] [i_3] [i_3] [i_3] [i_0 + 2] [i_0 + 2] = 1;
                                var_23 ^= ((689440453 ? var_17 : (~1)));
                            }
                        }
                    }
                }
                for (int i_6 = 4; i_6 < 23;i_6 += 1)
                {
                    var_24 = (!(((((var_12 != (arr_9 [i_6] [i_0] [i_0] [i_0]))) ? 1 : (arr_11 [i_1] [i_1])))));
                    var_25 ^= ((!((!((min((arr_15 [i_1] [i_1] [i_0] [i_6] [i_6] [16]), (arr_9 [i_0] [5] [i_0] [i_0]))))))));

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_26 = (max(var_2, (max((((arr_18 [i_0]) ? var_7 : var_18)), 1))));
                        var_27 += (((max(var_17, (arr_18 [i_6]))) - var_4));
                        var_28 = ((-(arr_14 [i_0] [10] [i_6 - 3] [2] [i_7] [i_1])));
                        var_29 ^= -70;
                        var_30 = (min(var_30, (((~(((~var_6) ? -1120855942476197231 : ((max(1, -63))))))))));
                    }
                }
                var_31 = (arr_20 [i_0] [i_1] [i_0] [i_0 - 1]);
            }
        }
    }
    var_32 = (min(var_32, (((((((min(4921, var_1))) ? (((4996432016742709214 ? var_1 : var_3))) : 2049235157))) ? ((var_3 * (~var_8))) : 4930))));
    #pragma endscop
}
