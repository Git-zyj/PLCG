/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79471
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */_Bool) (((~(-1637297743614814343LL))) / (((/* implicit */long long int) arr_2 [i_0 - 1]))));
        var_14 = ((/* implicit */long long int) arr_1 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(min((arr_2 [i_0]), (((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_2 [i_0 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))))));
    }
    for (int i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        arr_6 [(unsigned char)18] [7LL] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1] [i_1])) || (arr_5 [i_1])))), (((arr_5 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_4 [i_1] [i_1])))));
        arr_7 [i_1] &= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_1]))))));
    }
    var_15 = var_12;
}
