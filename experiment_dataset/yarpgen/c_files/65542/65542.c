/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65542
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((max((255 << 0), 29820))), (-32 / -var_5)));

    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        var_15 = ((!((min(21784, -113494105)))));
        var_16 = 2147483647;
    }
    var_17 &= var_6;

    for (int i_1 = 1; i_1 < 18;i_1 += 1)
    {
        var_18 -= (max(((-1785451252 ? 4294967269 : var_0)), 16514));
        arr_4 [i_1] [i_1] = ((~(arr_2 [i_1])));
    }
    #pragma endscop
}
