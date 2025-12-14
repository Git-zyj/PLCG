/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81883
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81883 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81883
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-7886)) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)7886)) : (((/* implicit */int) (short)7885)))), (((/* implicit */int) ((signed char) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
        arr_2 [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3463893872U)))))))), ((-(max((var_2), (504403158265495552LL)))))));
        var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_1)), ((+(((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (831073436U)))))));
    }
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)-7886)) : ((~(var_12)))));
    var_16 = ((/* implicit */unsigned short) min((((/* implicit */int) max((((unsigned short) 17928811219738315048ULL)), (((unsigned short) (unsigned short)24))))), ((~((-(((/* implicit */int) (signed char)-123))))))));
}
