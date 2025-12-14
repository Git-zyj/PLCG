/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64534
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) max(((-(arr_4 [i_1] [i_1 - 2] [i_1 + 2]))), (((unsigned int) (_Bool)0)))))));
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */_Bool) 1579499746);
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (signed char)-69))) ? ((-(arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [(short)0] [i_1])))))) ? (((/* implicit */unsigned long long int) arr_4 [i_1 + 1] [i_1 - 3] [i_1 - 2])) : (((((/* implicit */_Bool) 3317322900826106644ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21304))) : ((+(arr_5 [i_0] [i_1])))))));
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((_Bool) (_Bool)0))) : (var_3)))) ? ((+(min((((/* implicit */unsigned int) var_6)), (1875583979U))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) max((var_18), (((/* implicit */unsigned char) var_14))))))));
    var_22 = ((/* implicit */short) var_9);
    var_23 = ((/* implicit */unsigned int) max((var_0), (((/* implicit */int) (unsigned char)207))));
}
