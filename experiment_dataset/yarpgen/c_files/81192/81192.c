/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = -51;
    var_17 ^= (var_1 ^ var_15);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (~var_15);
                                var_19 = ((((arr_10 [i_1] [i_2] [i_2] [i_1] [i_2] [i_4 + 1] [7]) ? 50 : (arr_0 [i_4 + 1]))));
                            }
                        }
                    }
                    var_20 = (((1520487773 == var_5) ? (((arr_8 [i_2]) ? (-9223372036854775807 - 1) : (arr_8 [i_1]))) : (((var_15 ? 65 : var_5)))));
                }
            }
        }
    }
    var_21 = var_10;
    #pragma endscop
}
