/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63014
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
    var_10 = ((/* implicit */unsigned short) var_6);
    var_11 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_9))));
    var_12 -= ((/* implicit */unsigned int) var_5);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) var_1))) & (((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (arr_3 [(signed char)3] [(signed char)8]))))));
        arr_4 [4] [(signed char)9] = ((/* implicit */unsigned char) (~(((int) arr_1 [(_Bool)1] [i_0]))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 17; i_1 += 1) 
    {
        arr_8 [14] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_7 [12])) ? (((/* implicit */int) (unsigned char)235)) : (((/* implicit */int) (unsigned short)65373)))) < (((int) arr_6 [(short)9] [(signed char)3]))));
        var_14 += ((/* implicit */signed char) ((((/* implicit */_Bool) 4024568970U)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (arr_7 [i_1 - 1])));
    }
}
