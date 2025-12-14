/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58582
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
    var_16 = ((/* implicit */long long int) min((((/* implicit */int) var_13)), (var_0)));
    var_17 = ((/* implicit */unsigned int) var_15);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) ((((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_1)))) && (((/* implicit */_Bool) arr_0 [14])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)125))))) : (-4070552811171209153LL)));
        var_19 ^= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (signed char)-1))))) * (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_7))))));
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)20278)) && ((_Bool)1)));
    }
    var_21 = ((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)27)));
    var_22 = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_6))));
}
