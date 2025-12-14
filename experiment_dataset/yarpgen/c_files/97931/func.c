/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97931
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
    for (long long int i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [1LL] [i_0]))) >= (0LL)));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)73)) ? (((/* implicit */int) arr_0 [i_0 + 1] [i_0])) : (((/* implicit */int) max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0 + 2]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)20963))))))))));
    }
    var_14 -= ((/* implicit */short) max((var_9), (((/* implicit */unsigned short) var_1))));
    var_15 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-20963)))) >= (((/* implicit */int) max(((short)-20960), ((short)-20977)))))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned short)39484), (((/* implicit */unsigned short) (_Bool)1)))))) * (((((/* implicit */_Bool) (short)20983)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (var_8)))))));
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned char) max(((((+(((/* implicit */int) (short)20963)))) ^ (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : (((/* implicit */int) arr_4 [i_1])))))), (min((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) (short)-20985)))), (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) >= (((/* implicit */int) (short)-20978)))))))));
        var_16 = ((/* implicit */unsigned char) arr_6 [i_1]);
        var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) (short)21002)) >= (((/* implicit */int) arr_3 [i_1])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1]))))) : (((unsigned long long int) arr_4 [i_1]))));
    }
}
