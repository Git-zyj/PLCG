/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91762
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91762 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91762
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
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) ((((arr_2 [i_0]) < (var_10))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)96)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)19801))))) : (2113929216U)));
        var_19 = ((/* implicit */unsigned short) ((((var_9) != (var_9))) ? (((((/* implicit */_Bool) 268435440)) ? (var_7) : (((/* implicit */long long int) 742618773U)))) : (((/* implicit */long long int) var_17))));
        arr_4 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) var_8)))));
    }
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
    {
        var_20 = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_2)))) ? (1939802393) : (min((arr_1 [i_1]), (var_10))))));
        arr_7 [i_1] [i_1] = ((/* implicit */long long int) (signed char)-100);
    }
}
