/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73232
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        var_19 ^= ((/* implicit */short) arr_0 [i_0]);
        var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) min((((/* implicit */long long int) var_8)), ((((_Bool)0) ? (3LL) : (9201742757709996731LL))))))));
        arr_2 [i_0 + 1] = ((/* implicit */short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (((arr_0 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (896LL))))), (((-4LL) + (((/* implicit */long long int) 2842129050U))))));
    }
    var_21 = ((((((((/* implicit */long long int) ((/* implicit */int) var_0))) / (-4540802526901812472LL))) >> (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_18))) > (5212668258651112058LL)))))) * (((/* implicit */long long int) ((/* implicit */int) var_13))));
    var_22 = ((/* implicit */_Bool) var_13);
    var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))) : ((((_Bool)1) ? (9223372036854775807LL) : (var_14))))) >= (((/* implicit */long long int) ((/* implicit */int) var_2)))));
}
