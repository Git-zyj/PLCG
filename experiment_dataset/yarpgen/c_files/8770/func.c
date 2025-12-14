/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8770
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8770 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8770
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
    var_10 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((17575006175232ULL), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 ^= ((/* implicit */unsigned char) ((short) ((max((((/* implicit */long long int) arr_0 [i_0])), (9007199254740991LL))) - (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) & (((/* implicit */int) var_7))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-9693)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) (short)-9693)))) % (((/* implicit */int) ((((/* implicit */int) ((unsigned short) (short)-18263))) != (((((/* implicit */int) (short)9692)) ^ (((/* implicit */int) (unsigned short)10)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned char) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) ((unsigned short) arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)9705)) : (((/* implicit */int) (short)9714)))))) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (short)-9715))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) : (max((var_2), (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (max((((15988723437990206987ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0ULL)) ? (9085112850765042136LL) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))))));
        var_13 = ((/* implicit */signed char) ((unsigned short) 15988723437990206987ULL));
    }
}
