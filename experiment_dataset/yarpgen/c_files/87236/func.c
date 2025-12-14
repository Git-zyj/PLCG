/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87236
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
    /* LoopSeq 2 */
    for (long long int i_0 = 1; i_0 < 6; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) var_7);
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) max((max((arr_2 [i_0 + 1] [i_0 - 1]), (arr_2 [i_0 + 3] [i_0 - 1]))), (((/* implicit */unsigned long long int) (unsigned char)123))));
        var_17 = ((/* implicit */unsigned int) (signed char)-126);
    }
    for (short i_1 = 1; i_1 < 20; i_1 += 1) 
    {
        arr_8 [i_1 + 3] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((unsigned short) arr_7 [i_1 - 1] [i_1 + 3]))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((arr_6 [i_1]), (((/* implicit */unsigned int) var_5)))))), (((/* implicit */unsigned int) (_Bool)1))));
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((((/* implicit */_Bool) (unsigned char)130)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))) ? (min(((~(((/* implicit */int) (unsigned char)132)))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_0))))))) : (((/* implicit */int) arr_5 [i_1] [i_1 + 1]))));
    }
    var_19 = ((/* implicit */signed char) ((short) var_1));
}
