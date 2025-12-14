/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88848
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88848 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88848
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
    for (long long int i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) -2081920251);
        var_14 = ((/* implicit */long long int) max((max((((((/* implicit */_Bool) arr_0 [(short)20])) ? (15159519989954265192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)230))))), (((/* implicit */unsigned long long int) -1724767763)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2099740454)) ? (((/* implicit */int) max((var_10), (var_11)))) : (((/* implicit */int) ((-2099740454) >= (((/* implicit */int) (short)-17461))))))))));
        var_15 = ((/* implicit */long long int) ((short) ((((/* implicit */long long int) -1527324649)) ^ (arr_0 [i_0 - 1]))));
        var_16 ^= ((/* implicit */_Bool) ((max((max((var_9), (arr_0 [(short)16]))), (((/* implicit */long long int) ((unsigned short) 4229844671114140803ULL))))) >> (((((((var_5) << (((((arr_0 [i_0]) + (8573629143985528895LL))) - (44LL))))) | (((/* implicit */long long int) min((((/* implicit */unsigned int) var_4)), (3345716839U)))))) - (8172301847279006938LL)))));
    }
    var_17 = ((/* implicit */unsigned char) ((int) var_10));
}
