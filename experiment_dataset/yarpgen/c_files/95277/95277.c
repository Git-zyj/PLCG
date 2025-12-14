/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95277
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 23;i_4 += 1)
                            {
                                var_16 = (((((!-90) ? var_1 : 11052395287465931440)) > (((max(var_3, 10304685167904110674)) >> ((((8142058905805440941 ? var_15 : var_4)) - 4294967173))))));
                                var_17 = (max(((((((arr_7 [i_0] [i_1] [i_2] [i_4] [i_4] [i_4]) & 10304685167904110687))) ? (((arr_0 [i_0]) ? var_3 : (arr_6 [i_1] [i_2] [i_2]))) : (arr_7 [i_0] [i_0] [i_1] [i_2] [22] [i_4]))), ((((arr_11 [i_0] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 2] [i_0] [i_2]) <= 3997556710)))));
                                var_18 = (((arr_9 [i_0] [i_0 + 2]) == 5856));
                            }
                            var_19 = (((((((-9223372036854775807 - 1) ? (arr_1 [i_0]) : (arr_1 [i_0]))))) ? var_9 : 8142058905805440931));
                            var_20 = -var_11;
                            var_21 = (max(var_21, (arr_5 [6] [i_1] [i_1] [i_0])));
                        }
                    }
                }
                var_22 = ((~(!var_5)));
            }
        }
    }
    var_23 ^= var_11;
    var_24 |= ((((min((var_0 & var_15), ((var_14 ? var_0 : var_7))))) ? var_10 : var_1));
    #pragma endscop
}
