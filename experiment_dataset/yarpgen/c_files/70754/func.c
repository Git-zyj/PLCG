/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70754
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
    var_17 = ((/* implicit */signed char) (_Bool)0);
    var_18 -= ((var_5) * (((/* implicit */int) var_15)));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_19 = ((/* implicit */_Bool) var_9);
        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 1] [i_0]))));
    }
    for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) arr_2 [i_1]))));
        arr_4 [i_1] [i_1] &= ((/* implicit */long long int) var_2);
        arr_5 [i_1] = (((!(((/* implicit */_Bool) var_5)))) || ((!(((/* implicit */_Bool) arr_0 [i_1])))));
    }
    var_22 = ((/* implicit */long long int) ((int) var_5));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned short)16384))))) : (max((((/* implicit */long long int) (+(var_10)))), (min((var_16), (((/* implicit */long long int) (short)1783))))))));
}
