/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57758
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_2 [i_0 + 2])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_0 + 2])) + (2608))) - (5)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (signed char)-121))) / (arr_1 [i_0 - 1] [i_0 + 2]))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)2))) : (((((/* implicit */_Bool) var_2)) ? (arr_1 [i_0 + 1] [i_0]) : (((/* implicit */long long int) var_0))))))));
        arr_4 [i_0] [i_0 - 1] = ((/* implicit */long long int) min(((signed char)121), ((signed char)-121)));
        var_10 = ((/* implicit */short) ((((((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (-1LL))) + (9223372036854775807LL))) >> (((((/* implicit */int) (short)-25670)) + (25701)))));
    }
    for (int i_1 = 0; i_1 < 22; i_1 += 1) 
    {
        var_11 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)102))) == (0LL))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))) / (var_2))))));
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1])))))) ? (((/* implicit */int) min((arr_6 [i_1]), (arr_6 [i_1])))) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) max((var_4), (((/* implicit */unsigned int) arr_6 [i_1]))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-98)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_0)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)40))) / (6075745361119698981LL)))))));
    }
    /* LoopSeq 2 */
    for (unsigned short i_2 = 4; i_2 < 12; i_2 += 3) 
    {
        var_12 = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned char)16)) / (1252654810))) - (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_2] [i_2 + 1]))) == (var_3))))));
        var_13 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1978389091)) ? (((/* implicit */int) (signed char)11)) : (((/* implicit */int) (signed char)-123))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-8790))) + (var_7)))));
        var_14 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 3881691409U)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) << (((((((/* implicit */_Bool) (signed char)122)) ? (((/* implicit */unsigned long long int) var_4)) : (var_8))) - (2796605098ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
    {
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-122))) >= (1029766964U))))));
        var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_3] [i_3])) || (((/* implicit */_Bool) arr_14 [i_3] [i_3]))));
        arr_17 [i_3] = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (short)16131))) >= (var_4)));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned char) ((var_3) >> (1LL)));
    }
    var_17 |= ((/* implicit */_Bool) ((((/* implicit */int) (short)8771)) % (((/* implicit */int) (signed char)-121))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-6)) ? (17899708074584487383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)25670)))));
}
