/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_10 = (arr_2 [8]);
        arr_3 [i_0] [i_0] = ((var_1 + (min(var_7, (arr_1 [i_0 - 1])))));
        var_11 = (max(var_11, ((max(882861089, 2172021680)))));
    }
    var_12 = (3479651635506900803 / 4294967295);
    #pragma endscop
}
