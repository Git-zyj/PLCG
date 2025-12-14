/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63221
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
    var_10 -= ((/* implicit */unsigned int) var_7);
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 8; i_0 += 4) 
    {
        arr_3 [2] = (((((~(((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 + 1])) <= (((/* implicit */int) var_2))))))) + (2147483647))) << (((((((/* implicit */int) arr_1 [i_0 - 2])) * (((/* implicit */int) arr_2 [i_0])))) - (141891676))));
        var_11 += min((((/* implicit */int) ((signed char) (-(((/* implicit */int) (unsigned char)231)))))), (((((/* implicit */_Bool) 2314819577U)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 - 1])))));
        arr_4 [i_0] = ((/* implicit */_Bool) min((((/* implicit */int) ((signed char) (unsigned char)20))), ((~(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
    }
    var_12 = ((/* implicit */unsigned int) min((var_12), (((/* implicit */unsigned int) ((((/* implicit */long long int) min((((((/* implicit */_Bool) (unsigned char)231)) ? (2700667121U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2016))))), (max((((/* implicit */unsigned int) var_0)), (var_1)))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : ((+(var_7))))))))));
    var_13 -= ((/* implicit */unsigned int) (+(((/* implicit */int) var_3))));
}
