/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56608
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
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (0U)))) && ((_Bool)1)))) << (((var_6) - (648610730U))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_0] [10ULL]))));
                var_17 = ((/* implicit */unsigned short) (~(var_1)));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned int) var_0)), (var_6)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12))))), (max((((/* implicit */unsigned int) var_3)), (var_6)))))) : (var_11)));
    var_19 = ((/* implicit */unsigned int) (_Bool)1);
    var_20 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned short)24508)) / (((/* implicit */int) (unsigned char)149))));
}
