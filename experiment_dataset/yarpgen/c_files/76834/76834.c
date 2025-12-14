/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76834
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76834 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76834
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(0, var_4)))) ? var_5 : var_2);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (3551623471 ? 5 : (((4294967295 * 521155547) - (~364035848))));
        var_17 = (min(var_17, (((((2147483648 - 2147483647) ? 3773811748 : (max(521155555, 521155539)))) + (max((arr_0 [0]), ((2147483648 ? 3015473755 : 4294967288))))))));
        arr_3 [i_0] [6] |= ((2147483624 / 3773811756) % (((((var_1 - (arr_1 [i_0] [i_0])))) ? (arr_0 [0]) : (max(3773811756, 3773811757)))));
    }
    var_18 = (2147483648 ^ 1304396609);
    var_19 = var_8;
    #pragma endscop
}
