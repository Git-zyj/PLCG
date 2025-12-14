/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72466
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
    var_13 = ((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) ((var_2) | (((/* implicit */int) var_6))))) ? (((var_9) ? (var_8) : (((/* implicit */int) var_4)))) : (((/* implicit */int) var_4)))));
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) var_0))));
    var_15 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) ((signed char) (_Bool)1))) >= (((/* implicit */int) ((((/* implicit */int) (unsigned short)65535)) == (((/* implicit */int) var_5))))))))) < (((((((/* implicit */int) var_6)) < (((/* implicit */int) var_10)))) ? (((/* implicit */long long int) var_0)) : (((var_1) | (var_1)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned int) max((4341856583882951473ULL), (((/* implicit */unsigned long long int) 4294967287U))));
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_1 + 3]))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 3])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1])))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_0] [i_1 + 1])) : (((/* implicit */int) arr_1 [i_0] [i_1 - 1]))))));
            }
        } 
    } 
}
