/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62979
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
    var_19 = ((/* implicit */unsigned long long int) var_6);
    var_20 = ((/* implicit */unsigned long long int) ((var_6) | (((/* implicit */int) var_14))));
    var_21 = ((/* implicit */unsigned long long int) var_4);
    var_22 = ((min((((/* implicit */unsigned long long int) -306924327)), (12030899395266078329ULL))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((int) (!(((/* implicit */_Bool) var_1)))));
        var_24 = ((((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))) | (min((((/* implicit */long long int) arr_0 [15LL])), (arr_1 [i_0] [(unsigned char)4]))));
        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_18)))))) <= (min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))))))));
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) ((int) arr_0 [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_26 += min((((/* implicit */signed char) ((_Bool) (unsigned char)21))), (arr_5 [i_1]));
        var_27 = ((/* implicit */long long int) var_1);
    }
}
