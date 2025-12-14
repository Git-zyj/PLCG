/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60042
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
    var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */int) var_0))))) : (((unsigned long long int) var_13))))))))));
    var_20 = min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_10) : (((/* implicit */int) var_17))))) ? (var_11) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))), (((/* implicit */int) max((((/* implicit */signed char) ((var_2) == (((/* implicit */long long int) ((/* implicit */int) var_3)))))), ((signed char)-124)))));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) | (2478348507U)))) & ((~(arr_1 [16U]))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_11))))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)22911), (((/* implicit */unsigned short) (unsigned char)249))))) + (((((/* implicit */_Bool) ((var_13) / (557482817)))) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))));
    }
}
