/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75489
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75489 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75489
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) || (((/* implicit */_Bool) var_4))));
    /* LoopSeq 1 */
    for (signed char i_0 = 3; i_0 < 8; i_0 += 1) 
    {
        var_18 = arr_1 [i_0] [i_0];
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((arr_0 [i_0] [(signed char)2]), (arr_0 [(signed char)4] [(unsigned char)8]))))))))))));
    }
    var_20 ^= ((/* implicit */signed char) (-(var_8)));
}
