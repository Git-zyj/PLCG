/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90826
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90826 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90826
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_15))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)51452)) ? (1048064U) : (794211983U)))) ? (((/* implicit */int) (signed char)90)) : ((~(((/* implicit */int) (short)-6699))))))) ? (((/* implicit */unsigned int) 1181440598)) : (4294967295U)));
                var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_1]))) * (((794211983U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1] [i_1])))))))), (max((arr_3 [i_0] [i_1]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_2 [i_0] [(short)17])))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) (-(((/* implicit */int) ((signed char) min((var_10), (((/* implicit */short) var_1)))))))))));
}
