/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96181
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
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-105)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-4282656503647489497LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((var_2) ? (((/* implicit */int) var_6)) : (var_14))) : (((/* implicit */int) var_16)))) : (((/* implicit */int) var_10)))))));
    var_20 = ((/* implicit */short) var_1);
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (var_17)));
    var_22 = ((/* implicit */signed char) var_1);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_5 [(unsigned char)3] [i_1] [i_0] = ((/* implicit */short) var_11);
            arr_6 [i_0] [i_1] [(short)7] = ((/* implicit */_Bool) var_14);
            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) var_1))));
        }
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) var_7))));
        var_25 ^= ((/* implicit */_Bool) var_13);
    }
}
