/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69854
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_9;

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 = ((-((32767 ? 1 : var_11))));
        var_20 = ((((((65024 ? -32765 : -18014398509481984)) >= (((4611686018427387904 ? (arr_0 [i_0] [i_0]) : -119))))) ? -32752 : -32752));
        arr_4 [i_0] = (((-32765 ? 0 : 8388607)));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 &= 12;
        arr_7 [i_1] [i_1] = ((var_4 * (((min(var_10, (arr_6 [i_1]))) / var_3))));
    }
    #pragma endscop
}
