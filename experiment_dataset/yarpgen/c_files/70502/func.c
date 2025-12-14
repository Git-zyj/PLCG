/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70502
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
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) arr_5 [i_0 + 1])), (max((401049547132804050ULL), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1)))))));
                var_11 = ((/* implicit */unsigned int) 1048575);
                var_12 *= ((/* implicit */_Bool) var_1);
                var_13 = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) var_4);
    var_15 = ((/* implicit */unsigned char) (-(max((((/* implicit */unsigned long long int) ((_Bool) var_0))), (min((31ULL), (((/* implicit */unsigned long long int) (signed char)64))))))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_0))))));
}
