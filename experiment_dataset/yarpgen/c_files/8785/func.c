/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8785
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
    var_20 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 3211530222516816622ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (240306209U))) : (((var_13) ? (292617557U) : (((/* implicit */unsigned int) 2147483647)))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        var_21 *= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
        var_22 = ((/* implicit */unsigned int) (((-(arr_3 [i_0]))) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_13)))))));
        var_23 = ((/* implicit */unsigned int) ((_Bool) min((((/* implicit */unsigned int) min((((/* implicit */int) arr_0 [i_0])), (1073741823)))), ((~(var_15))))));
        var_24 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 14025386838700535664ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4421357235009015928ULL))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [i_0])) + (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (2147483647))))))));
    }
    var_25 = var_4;
}
