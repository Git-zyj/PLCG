/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94621
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        arr_2 [3LL] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-12242)) - (((/* implicit */int) (short)-12242))))) ? (var_11) : (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)65535)))))));
        var_19 += ((/* implicit */unsigned short) ((arr_0 [i_0]) / (arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 21; i_1 += 1) 
    {
        arr_5 [i_1 - 2] = ((/* implicit */int) var_3);
        var_20 = ((/* implicit */unsigned int) (~(var_5)));
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_1 - 3] [i_1 - 1])) / (((/* implicit */int) arr_3 [i_1 + 1] [i_1 - 3]))))), (((long long int) var_5)))))));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_4), (((/* implicit */unsigned short) var_17))))) / (((((/* implicit */_Bool) arr_3 [i_1 - 2] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [16LL])) : (((/* implicit */int) (short)12248))))))) ? ((+(((/* implicit */int) (short)30289)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(signed char)19] [i_1])) ? (((/* implicit */int) arr_4 [17U] [i_1 - 3])) : (((/* implicit */int) var_8))))) ? (((/* implicit */int) min((arr_4 [(unsigned short)9] [(unsigned short)9]), (((/* implicit */unsigned short) (short)-30295))))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_3 [15U] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_1]))))))));
    }
    for (short i_2 = 1; i_2 < 18; i_2 += 4) 
    {
        var_23 = ((/* implicit */long long int) var_4);
        var_24 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((~(((/* implicit */int) (short)30283)))), (((/* implicit */int) var_6))))) ? (((/* implicit */int) ((((((/* implicit */int) var_8)) & (((/* implicit */int) (unsigned short)4846)))) > (((((/* implicit */_Bool) arr_4 [9U] [(unsigned short)21])) ? (((/* implicit */int) arr_3 [15LL] [i_2])) : (((/* implicit */int) var_12))))))) : ((+(((/* implicit */int) var_1))))));
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) max((((var_14) - (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_10))))))), (((((/* implicit */_Bool) 7754061867983033703LL)) ? (-2281890513526022104LL) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_7))))))))));
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) var_12)) ? (-7754061867983033704LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))));
        arr_8 [18LL] = ((/* implicit */unsigned int) ((signed char) -7754061867983033728LL));
    }
    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) (short)-30280))));
}
