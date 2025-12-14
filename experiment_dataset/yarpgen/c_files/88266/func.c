/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88266
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_6) & (min((((/* implicit */int) var_9)), (var_6)))))) ? (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */long long int) ((0U) + (4294967295U))))))) : (((unsigned long long int) (-(var_5)))))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) min((((arr_1 [i_0] [i_0]) & (arr_1 [i_0] [i_0]))), (min((arr_1 [0] [i_0]), (arr_1 [i_0] [i_0])))));
        arr_3 [i_0] = (+(((long long int) arr_0 [i_0])));
    }
    for (signed char i_1 = 2; i_1 < 18; i_1 += 3) 
    {
        var_12 += ((/* implicit */signed char) (((+(((/* implicit */int) arr_4 [i_1 + 2])))) >> (((/* implicit */int) ((((/* implicit */int) arr_4 [i_1 + 2])) > (((/* implicit */int) arr_4 [i_1 - 2])))))));
        arr_6 [i_1] = ((/* implicit */_Bool) (~(0U)));
    }
}
