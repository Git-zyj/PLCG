/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= var_15;
    var_17 = (max((max(var_14, ((var_7 >> (var_6 + 4959))))), var_6));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = (min(((((var_0 ? var_2 : (arr_0 [4] [4]))) % (arr_3 [i_0] [i_0 - 2] [i_1]))), (arr_2 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_19 += (((arr_3 [8] [8] [6]) & ((((((arr_5 [i_0] [i_2] [i_3]) ^ var_10))) ? (((arr_10 [i_1] [i_2] [6]) ^ (arr_6 [3] [i_1] [i_3]))) : (arr_2 [7] [7])))));
                            var_20 = var_11;
                            var_21 &= var_6;
                        }
                    }
                }
            }
        }
    }
    var_22 = ((((((((((var_15 + 2147483647) >> (var_8 - 17981578286370093611)))) ? ((min(var_0, var_11))) : var_15)) + 2147483647)) >> ((((var_0 + ((var_15 ? var_12 : var_5)))) - 99))));
    var_23 = var_4;
    #pragma endscop
}
