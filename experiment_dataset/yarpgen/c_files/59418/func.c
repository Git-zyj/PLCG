/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59418
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_17 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0 + 3] [i_0 - 1]))));
        var_18 = ((/* implicit */unsigned int) var_9);
        var_19 = ((/* implicit */unsigned int) min((var_19), (var_10)));
        var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) > (((((/* implicit */_Bool) (short)29789)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535))))));
        var_21 = ((/* implicit */long long int) var_9);
    }
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 4341587350840083789ULL)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)2173))) : (-9107047729490680438LL)))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((-2597676439809175949LL) + (((/* implicit */long long int) 2924280242U))))));
}
