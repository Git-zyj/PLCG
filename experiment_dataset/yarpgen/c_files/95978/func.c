/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95978
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
    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_7))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_21 -= ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) + (35))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) var_2)))))));
    }
    var_23 += min((((/* implicit */unsigned char) min((((/* implicit */signed char) (_Bool)0)), ((signed char)90)))), ((unsigned char)15));
    var_24 &= ((/* implicit */_Bool) var_15);
}
