/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71117
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71117 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71117
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_15 ^= ((-5 ? -2147483644 : 693747006));
        arr_2 [10] = ((((3398 * 1) ? 9223372036854775807 : -5)));
        arr_3 [i_0] = ((3083676390641178241 ? -8566594957777777674 : -7181978097145819426));
    }
    var_16 = (max(var_16, var_9));
    var_17 = var_1;
    var_18 = (((-32767 - 1) <= 32747));
    #pragma endscop
}
