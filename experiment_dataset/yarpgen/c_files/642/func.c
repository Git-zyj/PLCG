/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/642
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
    for (short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))));
        var_11 |= var_8;
    }
    var_12 *= ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))))), (var_6)))) || (((((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_3)))) && (((/* implicit */_Bool) (short)4642)))));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((((var_3) / (((/* implicit */int) var_6)))) + (var_3))) : (((/* implicit */int) ((_Bool) var_0)))));
    var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)63574)) < (((((/* implicit */int) (unsigned short)1961)) << ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775803LL))) + (25LL))))))))) > (((var_1) | (var_2)))));
}
