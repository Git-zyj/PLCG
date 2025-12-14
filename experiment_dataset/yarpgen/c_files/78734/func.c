/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78734
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [13LL] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (-(arr_4 [i_0] [i_1])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) arr_3 [i_0] [i_1]))))) : (((/* implicit */int) arr_1 [14])))) >> (((((/* implicit */int) ((unsigned short) arr_4 [i_0] [(unsigned short)7]))) - (32198)))));
                var_10 ^= arr_3 [(_Bool)0] [i_1];
            }
        } 
    } 
    var_11 &= ((/* implicit */signed char) ((unsigned char) var_2));
    var_12 |= ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 2906412627106783788LL)) ? (((/* implicit */int) (unsigned char)169)) : (max((((/* implicit */int) var_4)), (var_8)))))) == ((~(max((var_3), (var_6)))))));
}
