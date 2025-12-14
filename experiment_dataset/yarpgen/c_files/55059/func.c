/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55059
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_0)) | (((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)0)) == (((/* implicit */int) (unsigned short)33676))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (short)-1)) ? (((((/* implicit */_Bool) (unsigned short)49196)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-26258)))) : (((/* implicit */int) arr_1 [i_0])))) / (((/* implicit */int) var_11))));
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
        var_16 = ((/* implicit */signed char) (((((-(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) arr_1 [i_0 + 2])))) >> (((((/* implicit */int) var_2)) + (10232)))));
        var_17 = ((/* implicit */unsigned long long int) var_1);
    }
    var_18 = ((/* implicit */_Bool) ((unsigned short) (signed char)119));
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))), (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_2)) + (10243))))))))));
}
