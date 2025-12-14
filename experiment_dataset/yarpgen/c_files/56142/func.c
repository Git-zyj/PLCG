/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56142
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
    for (short i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((short) (signed char)8))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)35)))))));
        var_21 = ((/* implicit */unsigned char) max(((~(arr_2 [i_0]))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))));
        var_22 = ((/* implicit */unsigned int) ((unsigned char) min(((signed char)7), ((signed char)-2))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((unsigned int) var_14))) <= (arr_2 [i_0]))) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned char) var_19))))), (min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_15)))))))));
    }
    var_23 = ((/* implicit */signed char) var_10);
    var_24 = ((/* implicit */unsigned int) (short)5233);
    var_25 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((var_15), (((/* implicit */int) var_7))))) ? ((+(((/* implicit */int) var_11)))) : (((/* implicit */int) var_14))))));
}
