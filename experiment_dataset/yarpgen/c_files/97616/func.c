/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97616
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
    var_20 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) ((var_18) < (((/* implicit */unsigned long long int) var_3))))) - (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (var_10))))))) : ((-(13845021665379256891ULL)))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_21 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [(signed char)10] |= ((/* implicit */unsigned short) ((((4290919344U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [14]))))) - (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_4 [i_0 + 2] [i_0] = ((/* implicit */unsigned long long int) var_4);
        arr_5 [i_0] = ((/* implicit */unsigned short) (signed char)115);
    }
}
