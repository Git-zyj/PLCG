/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82016
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_10 ^= ((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) ((int) (-9223372036854775807LL - 1LL))))));
    var_11 = 9223372036854775807LL;
    var_12 = ((/* implicit */_Bool) max((((long long int) var_5)), (((((/* implicit */_Bool) ((int) (-9223372036854775807LL - 1LL)))) ? (var_9) : (((/* implicit */long long int) ((var_7) >> (((-12LL) + (24LL))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = 306652643380687102LL;
                arr_5 [i_0] [i_0] = ((int) (-(((long long int) (_Bool)0))));
            }
        } 
    } 
}
