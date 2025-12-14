/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82283
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
    for (int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_10 = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [7] = ((/* implicit */long long int) max((4243259309U), (((/* implicit */unsigned int) (unsigned char)35))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 1914486265U)) ? (((((/* implicit */_Bool) 126174006)) ? (((/* implicit */int) (signed char)1)) : (126174006))) : (((((/* implicit */int) var_1)) << (((var_8) - (449577145)))))))));
    }
    var_11 = ((/* implicit */unsigned long long int) (_Bool)1);
}
