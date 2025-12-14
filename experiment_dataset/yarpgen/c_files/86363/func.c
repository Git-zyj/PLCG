/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86363
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
    var_13 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */_Bool) min((1), (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))) : (((/* implicit */unsigned int) max((((((/* implicit */int) var_6)) / (((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) var_8)))))));
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_2)))) + (((/* implicit */int) var_10))))) ? (((((((/* implicit */int) (unsigned char)11)) - (((/* implicit */int) var_4)))) + (((/* implicit */int) (short)26706)))) : (((((/* implicit */_Bool) max((0ULL), (((/* implicit */unsigned long long int) var_3))))) ? ((+(((/* implicit */int) var_8)))) : ((((_Bool)1) ? (((/* implicit */int) (unsigned char)11)) : (((/* implicit */int) (unsigned char)166)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) (unsigned char)0);
        var_16 = ((/* implicit */unsigned int) (+(((unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)11)), (1535766399U))))));
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 1) 
    {
        var_17 = ((/* implicit */unsigned char) var_2);
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_1)), (var_0)))) : (arr_5 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) min((-1372111136), (6604222)))))))) : (arr_3 [i_1] [i_1])));
    }
    var_18 = ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32704)))))) / (var_12))), (var_12)));
}
