/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89138
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
    var_10 ^= ((/* implicit */unsigned char) ((((((/* implicit */int) var_4)) <= (((/* implicit */int) var_6)))) ? (((var_3) % (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) ((unsigned char) min((arr_0 [i_1]), (((/* implicit */unsigned char) arr_3 [i_1] [i_1]))))))));
                var_11 = ((/* implicit */unsigned long long int) max((var_11), (((((/* implicit */_Bool) (((-(((/* implicit */int) arr_0 [i_0])))) * (((/* implicit */int) ((_Bool) 2529021450U)))))) ? (min((((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_1))))), (((unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) (unsigned short)65523)), (851112112))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_6)) & (((/* implicit */int) var_8))))))) : (var_3)));
}
