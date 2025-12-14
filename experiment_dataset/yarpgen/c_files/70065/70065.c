/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= (((~var_14) << (min(4, var_12))));
    var_18 = (max(var_18, var_5));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_2 [i_0] = ((arr_0 [i_0]) * ((min(var_9, 0))));
        var_19 = (((((-((min(102, (arr_1 [i_0] [i_0]))))))) ? ((((((arr_0 [i_0]) ^ var_7))))) : (((1 << (14187 - 14168))))));
    }
    var_20 = (max(var_14, (max((var_1 && 4161536), -1105356894700193904))));
    #pragma endscop
}
