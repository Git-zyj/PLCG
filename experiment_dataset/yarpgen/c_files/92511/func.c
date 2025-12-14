/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92511
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = (((+(arr_1 [i_0 + 1]))) / (max((arr_1 [i_0 + 1]), (((/* implicit */int) var_8)))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) ^ (var_10)));
    }
    var_16 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 4 */
    for (unsigned int i_1 = 2; i_1 < 11; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] &= ((/* implicit */unsigned long long int) max((max((arr_0 [i_1 - 2]), (((/* implicit */int) var_14)))), ((+(((arr_1 [i_1 - 1]) & (((/* implicit */int) (unsigned short)46205))))))));
        arr_7 [i_1 - 2] = min((((/* implicit */long long int) var_6)), (((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 - 2]))) / (var_7))));
        arr_8 [i_1] = ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (var_1) : (((/* implicit */long long int) (+((-(arr_1 [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 2; i_2 < 11; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] = ((/* implicit */signed char) arr_0 [i_2]);
        var_17 |= ((/* implicit */signed char) (unsigned short)19330);
        arr_12 [i_2] = ((/* implicit */long long int) (~(var_12)));
        var_18 &= ((/* implicit */int) ((-5040561446825459176LL) ^ (((/* implicit */long long int) 3953985337U))));
    }
    for (long long int i_3 = 0; i_3 < 20; i_3 += 3) 
    {
        var_19 -= ((/* implicit */unsigned int) var_11);
        var_20 -= ((unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : ((+(((/* implicit */int) var_4))))));
    }
    for (signed char i_4 = 0; i_4 < 12; i_4 += 1) 
    {
        var_21 &= var_9;
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((340981958U) != (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_4] [i_4]))))))))));
    }
    var_23 += ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) var_14)) ^ (var_2))));
}
