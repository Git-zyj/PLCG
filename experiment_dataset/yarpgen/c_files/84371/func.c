/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84371
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
    var_19 += ((/* implicit */unsigned char) var_9);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(1595194967772064709ULL)))) ? (arr_0 [i_0 + 2]) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)-6806)))))))));
        var_20 = arr_1 [i_0 + 2];
        var_21 += ((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_22 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (12ULL)))) ? (var_1) : (((/* implicit */unsigned long long int) ((int) 1117483693))));
        var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_9)) - (((/* implicit */int) var_4))))));
    }
}
