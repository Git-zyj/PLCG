/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60545
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
    var_14 = ((/* implicit */long long int) var_11);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [8])))) <= (((/* implicit */int) max((var_5), (((/* implicit */unsigned short) (unsigned char)154)))))))))));
        var_16 = ((/* implicit */int) ((long long int) ((((((/* implicit */_Bool) (unsigned char)149)) || (((/* implicit */_Bool) arr_1 [i_0])))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) min((var_2), ((unsigned char)156))))))));
    }
    var_17 ^= ((/* implicit */unsigned int) min((var_3), (((/* implicit */unsigned char) var_10))));
    var_18 = ((/* implicit */unsigned short) ((((((/* implicit */int) max((var_13), (((/* implicit */unsigned char) var_8))))) & (((/* implicit */int) min(((unsigned short)18749), (var_5)))))) | ((-((+(((/* implicit */int) var_5))))))));
}
