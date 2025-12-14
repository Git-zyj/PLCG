/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93197
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
    var_17 = max(((~(var_4))), (((/* implicit */unsigned int) var_9)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])) | (var_6))) | (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))) * (((/* implicit */unsigned long long int) var_1)))))));
        var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((unsigned int) var_7)) + (arr_0 [i_0] [i_0])))), (((((/* implicit */_Bool) ((var_11) | (((/* implicit */long long int) 2610087192U))))) ? (max((var_8), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-47)) + (2147483647))) >> (((arr_1 [i_0]) - (16421788050398211590ULL))))))))));
    }
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */long long int) var_13))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-25))) : (var_13)))) : (max((((/* implicit */long long int) var_9)), (var_14))))))));
    var_21 = ((/* implicit */unsigned short) var_3);
    var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (short)19611))))) ? (((var_16) + (((/* implicit */int) (short)32570)))) : (((((/* implicit */int) (signed char)118)) % (((/* implicit */int) (signed char)14))))))));
}
