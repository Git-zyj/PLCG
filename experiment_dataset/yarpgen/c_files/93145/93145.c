/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 -= var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_17 = (max(4294967295, ((((((arr_1 [1]) / (arr_4 [i_0])))) ? ((var_2 ? var_1 : 17617448953636281293)) : 2147483646))));
                var_18 *= (min((arr_0 [i_0] [1]), (arr_1 [i_0])));
            }
        }
    }
    var_19 = (max((max(var_8, (~1))), (max(2147483647, -2147483645))));
    var_20 = (min(((var_4 ? (~234) : ((7 ? 65535 : 0)))), (((0 ? 255 : 57)))));
    var_21 = (max(11292095792041646531, ((max(var_1, ((127 ? var_9 : 251)))))));
    #pragma endscop
}
