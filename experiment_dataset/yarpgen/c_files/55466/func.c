/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55466
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
    var_20 = ((/* implicit */unsigned int) var_2);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            {
                var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_1])) ? (arr_3 [i_0] [i_1] [i_1]) : (arr_3 [i_0] [i_1] [i_1])))) ? (((arr_3 [i_0] [(_Bool)1] [i_1]) ^ (arr_3 [i_0] [i_0] [i_0]))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))));
                var_22 = ((/* implicit */unsigned int) var_6);
            }
        } 
    } 
    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) var_13))))) ? (((((/* implicit */_Bool) (~(-3878693453379764338LL)))) ? (((/* implicit */int) ((_Bool) -3878693453379764338LL))) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) var_18)) - (97)))))) ? (((((/* implicit */_Bool) 3878693453379764343LL)) ? (((/* implicit */int) var_18)) : (127))) : (((/* implicit */int) ((10903904574970814624ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))))));
    var_24 = ((/* implicit */unsigned int) var_16);
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)128))))) ? ((-(var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) var_12)) & (var_11))))))) ? (((((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (369669968U) : (1999231969U)))) / (var_15))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)42229)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7055))) : (var_16)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_9)))) : (((/* implicit */int) max((var_2), (var_2)))))))));
}
