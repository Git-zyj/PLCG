/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95018
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
    var_16 -= ((/* implicit */unsigned int) ((unsigned short) var_11));
    var_17 = ((/* implicit */unsigned int) min((var_17), (((((((/* implicit */unsigned int) ((((/* implicit */int) var_3)) + (var_4)))) <= (min((var_8), (((/* implicit */unsigned int) var_2)))))) ? (((unsigned int) ((9223372036854775807LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)19005)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2676001633599482711LL)) ? (((int) 1055980560)) : ((~(((/* implicit */int) var_12)))))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((-4052165244870173705LL), (((/* implicit */long long int) var_15))))) ? (var_14) : (max((((/* implicit */long long int) var_3)), ((+(var_11)))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        arr_2 [i_0 + 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (81814091U) : (var_8))) * (((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0])))))))) : (((long long int) arr_1 [i_0 + 1]))));
        var_19 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0 - 1]))));
        var_20 = ((/* implicit */signed char) (_Bool)1);
    }
}
