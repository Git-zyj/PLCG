/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89172
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
    for (short i_0 = 2; i_0 < 22; i_0 += 2) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [19U] [i_0 - 2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 2])) ? (1073226614U) : (203993119U)))) ? ((~(1073226605U))) : (arr_0 [i_0 - 2] [i_0 - 2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [4U] [4U])) - ((-(((/* implicit */int) (unsigned short)49152)))))))));
        var_13 = ((/* implicit */int) ((1625680750618338865ULL) + (((/* implicit */unsigned long long int) 1073226627U))));
    }
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) (((!(var_11))) ? (((((/* implicit */_Bool) 3221740691U)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)49154)) ? (((/* implicit */int) (signed char)72)) : (((/* implicit */int) (short)2127))))) : (2117288877U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
}
