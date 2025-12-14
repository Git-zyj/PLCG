/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73070
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
    var_17 = ((/* implicit */long long int) -32069078);
    var_18 = ((/* implicit */unsigned char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            {
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) (((_Bool)1) ? (((((/* implicit */_Bool) var_0)) ? (((var_15) ? (((/* implicit */unsigned long long int) var_13)) : (arr_6 [i_0] [i_0] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))) : (((/* implicit */unsigned long long int) min((((long long int) arr_0 [i_1] [i_0])), (((/* implicit */long long int) (_Bool)1)))))));
                var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */int) var_15))))) ? ((+(arr_1 [i_1 - 1]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0])))))))) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) ((short) ((unsigned int) var_10))))));
            }
        } 
    } 
    var_20 = (-(min((((/* implicit */long long int) min((var_5), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) 1040187392U)) : (var_6))))));
}
