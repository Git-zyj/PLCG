/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55582
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
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) (+(((((/* implicit */int) var_9)) + (((/* implicit */int) var_10))))))) : (max((811784760U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)0)) : (var_7))))))));
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_0)))) ? ((~(3787053292U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-42)))))))) ? (var_14) : (((/* implicit */int) var_15))));
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 15; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (unsigned char)255))));
        arr_2 [i_0] = (~(((/* implicit */int) arr_0 [i_0] [i_0 - 1])));
        arr_3 [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-42)) ? (arr_1 [i_0] [12U]) : (arr_1 [i_0 - 1] [(signed char)12])))))) ? (var_11) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)0)) ? (767107051) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)153)) == (((/* implicit */int) arr_0 [i_0] [i_0]))))))))));
        var_19 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_1 [i_0 - 1] [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    }
    for (unsigned char i_1 = 1; i_1 < 12; i_1 += 2) 
    {
        var_20 = ((/* implicit */unsigned short) (((((-(((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_11))))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) var_7)) ? (min((arr_1 [i_1] [7U]), (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)103))))) - (74313586U)))));
        var_21 |= (unsigned char)255;
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_6 [i_2]))));
        var_23 *= ((/* implicit */unsigned long long int) arr_4 [(short)10] [(short)10]);
    }
}
