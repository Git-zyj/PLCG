/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79168
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_11 = (max(var_11, (arr_0 [i_0] [i_0])));
        var_12 = (~-4);
        arr_2 [i_0] = (max(61, 59));
    }
    var_13 = (((var_6 | (!var_9))) < (max(var_6, var_7)));
    var_14 = ((((max(255, 6))) ? ((((836474604 - 408890404) ? -10183 : var_1))) : (((10859497421157274223 * var_9) / -56))));
    #pragma endscop
}
