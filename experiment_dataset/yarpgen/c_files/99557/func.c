/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99557
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
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_18 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0])) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)10979))))) : (arr_0 [16U] [(unsigned char)12])));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1391167484540768743LL)) ? (((/* implicit */int) (_Bool)1)) : (((int) (~(((/* implicit */int) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_19 = ((/* implicit */int) (!(var_5)));
        var_20 = (i_1 % 2 == zero) ? (((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [i_1])))) << (((((((/* implicit */int) arr_5 [i_1])) + (130))) - (21)))))) : (((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) & (((/* implicit */int) arr_5 [i_1])))) << (((((((((/* implicit */int) arr_5 [i_1])) + (130))) - (21))) - (18))))));
        var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((int) arr_4 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_2])))))));
        var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [2])) ? (((/* implicit */int) arr_1 [i_2])) : (((/* implicit */int) arr_1 [i_2]))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (_Bool)1);
        arr_9 [i_2] [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) arr_4 [i_2] [i_2]))));
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [8ULL])) ? (((/* implicit */int) arr_5 [(unsigned char)2])) : (((/* implicit */int) arr_5 [(unsigned short)10]))));
    }
    var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) var_15))));
}
