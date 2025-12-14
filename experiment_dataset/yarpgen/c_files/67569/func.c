/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67569
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67569 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67569
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
    var_19 = ((/* implicit */short) var_18);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)50))) * (((var_14) ? (15887703464444077067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 0)), (8242174943836482971ULL))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32757)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_2))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_3 [i_0] = (+(max((arr_1 [i_0 + 1]), (arr_1 [i_0 + 1]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) ((signed char) (+(arr_1 [17LL]))))) : (((int) ((long long int) (unsigned short)25361)))));
    }
    var_21 = ((/* implicit */unsigned short) ((((var_14) ? (max((-5), (((/* implicit */int) var_13)))) : (max((((/* implicit */int) var_14)), (var_15))))) == ((+((~(-5)))))));
}
