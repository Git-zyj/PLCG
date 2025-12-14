/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90073
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
    var_12 -= ((/* implicit */_Bool) (short)30617);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((int) arr_1 [i_0 + 1]))), (((((/* implicit */_Bool) arr_1 [i_0 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 3]))) : (10856895151709649437ULL)))));
        arr_2 [i_0] = ((/* implicit */unsigned char) (short)-9044);
        arr_3 [15U] &= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)117)) ? (7589848921999902178ULL) : (515687190639591641ULL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) : (-8654635469447751511LL)))) ? (((((/* implicit */int) arr_1 [i_0 - 1])) + (((/* implicit */int) ((short) var_7))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 2]))))));
    }
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 0U)), (16967581034409936637ULL))))));
        var_15 &= ((/* implicit */short) min((min((10856895151709649441ULL), (((/* implicit */unsigned long long int) arr_5 [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_7 [i_1])), ((-(4294967295U))))))));
    }
}
