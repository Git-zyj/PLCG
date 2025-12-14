/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5555
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5555 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5555
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_1 [i_0 - 1] [i_0]));
        arr_3 [i_0] = ((/* implicit */int) 2854593019918295418ULL);
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_13))))) + (arr_0 [i_0])));
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) arr_1 [i_0] [i_0 - 1]))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)8173)) | (var_4)))) / (arr_0 [i_0 - 1])));
    }
    for (short i_1 = 3; i_1 < 22; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (short)7268);
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((1160405848U), (((/* implicit */unsigned int) (unsigned short)39528))))) ? ((((~(((/* implicit */int) arr_6 [i_1])))) | (((/* implicit */int) max(((short)7247), ((short)14088)))))) : (((/* implicit */int) (unsigned short)31268))));
    }
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15501))) - (var_10)))) ? (var_12) : (var_10))) : (((/* implicit */unsigned long long int) ((var_13) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (short)-14080)))))));
    var_22 = ((/* implicit */unsigned char) 1658044499U);
    var_23 = ((((((/* implicit */unsigned long long int) var_4)) ^ (var_5))) - (min((var_5), (((/* implicit */unsigned long long int) var_11)))));
}
