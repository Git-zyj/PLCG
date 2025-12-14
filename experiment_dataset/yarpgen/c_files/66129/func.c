/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66129
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
    var_14 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) arr_0 [(signed char)2]))))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : ((-(859925263))))));
                var_16 = (+((~(((((/* implicit */_Bool) -859925263)) ? (((/* implicit */int) (short)-4220)) : (((/* implicit */int) arr_2 [(_Bool)1] [7] [i_1])))))));
                arr_5 [0LL] [i_0] [(unsigned short)5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)5)) || (((/* implicit */_Bool) (+(791023555))))));
            }
        } 
    } 
}
