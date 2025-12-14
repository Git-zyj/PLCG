/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99778
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_19 = ((/* implicit */signed char) var_10);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_9);
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            arr_7 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) var_12))))));
            var_20 = (-(((/* implicit */int) arr_1 [i_0])));
        }
    }
    for (short i_2 = 0; i_2 < 15; i_2 += 2) 
    {
        var_21 = ((/* implicit */signed char) arr_8 [i_2] [i_2]);
        arr_10 [i_2] = ((short) ((((((/* implicit */int) var_0)) + (arr_9 [i_2]))) * (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)0)) : (arr_9 [i_2])))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((max((var_6), (((((/* implicit */int) var_0)) >= (((/* implicit */int) var_1)))))) ? (((((/* implicit */int) arr_8 [i_2] [i_2])) | ((~(arr_9 [i_2]))))) : (((/* implicit */int) var_18)))))));
        arr_11 [i_2] = min((((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned long long int) arr_9 [i_2]))))) ? (max((var_14), (((/* implicit */unsigned int) arr_8 [i_2] [i_2])))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)19))))));
    }
    var_23 = ((/* implicit */short) ((var_1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) (signed char)-19)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_10))) : (((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)127)), (var_5)))))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-120)))));
    var_24 = ((/* implicit */signed char) var_1);
    var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) var_4))));
}
