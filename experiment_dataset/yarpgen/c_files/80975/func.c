/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80975
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) (~(((/* implicit */int) (signed char)(-127 - 1)))));
                arr_6 [i_0] [i_0] = ((/* implicit */long long int) (-(((/* implicit */int) min(((unsigned char)199), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0])) || (((/* implicit */_Bool) (unsigned char)4))))))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned int) var_8);
    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) ? (var_6) : (min((var_10), (((/* implicit */unsigned int) var_8))))))) ? (((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) var_10)) ? (-11) : (10))) : (((/* implicit */int) var_0)))) : (((/* implicit */int) var_11))));
}
