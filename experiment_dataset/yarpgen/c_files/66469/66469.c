/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    var_12 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 7;i_3 += 1)
                    {
                        {
                            var_13 = (((((4294967295 ? (arr_1 [i_0] [1]) : (arr_0 [i_0 + 3] [6])))) ? (min(97, var_3)) : 56));
                            var_14 = (min(var_14, (((var_4 ? -1 : ((var_4 >> (((48 & var_5) - 28)))))))));
                        }
                    }
                }
                var_15 |= (max(var_0, (((!(!199))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 21;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 21;i_5 += 1)
        {
            {
                var_16 = ((16304014118303263568 ? ((200 & (arr_13 [i_4]))) : ((((arr_15 [i_4] [i_5]) == 198)))));
                var_17 = ((!(((var_4 & (max(9223372036854775805, 56)))))));
                var_18 = (min(var_18, ((((((var_4 ? (arr_14 [i_4] [i_5] [i_4]) : -9223372036854775805))) ? (0 >= 0) : ((((min((arr_13 [i_5]), 0))) ? (arr_11 [i_4]) : 9223372036854775802)))))));
            }
        }
    }
    #pragma endscop
}
