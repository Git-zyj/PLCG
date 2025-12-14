/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79906
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((!(((0 ? 32767 : 65218))))) ? (((((-680754118 ? -92 : -126))) ? 114 : 65528)) : (((((-1447036018131604124 ? 7214837871057564270 : -123)) == 118))));
    var_21 |= ((14122431206865383143 ? var_13 : var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_22 = ((((((((-76 ? 49 : 170))) ? (94 == 124) : ((-107 ? 123 : 49))))) ? ((12 | ((0 ? 1447036018131604126 : 2155093814)))) : ((((((65535 ? 1 : 1))) ? 126 : 21161)))));
                var_23 = (max(var_23, ((((((196 ? (!-9880) : (!-1)))) ? (((((0 >> (1600941782 - 1600941766)))) ? 2734 : (((-9223372036854775807 - 1) ? (-127 - 1) : -1447036018131604111)))) : 0)))));
                var_24 = (min(var_24, ((((-(-1 || 1912249921)))))));
            }
        }
    }
    var_25 &= var_8;
    #pragma endscop
}
