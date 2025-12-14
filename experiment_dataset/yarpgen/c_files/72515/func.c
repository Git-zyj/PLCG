/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72515
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -301173806647763671LL)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (short)-24491)), (var_2))))) : (max((((((/* implicit */_Bool) var_8)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)75))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6)))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) (short)0);
        var_16 = ((/* implicit */unsigned short) (short)-1);
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_17 = ((/* implicit */short) var_4);
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)5378)) : (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) var_2))))));
        var_19 = ((/* implicit */short) ((var_8) > (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [(unsigned char)23])))));
        var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((1117605832) - (((/* implicit */int) (short)-22849)))))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 21; i_2 += 2) 
    {
        arr_10 [i_2] [i_2] = (+((-(arr_9 [i_2]))));
        arr_11 [i_2] &= ((/* implicit */short) (+(((/* implicit */int) arr_6 [i_2] [i_2]))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
    }
}
