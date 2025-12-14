/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95046
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
    var_16 += min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (unsigned char)2)) : (((var_5) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_9))))))), ((-(var_3))));
    var_17 = ((/* implicit */signed char) ((var_5) ? (((var_5) ? (((unsigned int) var_7)) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    var_18 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    arr_7 [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((14068130655366230752ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                    var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */int) arr_5 [i_0])) % (((/* implicit */int) arr_4 [i_0])))))));
                }
            } 
        } 
        arr_8 [i_0] = ((/* implicit */int) (+(9223372034707292160ULL)));
    }
}
