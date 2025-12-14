/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56464
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56464 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56464
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
    var_15 &= ((/* implicit */long long int) var_10);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_1 [i_0]))) & (max((((/* implicit */int) arr_1 [i_0 + 1])), (var_10)))));
        var_16 *= ((/* implicit */unsigned long long int) (!(max(((!(((/* implicit */_Bool) arr_0 [5])))), (((((/* implicit */_Bool) var_4)) || (var_3)))))));
        arr_3 [i_0] = var_5;
        var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((unsigned int) arr_1 [i_0 + 1]))), (min((((/* implicit */long long int) arr_1 [i_0 - 1])), (var_7)))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 9; i_1 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)16))));
        arr_6 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 70280411115156982LL)))) < (((var_2) * (((/* implicit */unsigned long long int) var_0))))));
        var_19 = ((/* implicit */int) max((var_19), (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) ((signed char) (signed char)-17))) : (((/* implicit */int) ((_Bool) var_10)))))));
    }
    var_20 = ((/* implicit */signed char) min((var_4), (((/* implicit */long long int) var_1))));
}
