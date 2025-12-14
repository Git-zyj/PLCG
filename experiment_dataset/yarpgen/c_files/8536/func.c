/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8536
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_4 [(signed char)8] [17U] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)4232))))) % (arr_2 [i_0])));
        arr_5 [i_0] [17LL] = ((unsigned short) ((unsigned int) var_4));
    }
    var_14 = var_2;
    var_15 &= ((/* implicit */unsigned char) min((max((4294967279U), (((/* implicit */unsigned int) max(((unsigned short)4218), (((/* implicit */unsigned short) var_4))))))), (((/* implicit */unsigned int) ((int) (unsigned char)188)))));
    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 391313643)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)61303))))) : (((var_9) | (((/* implicit */unsigned int) 0))))))));
}
