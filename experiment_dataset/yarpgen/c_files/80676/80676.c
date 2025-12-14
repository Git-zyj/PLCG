/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(127, (((((var_5 ? var_0 : var_4))) ? var_11 : ((21347 ? 4503597479886848 : 2370396331))))));
    var_15 = ((var_3 & (min((var_1 > 44343), ((var_9 >> (var_3 - 476672042)))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_2] = (max((min(-18446744073709551615, var_12)), 3757679800));
                    arr_10 [i_0] = (min(((max(127, 127))), ((((max(127, var_9))) ? (min(14874128809327888210, var_0)) : var_6))));
                }
            }
        }
    }
    var_16 = var_10;
    #pragma endscop
}
