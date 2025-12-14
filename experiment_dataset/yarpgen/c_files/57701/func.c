/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57701
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
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */short) var_18)), ((short)11609))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) var_11);
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
    {
        var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? ((~(-407977703))) : (((/* implicit */int) (unsigned char)201))));
        var_20 ^= ((/* implicit */short) var_13);
    }
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)255)) | (2147483647)));
    var_22 = ((/* implicit */unsigned int) ((short) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)38)) : (var_2))), (((/* implicit */int) var_9)))));
}
