/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86586
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 1857169786;
    var_18 = var_8;
    var_19 = ((~((((var_7 && var_11) || (((var_0 ? var_1 : var_3))))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((((min(-13172, (arr_2 [i_1])))) ? (((~(arr_2 [i_0 - 1])))) : (-9223372036854775786 - 3960181372673248716)));
                var_21 = (arr_4 [i_0] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
