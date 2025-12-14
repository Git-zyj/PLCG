/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74447
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
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_15 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) ^ (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_2 [i_0] [i_0 - 2])) : (((/* implicit */int) ((((/* implicit */int) (signed char)115)) < (((/* implicit */int) arr_1 [i_0 + 1] [i_0])))))));
        var_16 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0 + 1] [i_0 - 2]))));
        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 2] [i_0 + 1])) ? (((/* implicit */int) (signed char)-57)) : (((/* implicit */int) arr_2 [i_0] [i_0 + 1]))));
        var_18 = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) arr_3 [i_1 + 1] [(signed char)11]);
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) ((short) arr_4 [(signed char)7]))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) >> (((/* implicit */int) (_Bool)0))))) : (max((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1])), (var_11))))), (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3574584151032299901ULL)) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (signed char)66))))), (((arr_3 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32098))) : (2814628364125111973ULL)))))));
        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)-32767)) ? (((/* implicit */int) ((unsigned short) arr_5 [i_1 + 1] [i_1 + 1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 + 1])))))));
    }
    var_21 ^= ((/* implicit */_Bool) var_3);
}
