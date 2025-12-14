/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96984
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96984 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96984
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
    for (unsigned short i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0 - 1]))))) ? (min((var_11), (((/* implicit */unsigned long long int) (unsigned char)140)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65531)) && (((/* implicit */_Bool) (unsigned short)65527))))))));
        arr_2 [i_0] [i_0] = ((((/* implicit */_Bool) min((arr_0 [i_0] [i_0 - 1]), (((/* implicit */long long int) (unsigned short)65527))))) ? (((var_4) * (var_7))) : (min((var_8), (((/* implicit */unsigned long long int) 288230376151711488LL)))));
        arr_3 [i_0 + 2] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_1 [i_0 + 2])))) && (((/* implicit */_Bool) var_9))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_2)))))));
    }
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        arr_9 [i_1 - 2] = ((/* implicit */signed char) var_2);
        arr_10 [(unsigned char)1] = min((4123307407375324465LL), (((/* implicit */long long int) (unsigned char)255)));
        arr_11 [i_1] = ((/* implicit */signed char) ((unsigned char) min((((/* implicit */unsigned long long int) arr_0 [(unsigned short)1] [i_1 - 1])), (min((var_7), (var_4))))));
        var_16 *= ((/* implicit */long long int) ((unsigned int) (!((!(((/* implicit */_Bool) arr_6 [(unsigned char)9] [i_1])))))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)12)))) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (var_7)))))))) != (max((var_7), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -2454483385532447804LL)))))))));
    var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (signed char)-89)) : (((/* implicit */int) (unsigned short)65523))))), (838392691U)));
}
