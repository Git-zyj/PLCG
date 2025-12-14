/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81172
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
    var_17 &= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_9)))))) - (((unsigned int) (signed char)-54))))));
    var_18 = ((unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)0))))), (min((((/* implicit */unsigned int) (unsigned short)13)), (var_6)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        arr_3 [1U] = ((/* implicit */short) (-(var_7)));
        arr_4 [i_0] = ((/* implicit */signed char) arr_2 [19U]);
        arr_5 [i_0] = ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [(unsigned char)14]));
        arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) ((((unsigned int) var_11)) < (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [(unsigned short)16]))) : (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = min((min((((/* implicit */int) (_Bool)1)), ((-(((/* implicit */int) (unsigned short)31)))))), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (arr_7 [i_1]) : (arr_7 [i_1])))) == (arr_8 [i_1])))));
        arr_10 [i_1] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned int) var_16))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)96), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((/* implicit */_Bool) var_11)) ? (arr_8 [i_1]) : (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_8 [i_1])) && (((/* implicit */_Bool) var_3))))) >= (((/* implicit */int) (!(var_2)))))))));
        arr_11 [i_1] [i_1] = ((/* implicit */unsigned char) (((+(var_13))) ^ (((/* implicit */unsigned int) ((int) var_2)))));
        arr_12 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1]))) ? (((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */long long int) arr_7 [i_1])) : (arr_8 [i_1]))) : (arr_8 [i_1])));
        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) ((var_15) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (signed char)-24))))) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) max(((signed char)-5), ((signed char)(-127 - 1))))))))))));
    }
    for (int i_2 = 2; i_2 < 11; i_2 += 4) 
    {
        arr_15 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */unsigned int) 1894144698)) | (1186808508U)));
        var_20 = ((/* implicit */unsigned int) min((((((((((/* implicit */_Bool) var_13)) ? (arr_0 [(unsigned short)16]) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) + (9223372036854775807LL))) >> (((((((/* implicit */_Bool) 4035266047U)) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_13 [i_2 + 1])))) - (56))))), (((/* implicit */long long int) (((~(var_8))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_2 [i_2])))))))));
        arr_16 [i_2] = ((/* implicit */unsigned char) min((((/* implicit */long long int) var_10)), ((((((_Bool)1) ? (arr_0 [i_2]) : (((/* implicit */long long int) var_1)))) & (((/* implicit */long long int) max((((/* implicit */unsigned int) var_5)), (var_14))))))));
    }
}
