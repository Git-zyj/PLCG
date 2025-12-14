/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67926
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
    var_20 = ((((/* implicit */unsigned long long int) ((((/* implicit */int) (short)22379)) / (((((/* implicit */int) var_3)) * (((/* implicit */int) (signed char)4))))))) | (((((((/* implicit */int) (signed char)-5)) <= (((/* implicit */int) var_19)))) ? (((((/* implicit */_Bool) (unsigned char)4)) ? (var_6) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 2) 
    {
        arr_3 [6LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_0)))) ? (((((/* implicit */long long int) (-(((/* implicit */int) (short)22390))))) + (((var_14) * (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)2)) ? (((/* implicit */int) (short)-22373)) : (((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */int) (signed char)17)) : (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)28234)) : (((/* implicit */int) (short)-26353)))) | (((((/* implicit */_Bool) (unsigned short)28226)) ? ((~(((/* implicit */int) (signed char)31)))) : (((/* implicit */int) (unsigned char)106))))));
        arr_5 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (signed char)17)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))), (var_13)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_2 = 0; i_2 < 10; i_2 += 2) 
        {
            arr_11 [i_2] = ((/* implicit */unsigned char) var_9);
            arr_12 [i_1] [i_2] = ((/* implicit */unsigned long long int) var_12);
        }
        arr_13 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) & (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)3991)))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_18) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))))) ? ((~(((/* implicit */int) (unsigned char)195)))) : (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) (signed char)23)) : (((/* implicit */int) (unsigned char)99))))))) : (var_9)));
        arr_14 [(short)0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) var_7)))) * (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)22379)), (var_18)))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned short)65525)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (signed char)-25)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_4))))))));
    }
    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_1)), ((+(((/* implicit */int) (signed char)78))))))) ? (((/* implicit */int) (unsigned char)24)) : (((/* implicit */int) (signed char)-5))));
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)118)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) (unsigned short)1))));
}
