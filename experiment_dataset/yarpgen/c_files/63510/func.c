/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63510
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63510 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63510
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
    var_17 = ((/* implicit */signed char) min(((-(var_14))), (((/* implicit */unsigned int) ((unsigned char) (!(((/* implicit */_Bool) -1635162167))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 3; i_0 < 20; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned char) (unsigned short)126);
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0 + 3] [(unsigned short)14])) : (((/* implicit */int) arr_0 [i_0 + 4] [18LL]))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (1081315897U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1] [(short)18]))))) : (((unsigned int) arr_0 [i_0 + 4] [(unsigned short)20])))))));
    }
    var_20 = ((/* implicit */int) ((3213651398U) < (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)121)) % (((/* implicit */int) (unsigned short)32760)))) * (((/* implicit */int) (unsigned short)32775)))))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-122))))))) : (max((max((2570754157U), (((/* implicit */unsigned int) var_2)))), (((((/* implicit */_Bool) 2147483647)) ? (2570754157U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))))));
}
