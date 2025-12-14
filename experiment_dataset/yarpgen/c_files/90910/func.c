/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90910
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
    var_13 = var_9;
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_3 [i_0] [9U] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((short) var_8))), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) arr_2 [11LL])) ? (min((var_6), (((/* implicit */long long int) arr_0 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))))));
        var_14 = ((/* implicit */unsigned short) var_2);
        var_15 = ((/* implicit */signed char) max((var_15), (arr_0 [i_0])));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_16 ^= ((((/* implicit */_Bool) var_8)) ? (((arr_6 [(unsigned short)7]) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) arr_1 [i_1])))) : (((/* implicit */int) min((((_Bool) var_12)), (((4469620502113653983LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))))));
        var_17 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (-1645020453) : (((/* implicit */int) arr_5 [i_1])))));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_18 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_0 [i_2]))) ? (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) arr_9 [i_2] [i_2]))))) : (((((/* implicit */_Bool) arr_0 [i_2])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65280)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_5)))))) - (((long long int) ((((/* implicit */_Bool) var_4)) ? (10213705829260840067ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_2]))))))));
        arr_12 [i_2] = ((/* implicit */signed char) max((((long long int) arr_0 [i_2])), (((/* implicit */long long int) min((((/* implicit */short) ((2147483647) != (((/* implicit */int) (unsigned short)59738))))), (arr_5 [4U]))))));
    }
}
