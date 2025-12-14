/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71479
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71479 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71479
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
    var_16 = ((/* implicit */short) ((unsigned char) ((((/* implicit */_Bool) ((var_3) | (var_8)))) ? (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_14))))) : (var_6))));
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */unsigned short) var_7)), (((unsigned short) var_8))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned short)15876))))) ? (((/* implicit */int) min(((unsigned char)111), (((/* implicit */unsigned char) var_10))))) : (((/* implicit */int) (unsigned short)23459)))))))));
    var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(var_6)))) ? (((unsigned int) var_14)) : (((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)42076)))))))) ? (((/* implicit */int) var_11)) : (((((/* implicit */int) max((var_7), (var_13)))) | (((/* implicit */int) var_15))))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) (+(max((((/* implicit */int) var_11)), (var_3)))));
        arr_3 [i_0] = ((/* implicit */signed char) ((unsigned long long int) (signed char)-126));
    }
    for (int i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) 2073351124U))));
        arr_6 [i_1] = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
    }
    for (int i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_20 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (signed char)-120)), (16556527841233490917ULL)));
        arr_9 [i_2] = ((/* implicit */_Bool) ((((unsigned int) var_1)) << (((((((/* implicit */_Bool) ((signed char) (signed char)109))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)29125)))) : (((2147483648U) / (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))) - (29111U)))));
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (signed char)(-127 - 1)))));
    }
}
