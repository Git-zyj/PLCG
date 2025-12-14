/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96319
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96319 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96319
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
    var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_17)) <= (var_2)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */int) var_8);
        var_21 = 0;
        arr_4 [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_22 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) 0)) != (arr_0 [(signed char)12] [i_0]))) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1)))));
    }
    var_23 = ((/* implicit */unsigned short) (_Bool)1);
    var_24 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)37524)) * (((/* implicit */int) var_4)))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (1473774905) : (276117746)))))))));
}
