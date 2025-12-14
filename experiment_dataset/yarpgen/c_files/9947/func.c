/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9947
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
    var_10 = ((/* implicit */signed char) min((var_0), (((((/* implicit */int) var_5)) ^ (((((/* implicit */int) var_9)) >> (((/* implicit */int) var_5))))))));
    var_11 = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) min((((/* implicit */short) var_2)), ((short)11667)))) : (((/* implicit */int) ((signed char) var_0))))) + (2147483647))) << (((((/* implicit */int) var_9)) - (14883)))));
    var_12 = ((var_3) ^ (((/* implicit */int) var_1)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) min((((((/* implicit */int) arr_3 [i_0])) ^ (((/* implicit */int) var_9)))), (((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (arr_1 [i_0])))));
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_4))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) < (2302015938U)))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_1 [i_0])))));
        var_13 -= ((/* implicit */long long int) min(((+(((var_0) + (((/* implicit */int) var_6)))))), (((((/* implicit */_Bool) 2302015938U)) ? (arr_1 [i_0]) : (((/* implicit */int) var_2))))));
    }
}
