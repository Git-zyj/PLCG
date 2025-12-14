/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max((~-114), ((max((!var_10), (min(-117, var_2)))))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((-((max((max(1, var_0)), (!1))))));
        var_16 = (((~((~(arr_1 [i_0]))))));
        var_17 = (max((min(((max(var_11, var_12))), (arr_2 [1]))), ((min((max(var_14, (arr_1 [i_0]))), ((max(var_0, var_11))))))));
    }
    var_18 = (max(48, -104));
    var_19 = (max((min(((max(0, 1))), (~1))), (~115)));
    #pragma endscop
}
