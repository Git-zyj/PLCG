/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77427
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_10 = ((/* implicit */unsigned char) 3272929332019643891LL);
        var_11 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-15266)) : (((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((unsigned long long int) (signed char)125)) : (((/* implicit */unsigned long long int) ((int) (short)15265)))));
        var_12 &= ((((/* implicit */_Bool) (signed char)-78)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-78))));
        var_13 = ((/* implicit */unsigned short) ((var_5) % (var_1)));
    }
    var_14 = ((/* implicit */unsigned long long int) var_4);
    var_15 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_0)))) * (((long long int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823U)) ? (((/* implicit */int) var_4)) : (var_8)))) ? (max((1073741835U), (((/* implicit */unsigned int) (short)15243)))) : (((/* implicit */unsigned int) min((var_3), (((/* implicit */int) var_4))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_1 = 2; i_1 < 8; i_1 += 3) 
    {
        var_16 &= ((/* implicit */signed char) ((long long int) arr_1 [i_1]));
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) (unsigned short)63765))));
    }
    for (unsigned short i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        arr_9 [i_2] |= ((/* implicit */signed char) ((unsigned long long int) (signed char)-53));
        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((long long int) (signed char)92))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_2])) || (((/* implicit */_Bool) ((unsigned long long int) (unsigned char)144)))))) : (-1916647114)));
        arr_10 [i_2] &= ((/* implicit */unsigned char) 3300246721U);
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned short) (short)15265);
        var_19 = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_3])) ? (3158566881U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_3])))));
        var_20 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_3]))));
    }
    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) 32767))));
}
