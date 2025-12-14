/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55268
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55268 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55268
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_10 = (max(((-978456959510905780 ? -2682128754801598281 : (((-(arr_1 [i_0])))))), ((((max(var_2, 0)))))));
        var_11 ^= (max((max((-1206495675 < var_5), ((1993406598 ? (arr_3 [i_0]) : 3021368524482765723)))), (((!((((arr_2 [i_0] [i_0]) & 4503599627370495))))))));
        var_12 = (arr_2 [i_0] [i_0]);
    }
    var_13 = var_0;
    #pragma endscop
}
