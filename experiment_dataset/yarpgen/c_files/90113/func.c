/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90113
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
    for (unsigned int i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                arr_4 [(short)2] &= ((/* implicit */short) arr_0 [i_0]);
                var_13 += ((/* implicit */long long int) ((int) ((short) arr_2 [i_0] [i_1] [i_1 - 1])));
            }
        } 
    } 
    var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-32741)) + (((/* implicit */int) (short)32729))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) var_6)), ((short)-32744))))) : (max((var_4), (((/* implicit */unsigned long long int) (short)32764))))))) ? (max((((3988894970U) / (((/* implicit */unsigned int) ((/* implicit */int) (short)32763))))), (((/* implicit */unsigned int) var_9)))) : (((unsigned int) ((_Bool) var_10))))))));
    var_15 = ((/* implicit */unsigned short) var_4);
}
