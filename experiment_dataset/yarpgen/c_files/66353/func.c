/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66353
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
    var_14 = ((/* implicit */int) min((var_14), (-1)));
    var_15 = var_12;
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_3 [i_0] = ((int) ((arr_2 [0]) | (arr_2 [i_0])));
        var_16 = ((/* implicit */int) min((var_16), (((int) min(((-(-2147483639))), (arr_2 [i_0]))))));
        var_17 = ((/* implicit */int) ((1) <= (((arr_1 [i_0]) ^ (arr_2 [i_0])))));
        var_18 += ((/* implicit */int) (!(((/* implicit */_Bool) ((((arr_2 [i_0]) + (2147483647))) << (((((arr_2 [i_0]) + (251699023))) - (25))))))));
    }
    var_19 = ((int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (-1) : (var_11)))) ? (((((/* implicit */_Bool) var_1)) ? (var_7) : (var_11))) : (var_2)));
}
