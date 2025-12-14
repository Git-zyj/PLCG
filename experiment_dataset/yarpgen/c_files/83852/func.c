/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83852
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
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) arr_0 [(short)0])) : (var_2))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_2))) - (1LL)))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            var_16 = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned long long int) arr_0 [i_0])) ^ (var_9))));
            var_17 = ((/* implicit */unsigned short) (((!((_Bool)1))) && (((/* implicit */_Bool) ((var_13) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_9))))));
            var_18 = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]);
        }
        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (arr_5 [i_0] [i_0])));
        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned char)16])) ? (((/* implicit */unsigned long long int) var_2)) : (var_5)))) ? (((/* implicit */int) arr_4 [i_0])) : (((/* implicit */int) (_Bool)1)))))));
    }
    var_21 = ((/* implicit */unsigned long long int) (short)-26620);
    var_22 = ((/* implicit */long long int) (_Bool)1);
}
