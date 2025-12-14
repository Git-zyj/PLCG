/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75019
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_10 ^= ((/* implicit */unsigned char) ((signed char) 1740493166U));
        arr_2 [(unsigned char)4] [i_0] = ((/* implicit */signed char) var_1);
    }
    var_11 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) * (((/* implicit */int) min(((_Bool)0), (var_6))))))), (min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11614895066318529156ULL))), (((((/* implicit */_Bool) var_4)) ? (6831849007391022455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
}
