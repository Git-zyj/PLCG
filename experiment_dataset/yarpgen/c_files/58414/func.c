/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58414
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
    var_11 = min((((/* implicit */int) min((var_0), (var_2)))), (((((/* implicit */_Bool) ((unsigned short) (signed char)-116))) ? (((/* implicit */int) ((unsigned char) var_10))) : ((+(((/* implicit */int) var_3)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        arr_2 [i_0 - 2] [i_0] = ((/* implicit */unsigned int) var_5);
        var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)115))) : (257906847U))))));
    }
}
