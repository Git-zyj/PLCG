/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61972
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
    var_13 = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (var_1))), (((/* implicit */int) var_12)))) >> (((((((/* implicit */_Bool) ((unsigned int) var_5))) ? (max((var_11), (((/* implicit */long long int) (short)-25456)))) : (((/* implicit */long long int) ((((/* implicit */int) var_6)) - (((/* implicit */int) var_8))))))) + (25460LL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_14 = ((int) ((((/* implicit */int) (unsigned char)73)) ^ (6291456)));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (unsigned short)27124);
        var_15 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) arr_1 [i_0 + 2])) : (arr_0 [i_0]));
        arr_4 [i_0] [i_0] = ((/* implicit */long long int) ((int) (unsigned char)174));
    }
    var_16 ^= ((/* implicit */_Bool) ((unsigned short) ((_Bool) (~(var_0)))));
}
