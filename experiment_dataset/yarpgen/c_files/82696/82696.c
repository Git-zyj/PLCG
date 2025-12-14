/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82696
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max((((~var_15) ? var_1 : (var_2 | var_13))), (max(-67, var_1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = (((min(-1914208212, var_17)) >= -1914208228));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_10 [i_2] [i_2] [i_1] [i_2] |= min((((((arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1] [i_1]) + 2147483647)) << (18446744073709551610 - 18446744073709551610))), (-19443 + 1));
                            var_19 = ((~(min((min((arr_1 [i_1]), 18446744073709551613)), ((((arr_9 [i_0]) ? (arr_2 [i_0] [i_1] [i_0]) : (arr_7 [i_1]))))))));
                        }
                    }
                }
                arr_11 [i_0] [i_0] = arr_1 [5];
                var_20 = (min(var_20, ((min(805306368, ((max(1, 1))))))));
            }
        }
    }
    var_21 = (min(((((((-32 + 2147483647) >> (var_15 - 34081))) < (min(var_16, 1))))), 18446744073709551607));
    #pragma endscop
}
