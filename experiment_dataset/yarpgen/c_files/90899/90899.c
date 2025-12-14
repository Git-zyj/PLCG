/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_3 [i_0] = ((min((1 - var_6), (903703824 - 32768))) < (((max((min(var_7, var_0)), (min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_10 &= ((61092 ? 2251799813685248 : 0));
    }
    var_11 = var_4;
    #pragma endscop
}
