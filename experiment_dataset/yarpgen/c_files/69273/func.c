/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69273
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) arr_1 [i_0 + 2] [(short)2]);
        arr_4 [i_0 - 2] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_0 [i_0] [i_0 - 2])))) | (((/* implicit */int) arr_3 [i_0 + 2]))));
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_18 = ((/* implicit */short) ((max((((/* implicit */unsigned long long int) (short)32767)), (13527583128189484136ULL))) >> (((/* implicit */int) ((_Bool) (unsigned char)70)))));
        var_19 = ((/* implicit */short) ((((/* implicit */int) arr_6 [i_1] [i_1])) == (((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        var_20 ^= arr_1 [i_2] [i_2];
        arr_9 [i_2 + 1] = ((unsigned char) ((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)1))));
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
    }
    var_22 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_8))));
    var_23 = var_13;
}
