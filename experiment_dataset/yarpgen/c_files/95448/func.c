/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95448
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95448 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95448
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
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (883202140)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) != (((/* implicit */int) arr_2 [i_0 + 1])))))));
        var_16 -= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned int) (~(((/* implicit */int) arr_1 [(short)12]))))), (min((((/* implicit */unsigned int) arr_0 [(_Bool)1])), (25U)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)64))))) ? (((long long int) arr_2 [i_1])) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
        var_18 = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (-883202140))))));
    }
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) (~((~(((/* implicit */int) ((unsigned char) var_0))))))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 1515722904U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22552))) : (1687191404281863378ULL)));
}
