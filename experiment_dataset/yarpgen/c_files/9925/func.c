/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9925
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
    var_12 = max((((/* implicit */unsigned long long int) (unsigned short)4851)), (((unsigned long long int) var_9)));
    var_13 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), (var_10)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))))) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
    var_14 = ((/* implicit */int) (!((!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) var_4)))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_9)) != (var_6)));
        var_16 = ((/* implicit */unsigned char) ((signed char) 18446744073709551588ULL));
    }
    for (signed char i_1 = 4; i_1 < 14; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) min((var_11), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (67108800LL))))));
        arr_6 [0U] |= ((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) arr_1 [i_1 + 1])))));
    }
}
