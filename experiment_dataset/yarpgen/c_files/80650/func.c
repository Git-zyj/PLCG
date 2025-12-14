/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80650
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                arr_4 [3] [i_1] [i_1] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (_Bool)1)))) != (((var_11) ^ (((/* implicit */int) var_5))))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) var_5))), (((((/* implicit */int) var_8)) & (((/* implicit */int) (signed char)-52))))))) ? (var_9) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((short) var_5))) : (((/* implicit */int) var_3))))));
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_1);
            }
        } 
    } 
    var_14 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) var_6)) : (8589934591ULL)))) ? (((/* implicit */long long int) min((var_7), (((/* implicit */int) var_10))))) : (var_2))));
    var_15 = ((max((((/* implicit */int) ((_Bool) var_3))), (max((var_7), (((/* implicit */int) var_10)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)202))))));
}
