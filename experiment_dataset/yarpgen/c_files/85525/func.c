/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85525
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85525 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85525
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_0))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 140179010U)) ? (1541870548406669738ULL) : (((/* implicit */unsigned long long int) 857349836868933760LL))));
        var_15 ^= ((/* implicit */unsigned char) (~(var_2)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 27163292382703381LL)))) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) min((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1]))) < (1922074001U)))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) == (((((/* implicit */_Bool) var_1)) ? (27163292382703382LL) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_1])))))))))))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_13)) ? (1843468102U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned int) var_4))))) ? (((arr_4 [i_1]) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) : ((-(((/* implicit */int) ((((/* implicit */_Bool) -21LL)) || (((/* implicit */_Bool) 27163292382703401LL)))))))));
        var_17 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-((~(((/* implicit */int) (unsigned short)22434))))))) ? (min((((((/* implicit */_Bool) -7104295301317013184LL)) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) var_12)))), (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) arr_4 [i_1]))));
    }
}
