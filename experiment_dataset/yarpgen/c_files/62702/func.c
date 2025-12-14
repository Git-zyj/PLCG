/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62702
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
    var_16 = max((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 0ULL)))) : (var_12))), (((/* implicit */unsigned long long int) var_15)));
    var_17 = ((/* implicit */int) ((var_13) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 |= ((/* implicit */unsigned int) arr_0 [i_0] [i_0]);
        var_19 = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 24; i_1 += 2) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1 + 1])) ? (arr_3 [16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_1]))) ? ((+(var_2))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)18)) == (((/* implicit */int) (unsigned char)26)))))));
    }
    var_23 = ((/* implicit */_Bool) (signed char)(-127 - 1));
}
