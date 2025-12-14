/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61447
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
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) ((short) ((unsigned long long int) ((short) arr_1 [9] [i_0]))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((long long int) ((((((/* implicit */_Bool) arr_1 [7] [i_0])) || (arr_0 [i_0] [i_0]))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        arr_5 [i_0] [i_0] = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) arr_2 [i_0]))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [23LL])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((_Bool) arr_0 [i_0] [i_0])))))) : (((unsigned int) 3208673162852748910LL)));
        arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned int) arr_0 [i_0] [i_0]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_0]))) : (((unsigned long long int) arr_2 [(short)6])))) & (((/* implicit */unsigned long long int) ((unsigned int) ((arr_0 [6] [i_0]) || (arr_0 [i_0] [i_0])))))));
    }
    var_16 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((unsigned long long int) var_8))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) >> (((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) % (var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) 3523882940U)) <= (-650289387734055729LL))))) : (((((/* implicit */_Bool) var_1)) ? (var_10) : (var_1)))))));
}
