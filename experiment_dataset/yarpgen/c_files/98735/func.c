/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98735
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
    var_12 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (min((1405023641U), (((/* implicit */unsigned int) (unsigned short)65535)))) : (var_2)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (arr_0 [i_0]))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) var_6)) : (arr_0 [i_0]))))))));
        var_14 &= ((/* implicit */signed char) 1405023641U);
    }
    for (int i_1 = 3; i_1 < 10; i_1 += 3) 
    {
        var_15 &= ((/* implicit */unsigned long long int) min((((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1 - 3])), (var_3)))), (((((/* implicit */int) (_Bool)0)) % (((/* implicit */int) (short)-11536))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_2 = 1; i_2 < 10; i_2 += 4) 
        {
            var_16 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_2 - 1])) <= (((/* implicit */int) var_4))));
            var_17 &= ((/* implicit */_Bool) ((arr_1 [i_1 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1 - 2]))) : (1688870692U)));
            var_18 = ((/* implicit */unsigned long long int) var_1);
        }
    }
}
