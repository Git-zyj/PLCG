/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77935
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
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) var_5))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_1))))));
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) ((arr_1 [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_10)))))) << (((arr_1 [i_0]) + (4604902455816017834LL)))));
    }
    for (short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((1501300292U) - (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_4 [i_1]) < (arr_4 [i_1]))))) : (arr_3 [i_1])));
        var_18 = ((/* implicit */signed char) ((((1501300276U) / (var_12))) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((arr_3 [(unsigned char)3]) + (((/* implicit */long long int) ((/* implicit */int) var_10))))) != (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))))))));
        var_19 = (i_1 % 2 == zero) ? (((/* implicit */long long int) ((min((arr_2 [i_1]), (arr_2 [i_1]))) << ((((~(arr_2 [i_1]))) - (322965405U)))))) : (((/* implicit */long long int) ((min((arr_2 [i_1]), (arr_2 [i_1]))) << ((((((~(arr_2 [i_1]))) - (322965405U))) - (3914408591U))))));
    }
    for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) 
    {
        arr_7 [i_2] [i_2] = ((/* implicit */long long int) var_0);
        arr_8 [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_2]))) : (var_13)))) ? (1501300292U) : ((+(((((/* implicit */_Bool) arr_5 [i_2])) ? (var_13) : (((/* implicit */unsigned int) var_9))))))));
    }
}
