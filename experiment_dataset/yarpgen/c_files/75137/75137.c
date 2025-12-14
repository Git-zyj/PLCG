/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_12 = max((arr_0 [i_0] [i_0]), (arr_0 [i_0 - 3] [i_0 - 3]));
        var_13 = (((((~(min(var_1, (arr_1 [i_0])))))) < var_7));
        var_14 = (((arr_1 [i_0 - 4]) < (max(((max(var_9, (arr_1 [i_0])))), ((var_1 ? var_2 : (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0 - 3] [i_0] = ((5073745677048821941 ? (arr_0 [i_0 - 2] [i_0]) : (((arr_1 [i_0]) ? (((arr_1 [i_0]) / 5073745677048821925)) : (arr_0 [i_0] [i_0])))));
    }
    var_15 = ((1190469805840294961 != var_4) > (~var_8));
    var_16 = var_4;
    #pragma endscop
}
