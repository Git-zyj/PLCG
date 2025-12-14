/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74187
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74187 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74187
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
    var_16 = ((/* implicit */short) var_15);
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_4 [(unsigned char)11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((int) arr_2 [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_0)))) && (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) -355647180632375987LL))));
        arr_5 [(short)0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(((/* implicit */int) var_8)))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        arr_8 [14] [i_1] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_1])) ? (var_15) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        var_18 = ((/* implicit */unsigned short) arr_6 [i_1 - 1]);
        arr_9 [i_1] = ((/* implicit */signed char) var_8);
        var_19 += ((/* implicit */unsigned int) arr_7 [i_1 - 1]);
        var_20 *= ((/* implicit */short) var_14);
    }
    for (unsigned char i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) arr_11 [i_2]);
        arr_12 [(unsigned short)16] [i_2 + 2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_2])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1644995342U)) ? (var_2) : (((/* implicit */int) arr_11 [i_2 + 2]))))) || (((/* implicit */_Bool) var_7))))) : (min((((/* implicit */int) arr_10 [i_2 + 1])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_5)) : (var_6)))))));
    }
    var_22 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((unsigned short) (-(var_15))))) : (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (355647180632375983LL)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_3 = 3; i_3 < 13; i_3 += 3) 
    {
        var_23 -= ((/* implicit */short) (((!(((/* implicit */_Bool) -355647180632375978LL)))) ? ((+(((/* implicit */int) (unsigned short)14880)))) : (arr_15 [i_3 - 3] [i_3])));
        var_24 = ((/* implicit */signed char) arr_14 [i_3]);
        arr_16 [i_3] = ((/* implicit */short) ((int) ((short) var_12)));
        arr_17 [i_3] = ((/* implicit */short) var_2);
        var_25 ^= ((/* implicit */unsigned short) ((long long int) (~(252285478))));
    }
    var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_13)))) ? ((((!(((/* implicit */_Bool) var_15)))) ? (max((var_4), (var_4))) : (var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) 540571933U)) : (var_15))))))))));
}
