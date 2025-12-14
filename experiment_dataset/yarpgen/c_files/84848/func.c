/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84848
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
    var_18 = ((/* implicit */unsigned char) (+((+(max((var_9), (((/* implicit */int) var_16))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) 0LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)182))) : (31457280U))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_6))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)8)) : (757853040)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (((((/* implicit */long long int) var_4)) ^ (arr_0 [i_0])))))) : (max((((/* implicit */unsigned long long int) 31457266U)), (((((/* implicit */_Bool) (unsigned short)61669)) ? (((/* implicit */unsigned long long int) var_12)) : (18446744073709551589ULL)))))));
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (+(var_15)))) ? (arr_1 [i_0] [i_0]) : (max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))));
    }
}
