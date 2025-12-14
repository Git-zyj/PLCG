/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82017
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (390137617U)))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */_Bool) (short)20753)) ? (((/* implicit */int) (unsigned short)879)) : (((/* implicit */int) (unsigned short)861))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) & (((unsigned int) var_6))));
        arr_4 [i_0] = ((/* implicit */unsigned int) arr_1 [i_0]);
        var_19 = ((/* implicit */unsigned int) max(((short)30477), (((/* implicit */short) (unsigned char)81))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)11674)) ? (((/* implicit */int) (unsigned short)902)) : (((/* implicit */int) (short)-30485))));
        arr_8 [i_1] = ((/* implicit */signed char) ((int) max((((((/* implicit */int) (unsigned short)64657)) * (((/* implicit */int) var_17)))), (((/* implicit */int) arr_6 [(unsigned short)5])))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)64675)) || (((/* implicit */_Bool) (short)-1062))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [(unsigned short)6])) <= (((/* implicit */int) arr_6 [i_2]))))), (((var_0) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) / (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_1 [(_Bool)1])), (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) ^ (var_10))))))));
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_2))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2]))) : (var_15))) : (((((/* implicit */_Bool) (unsigned short)831)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-483))) : (-4472286216143130722LL))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) var_13))));
    var_22 = ((/* implicit */unsigned int) var_15);
}
