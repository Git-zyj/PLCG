/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97273
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
    var_12 = ((/* implicit */long long int) var_3);
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned long long int) var_5);
        var_14 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))))) ^ (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (arr_1 [i_0])))));
        var_15 ^= ((/* implicit */unsigned int) min((var_8), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((var_9) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [i_0]))) : (arr_1 [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)0) ? ((+(((/* implicit */int) var_4)))) : (((var_7) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_7))))))) ? ((-(((/* implicit */int) var_7)))) : (((((/* implicit */int) ((var_7) && (((/* implicit */_Bool) var_1))))) * (((/* implicit */int) ((((/* implicit */int) var_2)) == (((/* implicit */int) var_1)))))))));
        var_17 = ((/* implicit */long long int) arr_3 [i_1]);
        var_18 += var_9;
        var_19 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) > (6ULL))) && (var_9))))) == (((((((/* implicit */long long int) ((/* implicit */int) var_7))) - (var_0))) & (min((arr_4 [i_1]), (((/* implicit */long long int) var_9))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
    {
        arr_7 [i_2] = ((((/* implicit */_Bool) ((arr_3 [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) ? (((/* implicit */long long int) max((1974365224U), (((/* implicit */unsigned int) (signed char)0))))) : (arr_4 [i_2]));
        var_20 = ((/* implicit */short) (!(((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_6 [i_2]))))));
    }
}
