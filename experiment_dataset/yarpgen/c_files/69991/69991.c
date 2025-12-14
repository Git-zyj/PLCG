/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 195;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_21 = (max(var_21, ((max(2547280227, (((!((max((arr_0 [2] [i_0]), 61)))))))))));
        var_22 = (max(var_22, (31357 / 63)));
        var_23 = ((-(max((min(2013082041, (arr_0 [i_0] [22]))), (((arr_1 [i_0] [i_0]) >> (arr_1 [i_0] [i_0])))))));
        var_24 = (((((-(arr_1 [i_0] [i_0])))) ? (max(4294967295, 46)) : (((~(arr_0 [i_0] [i_0]))))));
    }
    var_25 = var_3;
    #pragma endscop
}
