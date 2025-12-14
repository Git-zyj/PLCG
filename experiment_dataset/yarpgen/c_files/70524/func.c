/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70524
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
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */long long int) max((2147483647), (-2147483647)));
                arr_5 [i_1] = ((((/* implicit */_Bool) 2147483647)) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned char)152)) : (((/* implicit */int) max((var_1), ((short)11563)))))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551610ULL)) && ((_Bool)1)))), (var_5)))));
                var_13 = ((/* implicit */unsigned char) (+(min((((/* implicit */long long int) var_9)), (arr_0 [i_0] [i_0])))));
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2032116815U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_1))))) ? (((var_10) - (((/* implicit */int) var_2)))) : (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)32767))))))) ? (min((max((3641636885294093060LL), (((/* implicit */long long int) var_6)))), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))))));
}
