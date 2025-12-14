/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85811
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
    var_20 = ((/* implicit */short) max((((/* implicit */long long int) max((((((/* implicit */int) var_6)) * (((/* implicit */int) (unsigned short)5266)))), (((/* implicit */int) min(((unsigned short)60278), (((/* implicit */unsigned short) var_2)))))))), (var_0)));
    var_21 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+((-(2225208323933798246LL)))))), (((min((var_13), (var_13))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10)))))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 24; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) - (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max(((short)-1), (((/* implicit */short) arr_1 [i_0])))))))) : (arr_0 [i_0 + 1])));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_19))))) ? (min((arr_0 [i_0 - 3]), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_10), (((/* implicit */short) arr_1 [i_0 - 3]))))))));
    }
    var_22 = ((/* implicit */short) var_7);
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((short) max((max((((/* implicit */long long int) var_12)), (var_8))), (((/* implicit */long long int) var_18))))))));
}
