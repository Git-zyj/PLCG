/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (((((var_11 ? (arr_7 [i_0] [i_0 + 2] [i_0 + 2]) : (arr_7 [i_0] [i_0 + 1] [i_0 + 1])))) ? (((((arr_7 [i_0] [i_0 + 2] [i_0 - 1]) <= (arr_7 [i_0] [i_0 + 2] [i_0 - 1]))))) : (arr_7 [i_0] [i_0 + 1] [i_0 - 1])));
                    var_15 = (((max((arr_0 [i_0 + 2] [2]), (arr_4 [i_0] [i_1] [6]))) <= (((((((-101 && (arr_2 [i_2]))))) == var_10)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                var_16 = (min(3469683029547669098, (((-((min(var_1, var_8))))))));
                                var_17 = ((((((((-13 ? var_10 : var_3)) + 9223372036854775807)) << 0)) - (arr_3 [i_2 + 2])));
                            }
                        }
                    }
                }
            }
        }
    }
    var_18 = (max(var_18, 193));
    #pragma endscop
}
