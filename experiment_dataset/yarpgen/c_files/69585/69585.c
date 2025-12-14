/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_12 = ((~(0 ^ 9)));
        var_13 = (max((((((max(var_2, 5867211519816025013))) && (max(1, 0))))), (~1)));
        var_14 = ((((~(arr_0 [9] [i_0]))) ^ (~1)));
        var_15 = 1;
        arr_4 [i_0] [i_0] = min((-9021985949336494471 == 15360), (((~-9021985949336494471) ? ((var_6 ? var_5 : -7317527970740738536)) : (arr_1 [i_0] [i_0]))));
    }
    var_16 = (((((-1 ? 1 : 0))) ? 28672 : 8658418796084592971));
    #pragma endscop
}
