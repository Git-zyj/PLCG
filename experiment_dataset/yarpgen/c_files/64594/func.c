/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64594
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64594 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64594
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
    var_13 = ((/* implicit */short) ((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)19061))) : (var_12)))) ? (((/* implicit */unsigned long long int) var_12)) : (((unsigned long long int) var_9)))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) || (((((/* implicit */int) var_2)) > (-1347663888)))))))));
    var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned short) var_0)), ((unsigned short)62303)));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        var_15 -= ((/* implicit */signed char) min((0ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))));
        arr_2 [i_0] = var_3;
        arr_3 [i_0] = ((/* implicit */long long int) (_Bool)0);
        arr_4 [i_0] = ((/* implicit */unsigned int) ((long long int) max((13961319357896011358ULL), (min((((/* implicit */unsigned long long int) (short)4085)), (7ULL))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_8 [(_Bool)1] = ((/* implicit */_Bool) ((unsigned int) ((((((/* implicit */int) var_0)) | (((/* implicit */int) arr_0 [5ULL] [i_1])))) ^ ((+(((/* implicit */int) arr_0 [(signed char)5] [(signed char)13])))))));
        var_16 = ((/* implicit */unsigned int) ((((arr_0 [i_1 + 1] [i_1 + 1]) ? (((/* implicit */int) arr_0 [(signed char)10] [i_1 + 1])) : (((/* implicit */int) arr_0 [(short)9] [i_1 + 1])))) > (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_0 [i_1] [i_1 + 1]))))));
        var_17 = ((/* implicit */unsigned char) 1849616516U);
        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) (short)19061)) / (((/* implicit */int) (short)-16078))));
    }
    for (long long int i_2 = 3; i_2 < 19; i_2 += 3) 
    {
        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) (!((_Bool)1))))));
        var_20 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [6ULL])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)29640))) : (max((((/* implicit */long long int) arr_9 [i_2] [i_2 - 2])), (arr_10 [i_2 + 1])))))), (min((7257814925099053893ULL), (((/* implicit */unsigned long long int) (short)-1))))));
    }
}
