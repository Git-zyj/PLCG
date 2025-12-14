/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75689
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((((/* implicit */unsigned long long int) var_9)), (max((((/* implicit */unsigned long long int) var_2)), (var_3)))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) / (arr_0 [i_0] [i_0])))), (((arr_2 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))));
        var_12 = ((/* implicit */unsigned short) arr_1 [(unsigned char)15]);
    }
}
