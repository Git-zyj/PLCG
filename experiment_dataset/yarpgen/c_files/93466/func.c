/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93466
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
    var_13 ^= ((/* implicit */short) var_8);
    var_14 = min((((/* implicit */int) ((var_3) == (((((/* implicit */int) var_12)) * (((/* implicit */int) (unsigned short)30))))))), ((+(((/* implicit */int) var_6)))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) (!(((/* implicit */_Bool) -5720696907130900091LL))));
        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */int) (signed char)-55)) == (((/* implicit */int) (signed char)-83))))), ((signed char)-55)))) >> ((((-(arr_0 [i_0] [i_0]))) - (3735339476006140800LL))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        arr_7 [8] = ((/* implicit */long long int) (~(((/* implicit */int) arr_3 [i_1 - 1]))));
        arr_8 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-124))) + ((+(2147418112U)))));
    }
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (((((/* implicit */_Bool) ((long long int) (signed char)-55))) ? (min((((/* implicit */unsigned long long int) var_7)), (9875140689119888039ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1)))))))));
}
