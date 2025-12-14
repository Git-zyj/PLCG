/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69833
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69833 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69833
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
    var_13 = ((/* implicit */unsigned long long int) min((var_13), (min(((-(((((/* implicit */_Bool) 1930666440U)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        arr_3 [i_0 + 1] = ((/* implicit */_Bool) (~(((/* implicit */int) min((arr_0 [i_0 - 1] [i_0 + 1]), (arr_0 [i_0 + 2] [i_0 - 1]))))));
        var_14 = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_1 [11])) ? (arr_2 [i_0] [i_0]) : (var_10))) >> (((((1930666440U) + (2364300855U))) - (4294967271U))))), (((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])) % (-1809119809)))));
        var_15 -= ((/* implicit */_Bool) (unsigned short)255);
    }
    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_6)) ? ((((-(var_0))) - (((/* implicit */int) min((((/* implicit */short) var_4)), (var_1)))))) : ((~(100131403)))));
}
