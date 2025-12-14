/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59528
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */short) ((((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_14)))) : (((long long int) var_3)))) < (((/* implicit */long long int) ((/* implicit */int) var_18)))));
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)225))) - (13404526231999757716ULL)))) ? (((((/* implicit */long long int) var_8)) + (var_4))) : (((/* implicit */long long int) 10U))))) ? (((/* implicit */int) ((var_15) || (((/* implicit */_Bool) (+(5042217841709793900ULL))))))) : (((/* implicit */int) var_15)))))));
    }
    var_22 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_19)) + (((/* implicit */int) var_9))))))));
    var_23 &= ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_19)), (var_2)))) & ((+(var_0))));
    var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) var_12)), (((((/* implicit */int) var_6)) + ((+(((/* implicit */int) var_17))))))));
}
