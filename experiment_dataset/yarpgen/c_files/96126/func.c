/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96126
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
    var_18 = ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) 511U)) ? (1152921504606846976LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12713))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 4; i_0 < 14; i_0 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (9154607685937560052ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) : (((9292136387771991544ULL) + (((/* implicit */unsigned long long int) 938023340U)))))) * (((9292136387771991550ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13956))))))))));
        var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((short) var_17))) ? (max((0U), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)-13957)))), (((/* implicit */int) (unsigned short)52825)))))));
        var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 280435896U)) ? (555445115022016200ULL) : (((/* implicit */unsigned long long int) -1152921504606847000LL))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)7978)), (max((var_6), (((/* implicit */int) (signed char)(-127 - 1)))))))) ? (((((/* implicit */_Bool) (short)-11517)) ? (2984825941U) : (((/* implicit */unsigned int) 1222443910)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)17863))))) <= (min((10720410998091358775ULL), (((/* implicit */unsigned long long int) (signed char)-97))))))))));
        var_23 ^= ((/* implicit */short) var_9);
    }
    for (unsigned short i_1 = 4; i_1 < 14; i_1 += 4) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_5 [i_1] [i_1]))));
        var_25 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)18)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 - 3] [i_1]))))));
        var_26 ^= ((/* implicit */unsigned int) var_0);
        var_27 |= var_12;
    }
}
