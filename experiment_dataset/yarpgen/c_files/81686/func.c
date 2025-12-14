/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81686
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
    var_17 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((((/* implicit */int) var_5)) + (33)))))) ? (min((((/* implicit */unsigned int) var_0)), (max((((/* implicit */unsigned int) var_8)), (1364190774U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_18 = ((/* implicit */short) (~(arr_0 [i_0] [i_0])));
                var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) | (((((/* implicit */_Bool) arr_0 [i_1] [i_0 + 2])) ? (arr_0 [i_1] [i_0 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))))));
                var_20 = ((/* implicit */signed char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [(_Bool)1] [(unsigned char)2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_4 [(unsigned char)0] [i_0 + 2] [i_0]))))), (((((/* implicit */_Bool) var_12)) ? (-1062834023982839875LL) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))) | (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            }
        } 
    } 
}
