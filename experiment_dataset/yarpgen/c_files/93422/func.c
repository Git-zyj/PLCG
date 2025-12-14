/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93422
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [0ULL] [0ULL] [7ULL] = ((/* implicit */short) arr_0 [0ULL] [i_1]);
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [(unsigned char)5])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)82)) | (((/* implicit */int) var_3))))) ? (((/* implicit */int) min((var_7), (((/* implicit */unsigned char) arr_3 [i_0]))))) : ((~(((/* implicit */int) var_9))))))) : (max((max((arr_4 [i_0] [i_1]), (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) arr_3 [i_0])))))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            }
        } 
    } 
    var_18 = ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-124)), ((unsigned char)188))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)68)) >> (((11880553319322055873ULL) - (11880553319322055864ULL)))))), (var_12))));
    var_19 = var_3;
}
