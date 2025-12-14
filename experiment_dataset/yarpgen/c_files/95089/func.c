/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95089
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95089 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95089
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
    var_18 ^= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (min((((/* implicit */unsigned long long int) var_12)), (min((var_1), (((/* implicit */unsigned long long int) (_Bool)1))))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) (+(((/* implicit */int) arr_1 [i_0])))))));
        var_21 &= ((/* implicit */unsigned short) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))), ((((-(((/* implicit */int) var_3)))) | (((/* implicit */int) var_3))))));
    }
    for (unsigned short i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) (signed char)-88))));
        var_23 = ((/* implicit */unsigned char) ((signed char) (!(((/* implicit */_Bool) arr_1 [13LL])))));
    }
}
