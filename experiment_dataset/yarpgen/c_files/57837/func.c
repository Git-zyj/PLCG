/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57837
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned char) ((((var_1) ? (((/* implicit */int) arr_1 [i_0 + 1])) : (((/* implicit */int) (unsigned short)11164)))) & (((((/* implicit */int) arr_1 [i_0 + 1])) & (((/* implicit */int) var_2))))));
        var_16 = ((/* implicit */short) ((unsigned char) ((_Bool) (unsigned short)54375)));
        var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)54375)) / (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_1 [i_0 - 2])), ((unsigned short)54350)))) : (((/* implicit */int) ((signed char) arr_0 [i_0]))))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0 + 1])))))));
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */_Bool) arr_2 [(short)3] [i_0 + 3])) ? (((/* implicit */unsigned long long int) max(((-(((/* implicit */int) (unsigned short)54377)))), (((/* implicit */int) arr_2 [i_0 - 3] [i_0 + 3]))))) : (((16216649570350169181ULL) + (var_4))))))));
    }
    var_19 = ((/* implicit */signed char) max((((((/* implicit */_Bool) max(((unsigned short)54375), ((unsigned short)11192)))) ? ((-(var_5))) : (((/* implicit */long long int) ((/* implicit */int) var_12))))), (((/* implicit */long long int) var_12))));
    /* LoopSeq 1 */
    for (long long int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        arr_7 [i_1] = (!(((/* implicit */_Bool) (~(arr_5 [i_1 + 1])))));
        arr_8 [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) max((((/* implicit */short) ((signed char) var_14))), (((short) var_4))))) << (((/* implicit */int) (((~(((/* implicit */int) (unsigned short)54353)))) >= (arr_5 [i_1 - 2]))))));
        var_20 = ((/* implicit */short) max((var_20), (((/* implicit */short) ((max((arr_4 [(_Bool)1]), (var_9))) - (((/* implicit */unsigned long long int) ((int) (((_Bool)1) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) var_1)))))))))));
        var_21 = ((/* implicit */unsigned char) var_5);
    }
    var_22 = ((/* implicit */long long int) var_10);
}
