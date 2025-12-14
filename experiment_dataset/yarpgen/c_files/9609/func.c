/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9609
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_20 &= ((/* implicit */int) ((short) ((((/* implicit */_Bool) (short)2783)) ? (arr_1 [(unsigned short)7]) : (((/* implicit */long long int) arr_0 [i_0])))));
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-4968))))) + (((((/* implicit */_Bool) arr_1 [(unsigned char)12])) ? (((/* implicit */long long int) 4294967295U)) : (5380520090498217243LL)))));
        var_21 = ((/* implicit */unsigned int) arr_0 [i_0]);
    }
    var_22 ^= ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) 4294967295U)) ? ((((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))) : (-2723495776461929173LL))) : (((/* implicit */long long int) ((/* implicit */int) min(((short)-20522), ((short)4967))))))));
    var_23 += ((/* implicit */short) (~(var_11)));
    var_24 = ((unsigned char) ((((/* implicit */_Bool) (unsigned short)65535)) ? (-1585149914612655843LL) : (-2934873170560085301LL)));
    var_25 = ((/* implicit */short) var_5);
}
