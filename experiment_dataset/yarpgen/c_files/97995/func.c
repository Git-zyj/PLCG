/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97995
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) var_13))))) && (var_3)))));
    var_15 = ((/* implicit */int) (unsigned char)198);
    var_16 |= ((/* implicit */long long int) (signed char)96);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_17 = ((/* implicit */short) (-(((/* implicit */int) (unsigned char)183))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) (signed char)-86))))));
        var_18 = ((/* implicit */long long int) ((var_3) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (short)32767))));
    }
    for (short i_1 = 0; i_1 < 17; i_1 += 3) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)4512)) ? (18446744073709551615ULL) : (1ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (min((((/* implicit */unsigned long long int) ((unsigned char) var_2))), (1ULL)))));
        arr_7 [i_1] = ((min((((/* implicit */int) ((signed char) var_2))), (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))) & (((/* implicit */int) arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 12; i_2 += 3) 
    {
        var_19 = ((/* implicit */_Bool) min(((~(((((/* implicit */_Bool) (short)-15523)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)116))))))), (((((/* implicit */_Bool) min((4228918822U), (((/* implicit */unsigned int) 35088069))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (max((1ULL), (((/* implicit */unsigned long long int) (unsigned char)252))))))));
        arr_11 [i_2] [i_2] = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)56764)), ((-9223372036854775807LL - 1LL))));
        var_20 = ((/* implicit */unsigned short) (+(min(((-2147483647 - 1)), (((/* implicit */int) var_4))))));
        arr_12 [i_2] [i_2] = ((/* implicit */_Bool) -8102652215415975620LL);
        arr_13 [i_2] = ((/* implicit */long long int) ((int) max((((/* implicit */unsigned int) var_0)), (arr_10 [i_2]))));
    }
    for (unsigned int i_3 = 1; i_3 < 22; i_3 += 1) 
    {
        arr_17 [i_3] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)0))))) ? (((/* implicit */unsigned int) (((-(((/* implicit */int) var_11)))) / (((/* implicit */int) var_10))))) : (((((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)65))))) * (((unsigned int) arr_16 [i_3 - 1]))))));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((max((((((/* implicit */int) (unsigned char)139)) & (((/* implicit */int) var_1)))), (((/* implicit */int) arr_16 [i_3 + 1])))), ((-(((/* implicit */int) arr_16 [i_3 - 1])))))))));
    }
}
