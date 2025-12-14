/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84985
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
    var_11 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [1U] = ((/* implicit */_Bool) max((arr_1 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(1061067512U)))) != (var_6))))));
        arr_4 [i_0] [(short)5] |= ((/* implicit */unsigned short) max((3233899785U), (((/* implicit */unsigned int) (unsigned char)255))));
    }
    var_12 = ((/* implicit */unsigned short) var_6);
    var_13 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_7)))))));
}
