/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78935
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78935 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78935
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
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)56375)) && (((/* implicit */_Bool) 3936047637U))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) -1769276665)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_3 [i_0]));
        var_17 = ((/* implicit */signed char) var_6);
        arr_5 [(signed char)16] &= ((/* implicit */_Bool) ((int) var_13));
    }
    for (int i_1 = 3; i_1 < 9; i_1 += 1) 
    {
        var_18 += ((/* implicit */unsigned short) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3936047619U)))), (8373764280081695914LL))) + (((/* implicit */long long int) max((arr_2 [i_1 - 3]), (((/* implicit */int) var_0)))))));
        var_19 = ((/* implicit */_Bool) (~(min((((arr_2 [i_1]) & (var_9))), (((/* implicit */int) var_5))))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) var_3))));
    }
    var_21 += ((/* implicit */int) ((var_10) ? (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12)))))) : ((+(((unsigned long long int) var_3))))));
    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) max((((unsigned int) var_2)), (((/* implicit */unsigned int) var_12)))))));
}
