/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80098
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) var_4);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) min((((unsigned char) var_4)), (((/* implicit */unsigned char) ((signed char) var_4)))))) : (((/* implicit */int) var_10))));
        var_13 *= ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))))), (((/* implicit */unsigned int) min(((-(((/* implicit */int) var_3)))), (((((/* implicit */_Bool) var_6)) ? (var_7) : (var_7))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 13; i_1 += 4) 
    {
        var_14 -= (-(((((/* implicit */_Bool) var_7)) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */int) var_1)) | (((/* implicit */int) var_2)))))));
        arr_6 [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_4)))));
    }
    var_15 *= ((/* implicit */_Bool) (+(max((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))), ((-(((/* implicit */int) var_10))))))));
    var_16 = ((/* implicit */unsigned short) (-(min((((((/* implicit */_Bool) var_6)) ? (var_11) : (((/* implicit */int) var_8)))), (max((((/* implicit */int) var_10)), (var_7)))))));
    var_17 = max((((((_Bool) var_6)) ? (((/* implicit */long long int) var_11)) : (((long long int) (signed char)-75)))), (((/* implicit */long long int) var_3)));
}
