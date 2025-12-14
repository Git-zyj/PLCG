/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76637
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = -var_6;
        var_15 = ((~(!550065285)));
        arr_3 [i_0] = (max(((min(262143, 18446744073709289493))), 31));
        arr_4 [i_0] [i_0] = (((((-(arr_0 [i_0] [i_0])))) && 1));
    }
    var_16 -= (min(var_2, -var_13));
    #pragma endscop
}
