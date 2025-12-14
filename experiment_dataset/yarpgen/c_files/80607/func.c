/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80607
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
    var_13 ^= ((/* implicit */short) min((max((var_9), (((/* implicit */long long int) ((unsigned char) var_11))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) var_8)) : (var_12)))) ? (((long long int) var_12)) : (((/* implicit */long long int) var_2))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            {
                arr_7 [i_1] = ((/* implicit */unsigned int) 1097445152);
                var_14 = ((/* implicit */_Bool) var_8);
                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) arr_6 [3ULL]))));
            }
        } 
    } 
    var_16 *= ((/* implicit */short) ((unsigned long long int) (((-(((/* implicit */int) (unsigned char)0)))) == ((~(1097445152))))));
    var_17 = ((/* implicit */signed char) ((var_0) / (min((9223372036854775807LL), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */long long int) 2897952962U))))))));
}
