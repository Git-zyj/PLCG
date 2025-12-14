/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69496
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
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) 4083598026610442033ULL)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 287948901175001088ULL)) ? (((/* implicit */int) var_9)) : (135135958)))) : (min((((/* implicit */long long int) (short)6336)), (var_4))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)6336)))))))))));
    var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(255661034)))) ? (((((/* implicit */int) (short)6336)) / (((/* implicit */int) var_5)))) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_17 = var_1;
        var_18 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)4)) && (((/* implicit */_Bool) var_6)))))) : (-5982401500477022919LL)));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        arr_6 [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))))) : (287948901175001059ULL)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)123))))), (arr_3 [i_1] [i_1])));
    }
}
