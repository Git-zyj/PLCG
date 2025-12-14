/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87704
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) var_7)))) ? (max((((/* implicit */unsigned int) var_14)), (2204144234U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), ((_Bool)1)))))))) ? ((-(((/* implicit */int) var_9)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_16))) != (((((/* implicit */_Bool) var_0)) ? (var_12) : (2090823056U))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                arr_5 [i_0] [(_Bool)1] [i_1] = max((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 10320535822218354516ULL))))) : (((/* implicit */int) ((((/* implicit */_Bool) 2147483647)) && ((_Bool)0)))))), (((((/* implicit */int) ((((/* implicit */int) var_14)) != (arr_1 [i_0] [i_1])))) + (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) 10320535822218354516ULL))))))));
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((unsigned long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_2 [i_1] [2U])))))));
                arr_7 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)0);
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) var_1);
}
