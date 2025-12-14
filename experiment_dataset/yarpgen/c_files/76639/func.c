/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76639
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
    var_20 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_9)), (var_18))), (((/* implicit */long long int) (-(((/* implicit */int) (short)(-32767 - 1))))))))) >= ((~(5081125462178298480ULL)))));
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) min((max((((/* implicit */unsigned int) min((((/* implicit */int) var_15)), (var_9)))), (((((/* implicit */_Bool) 7462048207727739682ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))), (((/* implicit */unsigned int) var_8)))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_5) : (arr_0 [i_0])))) ? (arr_0 [i_0]) : ((((!(((/* implicit */_Bool) -2925209114426402951LL)))) ? (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_8)))) : ((+(arr_0 [i_0])))))));
        var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))) < (max((((/* implicit */unsigned long long int) 1961115758)), (0ULL))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 14; i_1 += 3) 
    {
        var_24 *= ((/* implicit */unsigned char) (-(((/* implicit */int) var_16))));
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) var_2)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1 - 1])))))));
    }
}
