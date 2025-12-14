/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8186
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
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (signed char)-5)))))));
        arr_2 [(signed char)13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1))));
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) ((((0ULL) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_10)))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))))))));
    }
    for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_1))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_1 - 1] [i_1 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_1 - 1] [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1 + 2] [i_1 + 2]))))))));
        arr_7 [i_1] [(short)17] = ((arr_5 [i_1] [i_1 - 1]) >> (((((/* implicit */int) max((var_9), (max((var_4), (arr_4 [i_1] [(signed char)13])))))) - (113))));
    }
    for (signed char i_2 = 0; i_2 < 19; i_2 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_2] [i_2]))));
        var_16 = ((/* implicit */short) ((max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (unsigned short)3840)))), (((/* implicit */int) min((arr_8 [(_Bool)1]), (var_7)))))) + ((-(((/* implicit */int) arr_4 [i_2] [i_2]))))));
        arr_10 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) | (((((/* implicit */_Bool) arr_5 [i_2] [i_2])) ? (arr_5 [i_2] [i_2]) : (var_8)))));
    }
    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) var_6))));
    var_18 = ((/* implicit */_Bool) (((~(((/* implicit */int) var_0)))) + (((/* implicit */int) (unsigned short)55267))));
}
