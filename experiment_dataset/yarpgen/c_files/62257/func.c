/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62257
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
    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */long long int) min((((/* implicit */int) max((((/* implicit */short) var_14)), (var_7)))), (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) var_7))))))) + (var_18))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) -8358988847468216681LL);
                var_20 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_1]) : (var_16)))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) arr_2 [i_0] [13LL])) / (((((/* implicit */_Bool) var_13)) ? (var_13) : (-8358988847468216681LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [(short)5] [i_1] [i_1])) ? (((((/* implicit */_Bool) (short)24401)) ? (4294967269U) : (((/* implicit */unsigned int) arr_2 [i_0] [12LL])))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)32))))))));
                arr_7 [i_1] [i_1] [i_0] = max((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))) + (2239525308U))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (var_16))))));
    var_22 = ((/* implicit */unsigned int) ((_Bool) var_1));
}
