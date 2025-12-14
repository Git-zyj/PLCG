/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73970
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) ((((-1185955175) + (2147483647))) >> (((var_5) - (5541779894538651986ULL)))))))))));
        arr_3 [i_0] |= ((/* implicit */unsigned short) ((arr_1 [i_0]) / (var_8)));
        var_14 &= ((/* implicit */unsigned short) max((((arr_1 [i_0]) / (1185955174))), (((/* implicit */int) var_9))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_15 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) arr_5 [i_1]))));
        arr_6 [i_1] &= ((/* implicit */unsigned long long int) ((arr_1 [i_1]) / (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) || (((/* implicit */_Bool) (+(17761087217976793137ULL)))))))));
    }
    var_16 = ((/* implicit */int) var_9);
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 1498590938))) ? ((((+(var_5))) + (((((/* implicit */_Bool) 1185955174)) ? (10477443724755097364ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
    var_18 = 7969300348954454243ULL;
}
