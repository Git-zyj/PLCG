/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58365
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
    for (long long int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) arr_1 [11U]))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 2])) && (((/* implicit */_Bool) arr_0 [i_0 - 1])))))) <= (max((-7148976847571703548LL), (((/* implicit */long long int) (short)-10725))))));
    }
    var_12 |= ((/* implicit */_Bool) var_2);
}
