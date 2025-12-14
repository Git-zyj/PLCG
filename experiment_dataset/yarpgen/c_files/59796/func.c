/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59796
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
    var_11 = ((/* implicit */int) max((var_11), (max((var_0), (min(((~(var_6))), (var_10)))))));
    var_12 *= ((/* implicit */short) (~(max((((/* implicit */unsigned int) (+(((/* implicit */int) var_3))))), (((var_4) & (var_5)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) ((var_1) & (var_1)))))), (max((max((var_4), (((/* implicit */unsigned int) var_8)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (var_1)))))))))));
        var_14 *= ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_2 [i_0]), (((/* implicit */unsigned char) ((_Bool) var_7))))))));
        arr_3 [(short)7] [i_0] = ((/* implicit */unsigned short) (+(arr_1 [i_0] [i_0])));
        arr_4 [i_0] [i_0] &= ((/* implicit */long long int) ((((unsigned long long int) var_5)) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) >= (var_1)))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 12; i_1 += 3) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_4))));
        arr_9 [(unsigned char)6] = ((/* implicit */unsigned long long int) (+(var_4)));
    }
    for (long long int i_2 = 0; i_2 < 17; i_2 += 1) 
    {
        arr_12 [i_2] = ((/* implicit */unsigned short) (+((~((-(var_6)))))));
        arr_13 [i_2] = ((/* implicit */unsigned short) (~(((((var_6) > (((/* implicit */int) var_8)))) ? ((+(var_1))) : ((~(var_1)))))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((((/* implicit */int) var_8)) >= (var_1))) ? (min((var_1), (((/* implicit */int) var_7)))) : (min((var_0), (((/* implicit */int) arr_11 [0] [0LL])))))))));
    }
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(var_0)))) ? (min((var_5), (((/* implicit */unsigned int) var_6)))) : (max((var_4), (var_4))))), (((((/* implicit */_Bool) max((var_7), (((/* implicit */signed char) var_8))))) ? (min((((/* implicit */unsigned int) var_2)), (var_4))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))));
}
