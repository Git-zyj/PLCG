/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81695
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
    var_15 = ((/* implicit */unsigned short) ((var_6) ? (min((((/* implicit */unsigned long long int) 576460614864470016LL)), (11151045343800815689ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 3) 
    {
        var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 7295698729908735932ULL)) ? (1273246335) : (((/* implicit */int) (short)-11679))));
        var_17 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7295698729908735926ULL)) ? (((/* implicit */unsigned long long int) var_2)) : (7ULL))))))) ^ (((/* implicit */int) ((((/* implicit */int) ((unsigned short) 7295698729908735926ULL))) < (((/* implicit */int) arr_1 [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) max(((~(((/* implicit */int) (short)48)))), (((/* implicit */int) arr_0 [(short)2]))))) < (((unsigned int) ((arr_0 [(unsigned short)15]) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned short)64710)))))));
    }
}
