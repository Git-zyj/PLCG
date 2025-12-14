/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75047
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_5))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-20021))) : (((((/* implicit */_Bool) 751275595U)) ? (9079256848778919936LL) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)28))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((/* implicit */_Bool) (short)-20021)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (3543691700U)))))))));
    }
    for (unsigned long long int i_1 = 3; i_1 < 23; i_1 += 3) 
    {
        var_13 = ((/* implicit */short) var_4);
        arr_4 [i_1 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((-(1462082938)))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) var_3))))) % (((-5653367238100714773LL) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161)))));
        var_14 -= ((/* implicit */short) ((arr_2 [i_1]) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)63071))))) : (min((((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))), (((3499494939U) * (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))))));
    }
}
