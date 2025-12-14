/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7042
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
    var_13 *= ((((/* implicit */_Bool) max((max((var_3), (((/* implicit */unsigned long long int) var_10)))), (((((/* implicit */_Bool) (signed char)111)) ? (2184438910465025383ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))) ? (((var_10) & (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) var_9))));
    var_14 = ((/* implicit */short) ((((/* implicit */unsigned int) min(((+(var_7))), (((/* implicit */int) var_11))))) < (((((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)172)), (var_7)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((unsigned int) var_6))))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) != ((~(var_2)))))) ^ (((((/* implicit */int) max(((unsigned char)34), (((/* implicit */unsigned char) (signed char)-88))))) | ((+(((/* implicit */int) (signed char)-111))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 9; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) (_Bool)1);
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (((/* implicit */int) ((short) arr_2 [i_0 + 2]))) : (((/* implicit */int) max((arr_1 [i_0 + 2]), (arr_1 [i_0 + 2]))))));
        var_17 = ((/* implicit */signed char) min((var_17), (((/* implicit */signed char) ((var_4) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 2]))))))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 9; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_6 [i_1 - 1] [i_1 - 2]))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) var_4))))))));
    }
    var_19 = ((/* implicit */signed char) ((short) var_9));
}
