/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_14 * (var_5 * var_8)));
    var_19 |= (224 * 42922);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((((arr_2 [i_0]) ? 4 : (arr_2 [i_1]))));
                var_20 = (((min((arr_4 [7] [7] [i_1]), (min(var_11, 92475624882266175)))) * ((max(var_17, 42933)))));
                var_21 = (arr_4 [i_0] [i_0] [i_0]);
            }
        }
    }
    var_22 = var_1;
    var_23 = ((~((22615 * (var_1 * var_15)))));
    #pragma endscop
}
