/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90213
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
    for (unsigned long long int i_0 = 2; i_0 < 16; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned int) min((((((var_0) + (9223372036854775807LL))) >> (((((/* implicit */int) var_10)) - (8253))))), (((/* implicit */long long int) var_2))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_5))))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_10)))) || (((/* implicit */_Bool) max((526410404285636293ULL), (0ULL))))))) : ((+(((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned long long int) var_5);
        var_15 *= ((/* implicit */short) (~(((((/* implicit */_Bool) (signed char)95)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_1] [i_1])))))))));
        arr_8 [i_1] &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((short) max((((/* implicit */long long int) arr_6 [i_1] [(short)7])), (var_5))))), (((((/* implicit */_Bool) ((arr_0 [i_1] [i_1]) & (arr_4 [i_1])))) ? (arr_0 [i_1] [i_1]) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) | (14336736242783534987ULL)))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) arr_9 [i_2] [i_2])))) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) ((max((((/* implicit */unsigned int) (short)-3410)), (1048575U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)179)) ? (((/* implicit */int) (signed char)78)) : (((/* implicit */int) (unsigned short)40261)))))))))));
        arr_12 [i_2] [i_2] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((unsigned char) (unsigned char)166))) : (((((/* implicit */int) (unsigned char)179)) | (((/* implicit */int) arr_10 [i_2])))))), (((/* implicit */int) arr_10 [i_2]))));
    }
    var_16 = ((/* implicit */unsigned long long int) var_3);
    var_17 = ((/* implicit */long long int) ((((/* implicit */int) var_12)) == ((~(((/* implicit */int) var_8))))));
}
