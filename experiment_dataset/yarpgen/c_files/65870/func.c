/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65870
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) + (((arr_1 [i_0]) - (arr_1 [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) arr_1 [i_0]))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (short)5210))))) : (((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_18 = ((/* implicit */unsigned long long int) ((_Bool) arr_1 [i_0]));
        var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) ((-7985786936372453054LL) <= (((/* implicit */long long int) var_1))))))) < (6815049827477561120LL)));
    }
    var_20 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) == (var_1)));
    var_21 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)74))) : (-7985786936372453043LL))))) == (((((/* implicit */unsigned long long int) var_2)) - (var_9)))));
}
