/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84429
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) min((arr_1 [i_0]), (((/* implicit */unsigned short) var_13)))))))));
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)52730))))) ? (4969718812241220781ULL) : (((/* implicit */unsigned long long int) 3221225472U)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64942)))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)20852)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((unsigned int) 3221225459U)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) arr_0 [12U]))));
    }
    var_21 *= var_13;
    var_22 |= ((/* implicit */long long int) (+(((((/* implicit */_Bool) var_8)) ? (max((3221225459U), (var_6))) : (((/* implicit */unsigned int) ((/* implicit */int) ((9223372036854775807LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50318)))))))))));
}
