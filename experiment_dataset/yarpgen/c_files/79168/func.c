/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79168
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
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) max((var_11), (((/* implicit */signed char) arr_0 [i_0] [i_0]))));
        var_12 = ((/* implicit */unsigned int) (~(-4)));
        arr_2 [i_0] = ((/* implicit */_Bool) max(((unsigned char)61), ((unsigned char)59)));
    }
    var_13 = ((((((/* implicit */int) var_6)) | (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))) < (max((((/* implicit */int) var_6)), ((+(((/* implicit */int) var_7)))))));
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((+(((/* implicit */int) (unsigned char)255)))), ((+(((/* implicit */int) (signed char)6))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((836474604U) - (408890404U)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (short)10183))))) : (var_1)))) : (((((10859497421157274223ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-56)))))));
}
