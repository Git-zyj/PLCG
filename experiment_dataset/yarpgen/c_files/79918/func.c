/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79918
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
    var_10 = ((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))));
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */unsigned int) (-(((/* implicit */int) var_5))))) % (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_0))))) > (var_6))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 1) 
    {
        var_12 += ((/* implicit */long long int) ((((/* implicit */_Bool) (((+(var_3))) | (((/* implicit */unsigned long long int) (+(var_4))))))) ? (((arr_1 [i_0 - 2] [14]) ? (((/* implicit */int) arr_1 [i_0 + 1] [8])) : (((/* implicit */int) arr_1 [i_0 - 2] [2ULL])))) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) ((var_5) ? (arr_0 [i_0] [(unsigned char)0]) : (((/* implicit */int) arr_1 [2U] [2U]))))))))));
        var_13 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1] [2U]))));
        var_14 = ((/* implicit */short) (+(max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_6))), (((/* implicit */unsigned long long int) ((_Bool) var_3)))))));
    }
    var_15 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((-(var_8))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2)))))))));
}
