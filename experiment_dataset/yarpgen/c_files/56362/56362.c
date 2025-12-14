/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_13;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = (max(((min(4294967295, 127))), (((-4294967295 == (arr_1 [i_0]))))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = (((~(arr_0 [i_0]))));
            arr_6 [i_0] [i_0] [5] = ((107 ? -132 : (max(var_5, (~var_3)))));
        }
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            var_20 = var_5;
            arr_9 [i_0] = (min(var_2, ((var_11 & (max((arr_2 [12]), (arr_3 [i_0])))))));
            var_21 -= min((((arr_5 [i_2]) ^ var_14)), (((+((var_9 << (((arr_3 [i_0]) - 805846078526257348))))))));
        }
    }
    var_22 = var_14;
    #pragma endscop
}
