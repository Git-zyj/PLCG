/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68257
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) != (((var_0) >> (((((((/* implicit */int) var_8)) + (((/* implicit */int) var_11)))) - (63878)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        arr_4 [i_0 - 2] [i_0 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) == (var_0)));
        arr_5 [20ULL] [(unsigned short)4] = ((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) (unsigned short)65535)) : (((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (signed char)-127)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        arr_6 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) var_4)) | (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) >= (((/* implicit */int) var_2)))))));
    }
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
    {
        arr_11 [3LL] = ((/* implicit */long long int) arr_7 [i_1] [i_1]);
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_1] [0U])) : (((/* implicit */int) arr_0 [i_1] [i_1])))) % (((/* implicit */int) max((arr_0 [i_1] [i_1]), (arr_0 [i_1] [i_1]))))));
        arr_12 [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((arr_1 [i_1] [(unsigned short)7]) >> (((var_13) - (17852418061845546048ULL)))))) ? (max((((/* implicit */unsigned long long int) var_9)), (arr_1 [i_1] [i_1]))) : (((((/* implicit */_Bool) arr_9 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [(unsigned short)10] [i_1]))) : (var_0))))), (((/* implicit */unsigned long long int) var_8))));
    }
    var_19 -= ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((((/* implicit */_Bool) (unsigned short)16404)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */signed char) var_4)), ((signed char)87))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_15))) ^ (var_10)))) && (((/* implicit */_Bool) var_6))))))));
}
