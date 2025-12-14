/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70442
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] = (+(max((var_4), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) arr_2 [i_0])), (var_0)))))));
        var_14 = ((/* implicit */int) arr_0 [i_0] [i_0]);
    }
    for (unsigned short i_1 = 2; i_1 < 21; i_1 += 3) 
    {
        var_15 = (unsigned short)0;
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))) << (((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)164))) ^ ((((_Bool)1) ? (13U) : (((/* implicit */unsigned int) 1073741824)))))) - (150U)))));
        var_17 ^= ((/* implicit */unsigned int) min(((((+(((/* implicit */int) (unsigned short)18921)))) / (((/* implicit */int) (short)19162)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) var_10)))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned int) ((arr_6 [i_2]) != (((/* implicit */int) (short)-18979))));
        var_19 = ((int) ((((/* implicit */int) (unsigned short)28321)) >> (((arr_6 [i_2]) + (1130084259)))));
        arr_8 [i_2] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)19162)) != (((/* implicit */int) arr_0 [i_2] [i_2]))));
        var_20 = ((/* implicit */int) arr_0 [i_2] [i_2]);
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_3] [i_3])) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) / (((/* implicit */int) arr_0 [i_3] [18U]))))))) ? (min((((/* implicit */int) ((unsigned char) var_4))), ((+(((/* implicit */int) (unsigned char)163)))))) : (((/* implicit */int) ((short) min((var_10), (((/* implicit */int) arr_2 [i_3]))))))));
        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [9U] [i_3])) ? (((/* implicit */int) ((unsigned char) var_13))) : (((/* implicit */int) max((max((((/* implicit */unsigned short) (_Bool)1)), (arr_9 [i_3] [i_3]))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) && ((_Bool)1)))))))));
    }
}
