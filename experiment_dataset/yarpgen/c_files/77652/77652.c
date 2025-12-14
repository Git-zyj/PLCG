/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_6;
    var_21 = ((((max((!63), var_0))) ? var_7 : (((((max(var_10, 42))) || (((255 ? var_14 : var_4))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_22 = (max(var_22, ((((min((arr_0 [i_1]), (((-(arr_3 [i_0] [i_0])))))) + var_6)))));
                var_23 = (min(var_23, ((min(var_17, (min((min(1281608808757868065, 4294967062)), 4294967290)))))));
            }
        }
    }
    var_24 |= (!var_0);
    var_25 = (((((var_12 | 1) ? var_7 : ((var_17 ? 1281608808757868071 : var_17)))) / ((((var_1 + 9223372036854775807) << (var_12 - 4258054217))))));
    #pragma endscop
}
