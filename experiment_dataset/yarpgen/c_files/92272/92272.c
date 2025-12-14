/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 7428968480452255989;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_14 = ((((~(arr_0 [i_0])))) ? 2321503000506344525 : 9223372036854775807);
        var_15 = -3269116316362168209;
        var_16 = ((((-(arr_0 [i_0]))) >> (((arr_1 [i_0] [i_0]) - 13469232719253583300))));
    }
    var_17 = (max(var_17, var_2));
    #pragma endscop
}
