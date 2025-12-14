/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65709
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65709 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65709
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
    var_16 = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (min((((/* implicit */int) ((unsigned char) 3247696294897839135LL))), (min((((/* implicit */int) (unsigned char)10)), (var_10)))))));
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)-22955)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_5)));
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) || (((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-22960))))), ((signed char)17))))));
        var_19 = ((/* implicit */short) (+(((/* implicit */int) (unsigned short)26767))));
    }
}
