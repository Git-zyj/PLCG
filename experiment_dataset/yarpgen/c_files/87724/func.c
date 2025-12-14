/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87724
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
    for (short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [11] [i_1] = ((/* implicit */unsigned char) -1299441638);
                var_15 *= ((/* implicit */signed char) -498149263058590508LL);
            }
        } 
    } 
    var_16 -= ((/* implicit */int) (signed char)56);
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)2))) + (-2676145416727549173LL))), (((((/* implicit */long long int) 1299441612)) - (var_12)))))) ? (var_12) : (((/* implicit */long long int) ((unsigned int) (-(((/* implicit */int) var_8))))))));
}
