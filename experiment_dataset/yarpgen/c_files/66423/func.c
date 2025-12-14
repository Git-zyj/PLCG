/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66423
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
    var_10 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((var_7) <= (((/* implicit */long long int) var_9)))))) : (var_7))), (((/* implicit */long long int) (~((~(((/* implicit */int) var_2)))))))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_8))));
    var_12 = ((/* implicit */short) min((var_5), ((signed char)-33)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? ((-(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) arr_0 [i_0] [i_0 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0 - 1]), (arr_0 [i_0] [i_0 - 2]))))) : (min((max((arr_1 [i_0]), (((/* implicit */unsigned int) var_5)))), (((/* implicit */unsigned int) arr_0 [i_0] [i_0 - 1]))))));
        arr_2 [i_0] [(short)4] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (unsigned short)21)) ? (((/* implicit */int) (short)11416)) : (((/* implicit */int) (unsigned char)156)))));
        var_14 = ((/* implicit */long long int) max((max((min((((/* implicit */unsigned int) arr_0 [(_Bool)1] [i_0])), (arr_1 [8U]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [0LL] [i_0 - 2]))))))), (((((((/* implicit */_Bool) arr_1 [12LL])) ? (arr_1 [(unsigned short)8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) ^ (arr_1 [(unsigned char)8])))));
        var_15 = ((/* implicit */_Bool) ((((/* implicit */long long int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) arr_0 [i_0] [i_0]))))) + (((((var_4) - (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) - (((/* implicit */long long int) (-(var_8))))))));
    }
    var_16 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((var_9) - (((/* implicit */int) var_5))))) >= (((var_7) ^ (((/* implicit */long long int) var_9)))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))));
}
