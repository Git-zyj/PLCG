/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79405
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
    /* LoopSeq 3 */
    for (long long int i_0 = 1; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned int) arr_1 [i_0 + 1] [(unsigned short)10])), (4294967292U))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0 + 2] [i_0])) >> (((((/* implicit */int) arr_1 [i_0 + 3] [7U])) - (75))))))));
        var_16 = ((/* implicit */unsigned short) ((signed char) ((((-9223372036854775806LL) | (-2827653643405626273LL))) | (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_17 = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (short)15631))))) : (((((/* implicit */_Bool) (unsigned char)233)) ? (7514925198534593588ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))))) <= (((min((14ULL), (((/* implicit */unsigned long long int) arr_3 [i_1])))) >> ((((~(3057699144107731248LL))) + (3057699144107731290LL)))))));
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_3 [(unsigned char)0]), (((/* implicit */unsigned char) var_13))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2827653643405626273LL)))))) : (max((((/* implicit */unsigned int) (unsigned char)22)), (arr_4 [i_1])))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 1; i_2 < 18; i_2 += 3) 
    {
        var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_5 [i_2]))));
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_5 [11U]))) / (((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */int) (unsigned char)189)) : (((/* implicit */int) var_13))))));
        var_21 = ((/* implicit */unsigned char) (unsigned short)13483);
    }
    var_22 = ((/* implicit */_Bool) max((var_22), (var_13)));
    var_23 &= var_11;
}
