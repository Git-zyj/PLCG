/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80667
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min((var_12 - 0), var_4);
    var_17 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 19;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 += ((-((var_3 ? (~6835483034059877126) : (((~(arr_10 [0] [i_1 + 2] [i_1 - 2]))))))));
                                arr_17 [i_0] [i_1] [i_0] [7] [i_1] [i_4] = var_15;
                                arr_18 [i_1] [i_1] [i_1] [i_1] [i_1] = 4294967295;
                                var_19 = (0 ^ 42703);
                            }
                        }
                    }
                    var_20 = (i_1 % 2 == 0) ? ((min((((((arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 1]) + 2147483647)) >> (((arr_7 [i_0] [i_1 + 2] [i_2 + 1] [i_1]) + 7334881720758346668)))), (var_12 && var_4)))) : ((min((((((arr_9 [i_1 + 1] [i_2 + 1] [i_2 + 1]) + 2147483647)) >> (((((arr_7 [i_0] [i_1 + 2] [i_2 + 1] [i_1]) + 7334881720758346668)) - 539955503815202706)))), (var_12 && var_4))));
                }
            }
        }
    }
    var_21 = var_5;
    var_22 += ((-(((var_7 | var_6) ? var_3 : var_4))));
    #pragma endscop
}
