/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58197
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
    var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_13))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 ^= ((((/* implicit */_Bool) -2369848608488852479LL)) ? (-2218979146909485535LL) : (-2218979146909485535LL));
        var_18 -= ((/* implicit */long long int) ((2218979146909485566LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
    }
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) 2218979146909485566LL)) ? (9223372036854775807LL) : (5921542351048334251LL))) <= (max((9223372036854775807LL), (-2218979146909485524LL))))))) : (((((/* implicit */long long int) ((/* implicit */int) var_3))) % (min((4152679042600515014LL), (var_6)))))));
    var_20 = ((/* implicit */_Bool) max((max(((-2147483647 - 1)), ((~(2002168071))))), ((+(var_8)))));
}
