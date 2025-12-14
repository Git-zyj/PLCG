/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72724
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
    var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8211260590686296146LL)) ? (var_19) : (min((((/* implicit */long long int) var_11)), (var_12)))))) ? (((/* implicit */unsigned long long int) ((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) : (max((((/* implicit */unsigned long long int) var_17)), (15163470392918200592ULL))))))));
    var_21 = ((/* implicit */unsigned char) -892805831);
    /* LoopSeq 4 */
    for (long long int i_0 = 4; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned short) ((15163470392918200619ULL) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) 2347151815U)) ? (((/* implicit */int) var_8)) : (-892805837)))) ? (((unsigned long long int) var_9)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_1 [i_0 + 2] [i_0 + 2]), (arr_1 [i_0] [i_0 - 2])))))))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [13U])))))) >= (((unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)28112))) - (var_15))))));
        var_23 *= ((/* implicit */unsigned long long int) var_9);
    }
    for (long long int i_1 = 4; i_1 < 22; i_1 += 2) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */short) (((-(((long long int) 15163470392918200606ULL)))) <= (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1]))) : (15163470392918200584ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (short)16158)) < (((/* implicit */int) arr_3 [i_1] [i_1 + 1])))))) : (((((arr_4 [i_1 + 2]) + (9223372036854775807LL))) >> (((arr_4 [i_1 + 1]) + (831746244250943901LL)))))));
    }
    for (short i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) (unsigned char)144))))));
        var_25 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (unsigned char)21)), ((unsigned short)24998))))));
    }
    for (unsigned char i_3 = 3; i_3 < 12; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (~(((arr_0 [i_3 + 2]) << (((((/* implicit */int) (short)-17574)) + (17590)))))));
        var_26 ^= ((/* implicit */unsigned int) arr_9 [i_3 + 1] [i_3]);
    }
    var_27 = ((/* implicit */unsigned char) ((unsigned short) min((((/* implicit */long long int) ((short) 2017229514))), (var_19))));
}
