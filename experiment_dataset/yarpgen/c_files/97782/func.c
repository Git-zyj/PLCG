/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97782
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97782 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97782
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
    var_11 *= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))))), (var_5));
    var_12 = ((/* implicit */signed char) (+(((((((/* implicit */int) var_1)) + (((/* implicit */int) var_1)))) * (((/* implicit */int) ((unsigned short) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned int) var_4))) || (((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 - 1])))) ? (min((((/* implicit */int) arr_4 [i_0 - 2] [i_0])), ((~(((/* implicit */int) (unsigned char)253)))))) : ((-(((/* implicit */int) arr_3 [i_0] [i_0 + 3] [i_0 + 2]))))));
                arr_5 [19ULL] [i_1] [i_0] = ((/* implicit */signed char) max((((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (((/* implicit */int) ((unsigned short) var_7))) : (((-1878109645) + (1878109663))))), (((/* implicit */int) arr_0 [i_0]))));
            }
        } 
    } 
}
