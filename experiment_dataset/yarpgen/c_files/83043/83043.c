/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        arr_2 [10] &= min(((((var_14 | var_10) != ((min(var_16, var_16)))))), ((((max(var_4, 1138231237))) ? ((4965071031516653126 ? 25 : var_13)) : -3527)));
        var_17 = ((((((var_6 + 42450) ? ((4984487598057597837 ? var_5 : -65)) : ((min(-65, -65)))))) ? var_15 : ((4066925274 ? (-2147483647 - 1) : ((2147483647 ? 23085 : 255))))));
    }
    var_18 ^= ((var_0 ? (min(42459, 2147483647)) : var_5));
    var_19 -= (~-25);
    #pragma endscop
}
