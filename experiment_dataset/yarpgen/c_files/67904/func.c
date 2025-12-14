/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67904
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) max((((/* implicit */int) var_12)), (arr_0 [23] [23])))) > (4297261140613829389ULL))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_2))));
        arr_4 [i_0 - 1] = ((/* implicit */short) max((((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (min((((/* implicit */unsigned int) (unsigned char)10)), (arr_1 [(signed char)1]))) : (((/* implicit */unsigned int) max((((/* implicit */int) var_9)), (arr_0 [i_0] [i_0 - 2])))))), (((/* implicit */unsigned int) arr_2 [i_0] [i_0 - 2]))));
    }
    for (short i_1 = 3; i_1 < 18; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) <= (4297261140613829405ULL)))), (((((/* implicit */int) max((var_3), (var_10)))) << (((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_6 [(unsigned char)6]))) - (2926090584U)))))));
        arr_7 [i_1 - 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_6 [i_1 + 2]), (arr_1 [i_1 - 2])))) ? (max((arr_6 [i_1 + 1]), (arr_6 [i_1 - 2]))) : (((((/* implicit */_Bool) arr_6 [i_1 - 3])) ? (((/* implicit */unsigned int) -693613306)) : (arr_1 [i_1 + 1])))));
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)70)) && (((/* implicit */_Bool) min((arr_0 [i_1 - 3] [i_1 - 3]), (arr_0 [i_1 + 2] [i_1 + 2])))))))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(arr_0 [i_2] [i_2])))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) arr_1 [i_2]))) ? (((((/* implicit */_Bool) arr_8 [(signed char)0] [(signed char)0])) ? (arr_5 [i_2]) : (-1280813781464680963LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) arr_9 [i_2])))))))))));
        var_16 = (i_2 % 2 == 0) ? (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_1)), (arr_6 [i_2]))) >> (((max(((+(((/* implicit */int) arr_8 [i_2] [i_2])))), (((int) (short)-9673)))) - (69)))))) : (((/* implicit */_Bool) ((max((((/* implicit */unsigned int) var_1)), (arr_6 [i_2]))) >> (((((max(((+(((/* implicit */int) arr_8 [i_2] [i_2])))), (((int) (short)-9673)))) - (69))) - (13))))));
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_6) >> (((((/* implicit */int) (short)26295)) - (26272))))), (((/* implicit */unsigned long long int) var_7))))) ? (((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) min((((/* implicit */short) var_4)), (var_2)))) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (signed char)-99))))));
        var_18 *= ((/* implicit */short) arr_8 [(signed char)2] [16ULL]);
    }
    var_19 = ((/* implicit */long long int) ((int) ((max((var_7), (((/* implicit */long long int) var_5)))) | (((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) (signed char)-104))))))));
}
