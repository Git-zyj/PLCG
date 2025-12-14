/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71524
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
    var_11 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) != (((((/* implicit */_Bool) (((_Bool)0) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)4)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((((/* implicit */int) var_8)) != (((/* implicit */int) var_1)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        arr_4 [i_0] |= ((/* implicit */int) (+(min((((/* implicit */unsigned int) ((unsigned char) (unsigned char)204))), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
        arr_5 [i_0] = ((/* implicit */signed char) (+((((+(((/* implicit */int) (signed char)112)))) * (((/* implicit */int) arr_2 [i_0 - 2]))))));
    }
    for (long long int i_1 = 3; i_1 < 18; i_1 += 4) 
    {
        var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1 - 2] [i_1 + 1]))) <= (((unsigned int) 18446744073709551615ULL))))), (11001852021931616320ULL)));
        arr_9 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) arr_3 [0ULL])))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)109))) - (var_6))))) ? (((((((/* implicit */int) (signed char)112)) & (((/* implicit */int) (signed char)-113)))) / ((+(((/* implicit */int) var_10)))))) : (((((/* implicit */int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_2))))) & (((/* implicit */int) max((((/* implicit */signed char) arr_7 [i_1])), ((signed char)112))))))));
        var_13 = ((/* implicit */unsigned char) (((+(min((((/* implicit */unsigned int) (unsigned char)255)), (67108864U))))) >> (((arr_6 [i_1 - 2] [i_1 - 2]) - (arr_6 [i_1 - 3] [i_1 - 3])))));
    }
    for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
    {
        arr_12 [6ULL] = (+(((arr_7 [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))));
        arr_13 [i_2] [i_2] = ((/* implicit */unsigned char) arr_3 [i_2]);
    }
    var_14 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_5)) | (min((((((/* implicit */_Bool) var_7)) ? (7452782801703395079ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2)))))))));
}
