/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81113
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
    var_10 *= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)32767))))) ? (((long long int) (_Bool)0)) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) % (((/* implicit */long long int) ((/* implicit */int) var_5)))));
    var_11 = ((/* implicit */_Bool) max((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) | (var_0)))), (((int) min((((/* implicit */unsigned long long int) var_1)), (var_3))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */int) var_2)) - (((/* implicit */int) arr_0 [i_0 + 3])))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned short)32769)), (((((/* implicit */int) var_7)) + (((/* implicit */int) (short)14781))))))) & ((~(arr_3 [i_0 + 1])))));
        var_13 &= ((/* implicit */long long int) max(((unsigned short)2046), ((unsigned short)61500)));
        var_14 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_2))))), (arr_1 [i_0 + 2]))), (((/* implicit */unsigned long long int) var_4))));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
        var_15 ^= ((/* implicit */_Bool) (+(((/* implicit */int) var_5))));
        var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) max((((/* implicit */unsigned short) ((var_0) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), (max(((unsigned short)63490), (((/* implicit */unsigned short) (unsigned char)57)))))))));
        var_17 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_1)), (4111449306U)))) ? (((/* implicit */int) (unsigned short)32767)) : (((/* implicit */int) (unsigned char)187))))));
    }
    var_18 = ((/* implicit */long long int) min((((/* implicit */unsigned int) var_2)), (min((((((/* implicit */_Bool) (unsigned short)63489)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (0U))), (((/* implicit */unsigned int) ((int) 1293285570)))))));
}
