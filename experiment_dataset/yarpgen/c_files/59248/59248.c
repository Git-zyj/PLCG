/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_9;

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_16 = (max(var_16, (((((((arr_1 [2] [2]) ? (arr_1 [2] [2]) : (arr_1 [10] [10])))) ? (arr_1 [2] [2]) : (arr_1 [0] [i_0]))))));
        arr_3 [i_0] = ((~(((min(12095893549754509854, 12095893549754509844))))));
        var_17 += (arr_2 [i_0]);
        var_18 = (max(var_18, ((!((max(143, 1)))))));
    }
    var_19 -= var_7;
    var_20 = (max(var_20, ((((!var_13) + (!12095893549754509841))))));
    #pragma endscop
}
