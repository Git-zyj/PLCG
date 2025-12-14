/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = var_14;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            var_20 = (min(var_20, ((((max((~27), (((arr_1 [i_2]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 1871414345))))) || (((((1 << (var_16 - 23006))) + (arr_8 [i_3 + 1] [i_3 - 1]))))))));
                            var_21 = (min(var_21, ((((arr_2 [i_1] [i_3]) ? 917462771 : var_14)))));
                            arr_10 [i_1] = (((((((max((arr_8 [i_1] [i_1]), (arr_0 [i_0] [i_0])))) ? (max(var_7, (arr_4 [i_1] [i_3]))) : var_4))) ? -28892 : ((var_2 ? (arr_8 [i_0] [i_0]) : (((var_5 + 2147483647) >> (((arr_0 [i_0] [i_1]) - 399615869))))))));
                            var_22 = var_5;
                            var_23 = (min(4294967295, (((max(3377504504, var_2))))));
                        }
                    }
                }
            }
        }
    }
    var_24 = (((var_0 * 504) ? 1 : (((var_3 < var_18) ? var_15 : (~var_8)))));
    var_25 = 504;
    #pragma endscop
}
