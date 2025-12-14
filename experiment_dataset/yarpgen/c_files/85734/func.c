/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85734
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
    var_18 = ((/* implicit */unsigned int) (unsigned short)0);
    var_19 *= ((/* implicit */unsigned int) min((((((_Bool) var_7)) ? (max((((/* implicit */unsigned long long int) var_15)), (var_16))) : (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */long long int) ((signed char) var_5))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */signed char) min((((((((/* implicit */long long int) arr_0 [i_0 - 1])) - (arr_1 [1]))) + (((/* implicit */long long int) -1477309738)))), (max((((-3271188436261061551LL) + (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((var_0) ? (arr_1 [i_0 - 1]) : (arr_1 [i_0])))))));
        var_21 = ((/* implicit */_Bool) ((short) ((min((((/* implicit */long long int) (unsigned short)21197)), (var_13))) & (arr_1 [i_0 - 1]))));
    }
    var_22 &= ((/* implicit */signed char) max((((/* implicit */unsigned short) var_0)), (min((var_11), (max(((unsigned short)44327), ((unsigned short)44338)))))));
}
