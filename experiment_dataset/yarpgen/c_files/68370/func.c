/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68370
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68370 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68370
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
    var_16 |= ((/* implicit */short) ((unsigned char) (short)30433));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        arr_3 [i_0] [(unsigned short)7] = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_2)), (602340772U)));
        arr_4 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((unsigned int) arr_0 [i_0 + 1]))), (arr_2 [i_0 + 1])));
        arr_5 [i_0] = ((/* implicit */signed char) max((max((((/* implicit */short) arr_1 [i_0 + 1])), (max((((/* implicit */short) (signed char)23)), ((short)23154))))), (((short) (+(((/* implicit */int) (short)2646)))))));
        var_17 = ((/* implicit */long long int) ((((((((/* implicit */_Bool) 3692626521U)) || (((/* implicit */_Bool) (unsigned char)160)))) ? (min((((/* implicit */unsigned int) var_5)), (602340772U))) : (((unsigned int) 602340802U)))) >> (((602340775U) - (602340755U)))));
    }
    var_18 = var_4;
}
