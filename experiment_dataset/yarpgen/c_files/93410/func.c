/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93410
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
    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) 9223372036854775807LL))));
    var_16 *= ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (9223372036854775807LL)))) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (var_9)))) : (((/* implicit */int) (unsigned short)16368)))), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            {
                arr_7 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_12))))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) -9203286533262717865LL))))));
                var_17 -= ((/* implicit */unsigned char) arr_5 [i_0] [(signed char)3]);
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) var_2);
}
