/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83017
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
    var_13 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) min(((~(((/* implicit */int) (short)3574)))), (((/* implicit */int) var_10))))), (((unsigned long long int) ((long long int) (unsigned char)106)))));
    var_14 = ((/* implicit */short) ((int) ((((/* implicit */_Bool) min((var_1), (((/* implicit */unsigned long long int) var_5))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)16646)), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))));
    var_15 = ((/* implicit */short) var_4);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)144)), ((unsigned short)47195)));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (signed char)0)) : ((~(((((/* implicit */_Bool) arr_1 [16LL] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [(short)12])) : (((/* implicit */int) var_10))))))));
        arr_5 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7826786574100717865ULL)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((long long int) (!(var_12)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32746))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [8U] = ((/* implicit */long long int) min((((short) ((((/* implicit */_Bool) (short)-32736)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_4))))), (((/* implicit */short) min((arr_8 [i_1]), (((/* implicit */unsigned char) arr_0 [i_1] [i_1])))))));
        arr_10 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */int) max((max((arr_1 [i_1] [i_1]), (((/* implicit */unsigned short) arr_8 [1U])))), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((/* implicit */int) var_12)))))))), ((~(((/* implicit */int) var_7))))));
    }
}
