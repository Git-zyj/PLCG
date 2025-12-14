/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96724
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
    var_13 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_8)) : (var_6))), ((+(var_4)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-1) : (((/* implicit */int) var_1))))) > (((var_3) * (var_4)))))) : ((-(((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) 2133880653U))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))) * (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_1 [i_0] [i_0])))))), ((+((+(((/* implicit */int) var_9))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (+(((/* implicit */int) min((((_Bool) arr_1 [i_0] [i_0])), (arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 4) 
    {
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1 - 3])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : ((+(((/* implicit */int) var_5))))));
        var_16 = ((/* implicit */signed char) (unsigned char)33);
    }
    var_17 = ((/* implicit */unsigned char) ((((var_8) + (2147483647))) << (((((((/* implicit */_Bool) ((var_3) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1))))) : (var_3))) - (31725ULL)))));
}
