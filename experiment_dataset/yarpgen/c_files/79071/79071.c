/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79071
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79071 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79071
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= var_2;

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0 + 1] = var_4;
        arr_3 [i_0] = (((((+(((-9223372036854775807 - 1) ? 123 : -441642569196593632))))) ? 1 : ((3888334556 + (-9223372036854775807 - 1)))));
    }
    for (int i_1 = 4; i_1 < 23;i_1 += 1)
    {
        var_11 ^= ((((((max(441642569196593632, var_9))) ? -45 : -64))) ? 1 : (var_7 % var_4));
        var_12 = var_4;
        arr_7 [17] [i_1 - 4] = (((~var_9) * ((((arr_5 [i_1 - 3]) * var_6)))));
        var_13 = (max(((var_8 - (~var_4))), var_8));
    }
    #pragma endscop
}
