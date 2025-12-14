/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67173
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
    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) (+(max((((((/* implicit */_Bool) var_0)) ? (-7305631911007940686LL) : (((/* implicit */long long int) var_4)))), (max((var_10), (var_10))))))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((((arr_0 [i_0 - 1]) | (arr_0 [i_0 - 1]))), (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        var_14 = ((/* implicit */unsigned char) var_9);
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 14; i_1 += 4) /* same iter space */
    {
        arr_5 [(short)4] [i_1] = ((/* implicit */unsigned short) ((var_10) ^ (((/* implicit */long long int) arr_4 [i_1 - 1]))));
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_0 [i_1 - 2]) : (((/* implicit */long long int) var_9))));
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 14; i_2 += 4) /* same iter space */
    {
        var_16 = ((((/* implicit */_Bool) arr_7 [i_2] [i_2 - 2])) ? (((((/* implicit */_Bool) arr_4 [i_2])) ? (arr_6 [i_2 + 1] [i_2]) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_2])) - (((/* implicit */int) arr_2 [i_2]))))));
        var_17 = ((/* implicit */int) arr_6 [i_2 - 2] [4LL]);
        var_18 = ((/* implicit */_Bool) ((unsigned char) var_7));
    }
    var_19 = ((/* implicit */long long int) (((+(((/* implicit */int) var_6)))) % (((var_9) % (var_4)))));
}
