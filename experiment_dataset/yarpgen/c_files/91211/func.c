/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91211
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91211 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91211
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
    var_20 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)4879))));
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 20; i_0 += 4) 
    {
        var_21 -= ((/* implicit */unsigned char) ((2536608859U) < (((/* implicit */unsigned int) 2147483647))));
        arr_4 [i_0 - 1] = ((/* implicit */_Bool) var_5);
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) ((((134217728U) / (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) | (((/* implicit */unsigned int) ((((var_3) + (2147483647))) >> (((var_16) - (4123340026195018941LL)))))))))));
    }
    var_23 -= ((/* implicit */unsigned short) (!((_Bool)1)));
    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) + (((((/* implicit */_Bool) 1758358436U)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (var_6)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) / (1955027157U)))), (((((/* implicit */_Bool) 2536608864U)) ? (var_1) : (((/* implicit */long long int) var_14))))))) : (max((((/* implicit */unsigned long long int) ((unsigned short) (unsigned short)65535))), (var_9)))));
}
