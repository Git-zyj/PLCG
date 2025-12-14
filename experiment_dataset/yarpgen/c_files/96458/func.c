/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96458
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] &= ((/* implicit */short) arr_0 [i_0 - 1]);
        var_14 = ((/* implicit */unsigned char) (((+(((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_1 [i_0])) - (89))))))) >= (((/* implicit */int) ((6686528412936649869ULL) == (((/* implicit */unsigned long long int) -1)))))));
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) + ((+(((/* implicit */int) arr_0 [i_1]))))))) && (min((((((/* implicit */int) arr_1 [i_1])) != (arr_3 [i_1]))), ((!(((/* implicit */_Bool) var_11)))))))))));
        var_17 = ((/* implicit */unsigned long long int) min((var_7), (var_8)));
        arr_5 [i_1 - 1] [i_1 - 1] = ((/* implicit */long long int) min((var_10), (((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
    }
    var_18 = ((/* implicit */signed char) var_11);
}
