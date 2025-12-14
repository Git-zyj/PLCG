/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71292
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
    for (long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0 - 1] = ((/* implicit */long long int) ((unsigned char) (~(max((4294967295U), (((/* implicit */unsigned int) (unsigned short)62031)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) max((min((4294967295U), (((/* implicit */unsigned int) (unsigned short)33523)))), (min((((/* implicit */unsigned int) (unsigned short)15389)), (4294967295U)))));
        arr_4 [11ULL] = ((/* implicit */long long int) min((((unsigned long long int) 14236551397383843012ULL)), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)14621))))), (max((2320882661U), (((/* implicit */unsigned int) -967486797)))))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (unsigned short)33523));
    }
    var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
}
