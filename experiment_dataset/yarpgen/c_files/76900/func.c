/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76900
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76900 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76900
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
    var_11 = min((((/* implicit */int) var_2)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (var_5)))) ? (((var_1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) min((var_8), (var_10)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                var_12 = ((/* implicit */unsigned int) var_8);
                var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (short)20738)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) var_0)) : (var_9)))))) ? (((/* implicit */int) ((short) ((short) var_0)))) : (((/* implicit */int) var_2))));
                var_14 ^= ((/* implicit */int) min((((unsigned short) (short)63)), (((/* implicit */unsigned short) (unsigned char)0))));
                arr_4 [i_0] [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_6)) ? (var_0) : (((/* implicit */int) var_3)))), (min((((/* implicit */int) var_3)), (((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */int) var_2))))))));
            }
        } 
    } 
}
