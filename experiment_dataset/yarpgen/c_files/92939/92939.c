/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92939
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92939 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92939
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 32757;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 21;i_4 += 1)
                            {
                                var_17 = (((((32757 ? 18428153143337894169 : (arr_5 [i_0] [i_1 + 2])))) ? 18590930371657447 : -var_0));
                                var_18 = var_6;
                                var_19 -= ((-((38392 ? (max(53112, -7187035301165883883)) : (max((arr_9 [i_0]), 7681000524080971283))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_20 = var_0;
                                var_21 = (arr_9 [i_1]);
                                var_22 = (max(((~(-32767 - 1))), (var_14 <= -96)));
                            }
                            /* vectorizable */
                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_23 = var_9;
                                var_24 = (~18428153143337894168);
                                var_25 = ((-(arr_10 [i_0 - 2] [i_1] [i_0] [i_2] [i_3])));
                            }
                            for (int i_7 = 0; i_7 < 21;i_7 += 1)
                            {
                                var_26 = (arr_4 [i_2] [11]);
                                var_27 = min(-4, (arr_17 [i_0] [i_0] [3] [i_0] [i_7]));
                            }
                            var_28 = (min(((min((((var_0 > (arr_12 [i_0 - 4] [i_3 - 3] [i_3 - 3] [i_3 - 3] [1])))), (max((arr_10 [i_0 - 1] [15] [i_0] [i_2] [i_2]), (arr_0 [i_0] [i_0])))))), ((-(!18590930371657446)))));
                            var_29 = (min((-32767 - 1), 505490269344187148));
                            var_30 = ((!((((arr_12 [i_2] [i_2] [i_2] [i_2] [i_2]) * (arr_12 [i_0] [i_0] [i_1 - 2] [1] [i_0]))))));
                        }
                    }
                }
                var_31 = (18446744073709551615 & -1137205888);
                var_32 = (((arr_2 [i_0 - 2]) * (((-(-32767 - 1))))));
            }
        }
    }
    var_33 = var_13;
    #pragma endscop
}
