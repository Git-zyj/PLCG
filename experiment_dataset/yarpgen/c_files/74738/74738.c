/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (9065777003117891773 / -6148);
    var_19 = (1 ^ 1);
    var_20 = (min(var_20, var_7));
    var_21 = (min(1, 0));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            {
                var_22 = (arr_0 [i_0]);

                for (int i_2 = 4; i_2 < 10;i_2 += 1) /* same iter space */
                {
                    var_23 = (((max(1, 1))));
                    var_24 *= 1;
                    var_25 = (max(var_25, (!var_2)));
                }
                /* vectorizable */
                for (int i_3 = 4; i_3 < 10;i_3 += 1) /* same iter space */
                {
                    var_26 = (((arr_9 [i_0 + 1]) ? (arr_6 [i_1 + 1] [i_1 + 1] [i_1 + 1]) : 1));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 12;i_5 += 1)
                        {
                            {
                                arr_17 [i_5] [i_1] [i_3 - 3] [i_4] [i_3 - 1] [i_3 + 1] [i_5] = (((~(arr_0 [i_1 - 1]))));
                                var_27 = (max(var_27, 1));
                                var_28 = 1;
                                arr_18 [i_4] [i_1 - 2] [i_3 + 1] [i_4] [i_1 - 2] = 1;
                                var_29 = ((+(((arr_4 [4] [i_0]) ? var_17 : (arr_3 [i_3])))));
                            }
                        }
                    }
                    var_30 -= 1;
                }
                var_31 = ((((((((arr_9 [i_0]) & (arr_7 [i_0] [i_0] [i_0] [i_1 - 2])))) ? 1 : 1)) >> (((((((~(arr_11 [1] [3])))) ? var_13 : ((min((arr_5 [i_0] [3]), 1))))) - 42575))));
            }
        }
    }
    #pragma endscop
}
