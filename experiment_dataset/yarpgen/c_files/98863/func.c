/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98863
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
    var_14 -= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_15 ^= ((/* implicit */unsigned int) (short)14486);
            var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) arr_3 [i_0] [i_0]))));
        }
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 4) 
        {
            var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_3))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14481))))))));
            var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */int) var_1)) != (((/* implicit */int) var_8)))))));
            arr_8 [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
        }
        var_19 *= ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (short)25346)) ? (((/* implicit */long long int) var_0)) : (var_7)))));
        var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (28U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)236)))));
    }
    var_21 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_2) != (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)240)))))))), (((unsigned long long int) var_12))));
}
