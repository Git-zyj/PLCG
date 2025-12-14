/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83906
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
    var_11 = ((/* implicit */unsigned char) (signed char)45);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_12 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (min((((/* implicit */unsigned long long int) arr_1 [i_0])), (7590179356706937145ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)8])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (short)127))))) > (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (6149877255752805385ULL))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) arr_0 [i_0]))));
    }
}
