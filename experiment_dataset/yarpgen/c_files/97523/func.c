/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97523
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
    var_12 = var_5;
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 ^= arr_3 [(_Bool)1];
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */int) ((_Bool) arr_4 [i_0]));
                var_14 = ((/* implicit */_Bool) arr_1 [i_0]);
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_6)) ? (max((8918161386937945006LL), (((/* implicit */long long int) (short)32767)))) : (((/* implicit */long long int) ((/* implicit */int) (short)32767))))) & (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((((/* implicit */int) var_7)) % (((/* implicit */int) var_1)))) : (((/* implicit */int) var_8)))))));
}
