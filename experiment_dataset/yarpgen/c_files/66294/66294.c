/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66294
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66294 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66294
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_13 |= (min(2048, (min((arr_1 [i_0] [0]), 18446744073709551615))));
        arr_3 [1] [1] |= (min(((~(min(18446744073709551615, -19218)))), ((((~764) ^ (arr_0 [i_0] [i_0]))))));
        var_14 = ((512 ? 65024 : 1156815531));
    }
    var_15 |= min((((1953342482 | 8426682302657505636) & var_11)), 65010);
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 18;i_2 += 1)
        {
            {
                var_16 = 18446744073709551615;
                var_17 = (max(var_17, 24576));
            }
        }
    }
    var_18 |= ((((max(((0 ? 1350549154 : -1953342482)), (!-1)))) ? (131070 / 1) : var_3));
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_14 [i_3] [i_3] [i_3] = ((((~(-127 - 1))) ^ (((((arr_11 [i_5] [i_4] [i_3]) + 2147483647)) >> (24576 - 24549)))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            {
                                var_19 = (max(var_19, (arr_9 [i_5])));
                                var_20 = (max(((max((1 >= 37777), 37771))), ((18446744073709551615 * (2147483647 < 2064384)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
