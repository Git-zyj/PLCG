/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66898
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
    var_14 = ((/* implicit */short) (-(var_13)));
    var_15 = ((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)1))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)207)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))) : (var_3)))))) : (((((/* implicit */_Bool) var_12)) ? (arr_0 [i_0 - 2]) : (((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) arr_1 [i_0])))))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_12);
    }
}
