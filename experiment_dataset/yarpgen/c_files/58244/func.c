/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58244
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
    for (long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)211))));
                var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_3 [i_0]) : (arr_3 [i_1]))))));
                var_19 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 15142907862712073000ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-15713))) : (3303836210997478616ULL))), (((/* implicit */unsigned long long int) var_12))));
                arr_6 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_1]))))) : (min((3303880663U), (((/* implicit */unsigned int) (short)-20193))))));
                arr_7 [i_1] [i_1] = ((/* implicit */short) max((((/* implicit */int) ((short) arr_1 [i_0]))), ((+(((/* implicit */int) arr_1 [i_1]))))));
            }
        } 
    } 
    var_20 *= ((/* implicit */short) ((((/* implicit */int) var_17)) >> (((4294967295U) - (4294967269U)))));
    var_21 = ((/* implicit */signed char) var_0);
}
