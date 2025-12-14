/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69339
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69339 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69339
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
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] = ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2])) >= (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])));
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0 - 1] [i_0])) == (((((/* implicit */_Bool) (unsigned short)62280)) ? (((/* implicit */int) (signed char)-104)) : (((/* implicit */int) (unsigned short)62290))))));
        arr_3 [i_0] [(short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)9)) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) || (arr_1 [i_0] [i_0])))) : ((+(((/* implicit */int) arr_1 [i_0] [i_0 + 1]))))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (var_13)));
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) (short)0))))) || (((/* implicit */_Bool) (-(arr_5 [(short)7]))))));
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_7))));
    }
    for (long long int i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned short) (((-(18446744073709551596ULL))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2])))))))))));
        var_24 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) - (arr_8 [i_2] [i_2]))) ^ (((/* implicit */long long int) 17785749))));
    }
    var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1116191648)))))));
    var_26 = 1116191633;
}
