/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, (((((min(((var_7 ? -39 : var_10)), var_6))) <= ((-var_2 ? (var_6 & 1117586661) : (var_6 % -9))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_13 = var_5;
                                arr_12 [5] [i_1 - 4] [i_2] = var_7;
                                var_14 = ((var_6 ? ((var_7 ? var_7 : 19401)) : ((~(((arr_5 [1] [i_1] [i_3]) ? var_4 : -32529))))));
                            }
                        }
                    }
                    var_15 ^= (((~(~var_5))));
                    var_16 = (((((38 ? 1 : 188))) != var_2));
                }
            }
        }
    }
    var_17 ^= var_4;
    var_18 |= 2147483647;
    #pragma endscop
}
