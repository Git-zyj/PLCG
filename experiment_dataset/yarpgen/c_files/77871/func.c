/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77871
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
    var_14 -= ((/* implicit */long long int) var_2);
    var_15 -= ((/* implicit */signed char) ((((/* implicit */int) var_5)) << (((var_9) + (7671239696115589406LL)))));
    var_16 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), (var_12)))) || (((/* implicit */_Bool) ((var_9) & (((/* implicit */long long int) var_4))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_17 = ((/* implicit */long long int) max((9425121502323240166ULL), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_8 [i_0] [i_1] [i_2])), (9223372036854775807LL))))));
                    var_18 ^= ((/* implicit */long long int) (signed char)-107);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_8) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) var_9))), ((~(((/* implicit */int) (signed char)-57)))))))));
}
