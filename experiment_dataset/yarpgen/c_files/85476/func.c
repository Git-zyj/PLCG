/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85476
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85476 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85476
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
    var_16 = var_8;
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) - (arr_3 [i_0] [i_0])))))))));
        var_17 = ((/* implicit */unsigned long long int) 4294967295U);
        arr_5 [i_0] = ((/* implicit */unsigned int) arr_2 [i_0]);
        arr_6 [2U] = ((/* implicit */unsigned long long int) var_13);
        var_18 = ((/* implicit */unsigned short) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 3) 
    {
        var_19 *= min((var_0), (((/* implicit */unsigned int) var_12)));
        arr_9 [i_1] = ((/* implicit */long long int) ((unsigned char) 8323072U));
        arr_10 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1 + 1] [i_1])) || (((/* implicit */_Bool) arr_8 [i_1] [i_1])))))));
    }
}
