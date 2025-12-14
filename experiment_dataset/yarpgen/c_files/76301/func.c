/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76301
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
    var_14 = ((/* implicit */signed char) min((((/* implicit */int) max((var_8), (((/* implicit */unsigned char) ((_Bool) var_5)))))), (var_5)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */long long int) max((var_15), (((long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) == (((/* implicit */int) (unsigned char)181)))) ? (((((/* implicit */int) arr_1 [i_0] [(unsigned char)13])) / (arr_0 [i_0]))) : (((/* implicit */int) arr_3 [15])))))));
                var_16 += ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [13ULL] [(_Bool)1]))) >= (var_2)))), (max((-602935187267473053LL), (((/* implicit */long long int) (unsigned char)181))))))), (((((((/* implicit */unsigned long long int) arr_0 [i_0])) == (18446744073709551615ULL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)75)))))) : (max((288230376134934528ULL), (((/* implicit */unsigned long long int) (unsigned short)19557))))))));
                var_17 = ((/* implicit */signed char) (((-(((((/* implicit */_Bool) arr_5 [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)45979)) : (-1013858702))))) + ((+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) ((((/* implicit */int) var_9)) >> (((var_10) - (1458846538U)))))) ? (((((/* implicit */_Bool) (unsigned char)52)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)45978))) : (18446744071562067968ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 0))))))));
}
