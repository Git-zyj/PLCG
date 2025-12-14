/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90053
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
    var_19 = ((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) max((((/* implicit */int) ((signed char) var_17))), (((((/* implicit */_Bool) 534604413)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_12))))))) : (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) var_14)) : (var_11))) ^ (6055662681034935482LL)))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 3) 
    {
        var_20 &= ((/* implicit */signed char) min((((/* implicit */short) (signed char)11)), ((short)10865)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            var_21 = var_17;
            arr_4 [i_0] = ((/* implicit */long long int) (unsigned char)73);
            var_22 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1] [10LL]))));
        }
    }
    var_23 = ((/* implicit */short) var_1);
}
