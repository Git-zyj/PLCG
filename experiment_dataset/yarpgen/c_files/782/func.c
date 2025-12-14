/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/782
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                var_10 = ((/* implicit */int) ((((/* implicit */long long int) 15)) ^ (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_4 [i_0])), (-7530896147202081311LL)))) ? (7530896147202081310LL) : (min((((/* implicit */long long int) var_4)), (7530896147202081294LL)))))));
                var_11 *= ((((/* implicit */_Bool) ((var_1) / (var_6)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((long long int) arr_2 [i_1 + 1])));
            }
        } 
    } 
    var_12 = ((/* implicit */int) ((long long int) (-(((/* implicit */int) ((1611068085) != (-30216612)))))));
}
