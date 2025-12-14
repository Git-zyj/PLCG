/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87240
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                var_15 = -2032532006;
                var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((max((((/* implicit */unsigned long long int) 29)), (8794024695194500862ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) < (arr_3 [(_Bool)1] [2ULL])))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-32759)) : (var_2)))) ? (arr_3 [i_0] [i_0]) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -29)), (1313358137U))))))));
            }
        } 
    } 
    var_17 = ((/* implicit */signed char) min(((-(min((((/* implicit */long long int) (_Bool)1)), (9223372036854775801LL))))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_14)) : (var_2))))))));
}
