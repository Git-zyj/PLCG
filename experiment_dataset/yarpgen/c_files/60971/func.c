/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60971
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
    var_12 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_2))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) | (min((15338125335026908922ULL), (((/* implicit */unsigned long long int) var_2))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 4; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0 - 2] [i_0 - 3])) / (var_3)))), (((long long int) arr_1 [i_0 - 4] [i_0 - 3]))));
        arr_3 [i_0 - 4] = ((/* implicit */unsigned short) var_7);
    }
    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((-(((/* implicit */int) var_5)))) / (((/* implicit */int) var_1))))) ? (((((/* implicit */int) ((unsigned short) var_10))) / (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_1)))))) : (((/* implicit */int) var_5))));
    var_14 = ((/* implicit */int) ((unsigned long long int) (+(max((2178730106893421773LL), (-14LL))))));
}
