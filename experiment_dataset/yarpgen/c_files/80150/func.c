/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80150
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3072)) ? (((/* implicit */unsigned long long int) -70775658)) : (3176134051360726278ULL)))) ? ((-(70775634))) : (((/* implicit */int) (unsigned short)65535))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */int) arr_0 [i_0]);
        var_12 *= ((/* implicit */unsigned long long int) ((short) (-(min((arr_2 [i_0] [6]), (arr_3 [i_0]))))));
    }
}
