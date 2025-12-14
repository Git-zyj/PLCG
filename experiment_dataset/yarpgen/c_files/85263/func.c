/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85263
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
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((2399179638U), (((/* implicit */unsigned int) (short)17890)))))));
        arr_3 [i_0] = ((/* implicit */signed char) (+(min((((unsigned long long int) 36028797018931200LL)), (((/* implicit */unsigned long long int) arr_2 [i_0 - 1] [i_0]))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned long long int) min((var_15), ((~((~(17267842410734230843ULL)))))));
        var_16 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-2513))));
        var_17 = ((/* implicit */long long int) 1178901662975320773ULL);
    }
    for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
    {
        arr_9 [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_5 [i_2])))) ? (((((/* implicit */int) ((unsigned short) var_10))) >> (((arr_1 [i_2]) + (214306799))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1155340541366478021ULL)))))));
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (1831094733) : (arr_4 [i_2] [i_2])))));
        arr_11 [i_2] = ((/* implicit */signed char) ((((long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (2399179634U)))) >> (((arr_1 [2LL]) + (214306808)))));
        var_18 = ((/* implicit */int) min((var_3), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_2])) ? (arr_1 [(short)13]) : (arr_1 [i_2]))))));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)125)))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) > (-22LL)))))))) != (((/* implicit */int) var_4))));
}
