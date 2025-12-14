/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74161
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74161 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74161
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
    var_13 = min(((signed char)-40), (((/* implicit */signed char) var_11)));
    var_14 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2996640452U)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)166))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)159))) < (-5684444871083133038LL)));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        var_16 = ((/* implicit */unsigned long long int) ((var_8) && (((/* implicit */_Bool) 2996640452U))));
    }
}
