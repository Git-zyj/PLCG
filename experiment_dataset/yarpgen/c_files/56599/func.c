/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56599
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
    /* vectorizable */
    for (unsigned char i_0 = 1; i_0 < 8; i_0 += 1) /* same iter space */
    {
        var_11 = var_10;
        arr_4 [i_0 - 1] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) | (var_9)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) arr_3 [i_0]))));
    }
    for (unsigned char i_1 = 1; i_1 < 8; i_1 += 1) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned char) ((unsigned long long int) (+((+(((/* implicit */int) arr_3 [i_1])))))));
        var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) min((((/* implicit */long long int) (+((-(((/* implicit */int) var_1))))))), ((~((~(9223372036854775807LL))))))))));
    }
    var_14 = ((/* implicit */unsigned char) (+(((((/* implicit */int) (!(((/* implicit */_Bool) 0LL))))) ^ (((/* implicit */int) var_8))))));
}
