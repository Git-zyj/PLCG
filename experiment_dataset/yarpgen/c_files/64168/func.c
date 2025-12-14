/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64168
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
    var_12 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) (unsigned char)92)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_11)))), ((-(((((/* implicit */_Bool) var_9)) ? (var_1) : (((/* implicit */int) var_4)))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) var_8);
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (min((((/* implicit */unsigned long long int) (-((~(((/* implicit */int) var_2))))))), ((((((_Bool)1) ? (((/* implicit */unsigned long long int) var_0)) : (var_8))) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0])))))))))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((max((var_1), (((/* implicit */int) (unsigned short)7680)))) != ((+(((/* implicit */int) (unsigned short)65535))))))) : (max((-11), (((/* implicit */int) (unsigned short)14))))));
    }
}
