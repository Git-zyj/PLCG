/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73913
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73913 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73913
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
    var_18 = ((/* implicit */_Bool) (-(((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_3 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((var_14), (((/* implicit */signed char) arr_1 [i_0] [i_0]))))) : (((((/* implicit */_Bool) ((unsigned int) 10060890583657333692ULL))) ? (((/* implicit */int) var_7)) : (var_11)))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (+((+(arr_2 [i_0])))));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+((+(arr_6 [i_1])))));
        arr_10 [i_1] = ((/* implicit */unsigned short) (unsigned char)60);
        arr_11 [i_1] = ((/* implicit */unsigned short) (_Bool)0);
        arr_12 [i_1] [i_1] = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) (unsigned char)83)), (1354788420903882921ULL)))));
    }
    var_19 = ((/* implicit */unsigned short) max((((((unsigned long long int) var_15)) % (((((/* implicit */_Bool) (unsigned char)195)) ? (18055274118470527438ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_14)))))))));
}
