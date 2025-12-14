/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93542
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
    var_13 += ((((/* implicit */unsigned int) min((((/* implicit */int) (_Bool)1)), (max((var_4), (((/* implicit */int) var_9))))))) <= (var_8));
    var_14 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_7)))) ? (max((((/* implicit */long long int) var_3)), (var_1))) : (((/* implicit */long long int) ((int) var_9))))), (((long long int) ((((/* implicit */_Bool) 68719443968LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_3))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned char) arr_0 [i_0]));
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((-1930505135712079525LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58141)))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 21; i_1 += 1) 
    {
        arr_7 [i_1] = ((/* implicit */_Bool) (+(arr_4 [i_1])));
        var_16 = ((/* implicit */unsigned long long int) arr_5 [i_1]);
        var_17 = ((/* implicit */long long int) ((((/* implicit */int) arr_5 [1LL])) + (((/* implicit */int) arr_5 [i_1]))));
    }
    for (long long int i_2 = 0; i_2 < 13; i_2 += 1) 
    {
        var_18 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_9 [i_2] [i_2])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_9 [i_2] [i_2])))));
        var_19 = ((/* implicit */short) ((((/* implicit */long long int) ((unsigned int) arr_9 [i_2] [i_2]))) + (((max((549755813824LL), (((/* implicit */long long int) var_3)))) - (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))))));
        arr_10 [i_2] = ((/* implicit */unsigned char) (unsigned short)60261);
    }
}
