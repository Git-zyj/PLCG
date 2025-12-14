/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96739
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
    var_10 = ((/* implicit */_Bool) var_8);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_11 = ((/* implicit */long long int) (+(((/* implicit */int) var_5))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0 - 2])) - (((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    var_12 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_8)), (4294967295U)))) < ((+(10819595748081659725ULL)))))), (var_3)));
    var_13 = min((((((/* implicit */_Bool) var_2)) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (1264928175U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27223)))))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1341255049)) ? (2147483648U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)4)))))))));
}
