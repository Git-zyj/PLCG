/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69055
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned short) min((var_10), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) var_8)) : (arr_3 [0U])))))) && (((/* implicit */_Bool) (~(((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 2] [i_0])))))))))))));
        var_11 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_0]))))), (min((arr_3 [i_0]), (((/* implicit */long long int) var_0))))));
    }
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_1))));
    var_13 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (signed char)51))));
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (~(max((((((/* implicit */_Bool) var_0)) ? (-1016208190) : (1016208190))), (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_3))))))))))));
}
