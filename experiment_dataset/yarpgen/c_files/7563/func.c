/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7563
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
    for (unsigned long long int i_0 = 4; i_0 < 22; i_0 += 3) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) - ((+(arr_1 [i_0 - 2]))))), (((/* implicit */unsigned int) (~(((arr_0 [i_0]) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_0 [i_0])))))))));
        var_18 += ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((arr_0 [i_0]) && (arr_0 [i_0]))))))) < (min((2734211474109874666ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)65531)))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_1 [(unsigned short)18]))));
        var_20 += ((/* implicit */unsigned long long int) max((((((unsigned int) arr_0 [i_0 + 2])) >> (((((arr_1 [i_0]) >> (((((/* implicit */int) var_0)) - (71))))) - (30U))))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) (unsigned char)64)), ((unsigned short)21927))))));
    }
    for (unsigned long long int i_1 = 4; i_1 < 22; i_1 += 3) /* same iter space */
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) arr_5 [i_1] [i_1]);
        var_21 = ((/* implicit */_Bool) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_0))))), (arr_5 [i_1] [6ULL]))), (((/* implicit */long long int) max((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_7)))), ((!(((/* implicit */_Bool) arr_5 [i_1] [i_1 - 1])))))))));
        var_22 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) -1LL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65531))))) & (((/* implicit */unsigned int) ((/* implicit */int) (short)31362)))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) ((1740810213488682239ULL) != (((/* implicit */unsigned long long int) -2613346854285804163LL))))) >> (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) var_2))))) <= (((((/* implicit */long long int) ((/* implicit */int) var_2))) | (arr_5 [i_1] [i_1]))))))));
    }
    var_23 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (unsigned char)164)))), (((/* implicit */int) var_6))));
    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)224)) ? (16705933860220869376ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32502))))))));
}
