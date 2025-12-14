/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58589
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) << (((min((2124480783870319924ULL), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */unsigned short) var_13))))))) - (165ULL)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        arr_3 [(short)3] [i_0] = ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))));
        arr_4 [i_0 - 1] = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-32760))) >= (var_18)));
    }
}
