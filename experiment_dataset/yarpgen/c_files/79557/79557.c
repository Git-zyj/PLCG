/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79557
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_11 = 11260027768055548451;
                            var_12 = (max(var_12, ((((arr_0 [i_2 - 3]) ? (~0) : ((~(arr_0 [i_2 - 4]))))))));
                            var_13 *= var_7;
                            var_14 = (((((arr_6 [i_0] [i_0] [13] [i_2 - 2]) ? (arr_7 [i_0] [i_1 + 1] [i_0]) : (arr_7 [i_0] [i_1 + 1] [i_0]))) | (((arr_7 [i_0] [i_1 + 1] [i_0]) ? var_6 : (arr_6 [i_0] [i_0] [i_2] [i_2 - 2])))));
                        }
                    }
                }
                var_15 -= ((-(((((~(arr_9 [i_0])))) ? (min(var_2, (arr_2 [i_1]))) : var_9))));
            }
        }
    }
    #pragma endscop
}
