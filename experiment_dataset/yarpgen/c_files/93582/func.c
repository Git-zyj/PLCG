/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93582
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93582 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93582
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_6)), ((-(var_2)))));
    var_12 = ((/* implicit */_Bool) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned short) ((2929515582769015684LL) == (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0])))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0]))));
        var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_3)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 3; i_1 < 14; i_1 += 1) 
    {
        var_15 = ((/* implicit */long long int) ((unsigned long long int) arr_3 [i_1 + 1]));
        arr_5 [i_1 + 2] [i_1] = ((/* implicit */unsigned long long int) min(((!(var_0))), (var_1)));
    }
    var_16 = ((/* implicit */int) var_1);
}
