/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68547
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
    var_14 = ((/* implicit */int) var_12);
    var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) max((((/* implicit */int) (unsigned char)255)), (2147483647))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) == (1248524298U)))), (arr_0 [i_0])))) ? (((/* implicit */int) ((var_11) || (((/* implicit */_Bool) (unsigned char)12))))) : (max((((/* implicit */int) arr_1 [i_0 - 1])), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_12))))))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned char)255)))) >= (((/* implicit */int) arr_0 [i_0])))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 1) 
    {
        var_18 = ((/* implicit */signed char) ((arr_3 [i_1] [i_1 + 2]) % (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4))))));
        var_19 = ((/* implicit */_Bool) arr_2 [(unsigned char)19] [i_1 + 2]);
        var_20 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */unsigned short) arr_4 [i_1 + 1] [(_Bool)1]);
        var_22 = ((/* implicit */unsigned int) ((long long int) arr_4 [i_1] [i_1 + 2]));
    }
}
