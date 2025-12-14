/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68058
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
    var_10 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    var_11 = ((/* implicit */unsigned int) var_8);
    /* LoopSeq 4 */
    for (long long int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] [i_0 + 1] = ((/* implicit */_Bool) 1418555861);
        arr_3 [i_0] [14LL] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) 1418555861)), (4294967295U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))) : (((((/* implicit */_Bool) 1U)) ? (12095323297331204155ULL) : (((/* implicit */unsigned long long int) -1418555862))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && ((!(((/* implicit */_Bool) var_3))))))) : (((/* implicit */int) (short)-10))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-48)), (var_0)))) : (((/* implicit */int) min(((unsigned short)40944), (((/* implicit */unsigned short) (_Bool)1)))))));
        arr_9 [i_1] = ((/* implicit */unsigned char) 3480831406U);
        arr_10 [i_1] = ((/* implicit */short) (_Bool)0);
    }
    for (long long int i_2 = 4; i_2 < 12; i_2 += 2) 
    {
        arr_13 [i_2] = (unsigned short)11034;
        arr_14 [i_2] = ((/* implicit */unsigned short) ((max((((/* implicit */long long int) var_1)), (((var_2) ? (((/* implicit */long long int) -7)) : (var_7))))) * (((/* implicit */long long int) 1418555861))));
        arr_15 [i_2] &= ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */long long int) 4127528356U)), (0LL)))) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 1U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)226))) : (6351420776378347461ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)-48)) : (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned long long int) 1418555861))));
        arr_16 [i_2] |= ((/* implicit */short) 4176418605U);
    }
    for (unsigned long long int i_3 = 3; i_3 < 23; i_3 += 2) 
    {
        arr_21 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 8345036048328761011LL)))))));
        arr_22 [(unsigned short)22] [i_3] = ((9223372036854775807LL) + (-1012294681843585191LL));
        arr_23 [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(-2991195692924115455LL))))));
        arr_24 [(unsigned short)22] [i_3] = ((/* implicit */unsigned int) (short)30898);
    }
    var_12 = ((/* implicit */long long int) min((min((var_4), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) var_9))));
}
