/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6522
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6522 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6522
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 ^= 1073741823;
        var_17 = (min(var_17, ((min((arr_2 [i_0] [i_0]), (((arr_2 [4] [4]) | ((591235206 | (arr_2 [i_0] [i_0]))))))))));
        var_18 |= ((~(((((~(arr_0 [i_0])))) ? (((~(arr_0 [0])))) : ((17 ^ (arr_3 [i_0])))))));
    }
    var_19 = (~182);
    #pragma endscop
}
