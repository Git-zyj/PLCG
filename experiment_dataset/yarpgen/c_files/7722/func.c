/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7722
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) % (((/* implicit */int) arr_1 [i_0])))))));
        arr_4 [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) & (((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) -113701001))))));
        var_12 += ((/* implicit */int) ((((unsigned int) ((_Bool) var_7))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0])))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((((/* implicit */unsigned long long int) var_5)) * (0ULL))) * (((18446744073709551604ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)15963))))))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) (unsigned char)192)))))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((0ULL) > (19ULL))))));
    }
    var_14 = ((/* implicit */unsigned short) var_6);
    var_15 = var_8;
}
