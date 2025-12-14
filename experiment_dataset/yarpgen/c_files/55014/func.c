/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55014
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
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) arr_0 [i_0]);
        var_12 = ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_2 [i_0])));
        var_13 -= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_14 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((long long int) var_3))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((arr_4 [i_1]) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))))))))) : ((-(((/* implicit */int) arr_4 [i_1]))))));
        var_15 += ((/* implicit */_Bool) arr_6 [10] [10]);
        var_16 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((unsigned int) arr_4 [i_1]))), (((((/* implicit */_Bool) arr_3 [(unsigned char)3])) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)36790)))))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_3 [i_1])))) : (((/* implicit */int) ((signed char) arr_5 [i_1] [i_1])))));
    }
    var_17 += (-(((((/* implicit */_Bool) (~(var_7)))) ? (((long long int) var_0)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_10)) : (641887324)))))));
}
