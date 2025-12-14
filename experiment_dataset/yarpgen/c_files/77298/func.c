/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77298
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
    var_19 = ((/* implicit */_Bool) var_11);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 *= ((/* implicit */short) ((((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (arr_0 [(signed char)4]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) < (arr_0 [(_Bool)1]))))))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [(unsigned short)18])) < (((/* implicit */int) ((arr_0 [(signed char)16]) >= (arr_0 [(unsigned char)8]))))))))));
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(arr_0 [i_0]))) : (((/* implicit */unsigned int) ((((arr_2 [i_0]) ^ (arr_2 [i_0]))) - (arr_2 [i_0]))))));
    }
}
