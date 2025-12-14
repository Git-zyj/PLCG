/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81428
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned int) max((var_10), ((+(arr_1 [i_0])))));
        var_11 = ((/* implicit */_Bool) (~(36028797016866816LL)));
    }
    for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [6U] [i_1])) ? (((/* implicit */int) (unsigned char)255)) : (arr_2 [i_1] [i_1])))) ? (((unsigned int) ((((/* implicit */int) var_7)) - (((/* implicit */int) (unsigned char)33))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
        var_12 = ((/* implicit */unsigned int) (unsigned short)53958);
    }
    var_13 -= ((/* implicit */unsigned short) max(((-(((/* implicit */int) max(((signed char)7), ((signed char)125)))))), (((/* implicit */int) var_7))));
}
