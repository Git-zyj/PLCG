/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [16] |= (((((var_0 ? var_1 : var_14))) >> (var_4 - 49631)));
                            arr_11 [i_0] [i_1] [i_3] = (871959306 ^ 2757);
                            var_19 = (arr_7 [i_1] [i_1]);
                        }
                    }
                }
                var_20 = (min(var_20, ((((((var_3 ? var_0 : (arr_5 [i_1] [20] [i_0]))) >= (var_1 | var_12))) || (arr_0 [i_0])))));
                var_21 |= ((var_14 ? var_17 : (((arr_4 [i_1] [14]) ? var_14 : var_5))));
            }
        }
    }
    #pragma endscop
}
