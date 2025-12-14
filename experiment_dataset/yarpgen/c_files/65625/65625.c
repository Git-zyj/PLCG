/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        var_19 = ((((((~(arr_0 [i_0]))) ^ (max((arr_0 [i_0]), (arr_1 [i_0]))))) - ((112 ^ (-32767 - 1)))));
    }
    var_20 = ((-32767 - 1) ? (min((~7340032), (~144115188075823104))) : ((((max(var_0, var_7))) ? 768 : ((1 ? -228379454 : 3222665224396973984)))));
    #pragma endscop
}
