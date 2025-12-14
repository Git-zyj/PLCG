/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81685
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((var_12) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_7))))))) ? (((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)-8))))) / (9223372036854775807LL))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)66)) != (((/* implicit */int) (unsigned char)181))))) >= ((-(((/* implicit */int) (unsigned char)253)))))))) != (var_5)));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */long long int) var_1)) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_16))))) ? (((long long int) var_0)) : (-6082861460918863826LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 15; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) max((var_0), (var_2)))), ((+(((/* implicit */int) (signed char)-8))))))))))));
                    var_21 = ((/* implicit */signed char) ((((unsigned int) arr_0 [i_0] [i_1])) & (((/* implicit */unsigned int) ((arr_1 [i_0] [i_1 + 1]) ? (((/* implicit */int) arr_0 [i_0] [i_2])) : (((/* implicit */int) (unsigned char)54)))))));
                }
            } 
        } 
    } 
}
