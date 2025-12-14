/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-1173532511750398358 ? var_4 : var_1));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_17 = 333253990489996267;
            var_18 = (((var_10 / -1173532511750398353) % ((var_7 ? -1173532511750398343 : var_12))));
            var_19 = var_4;
            var_20 = (((((arr_2 [i_0] [i_1]) / (arr_0 [i_0])))) ? -1173532511750398341 : var_14);
        }
        var_21 = (((((var_13 % -1173532511750398345) ? (arr_2 [i_0] [i_0]) : var_5)) | ((~(((arr_2 [i_0] [i_0]) ? var_7 : var_8))))));
        var_22 += -26578;
    }
    var_23 = ((~(max(-4976374133430133974, ((var_6 ? 5549951174080798801 : var_14))))));
    #pragma endscop
}
