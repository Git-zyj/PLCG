/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69458
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
    var_13 = ((/* implicit */short) max((var_13), (var_3)));
    var_14 *= ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)14295))))) ? (((unsigned int) ((((/* implicit */_Bool) var_11)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)255)))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)58841)) : (((/* implicit */int) ((unsigned short) ((unsigned int) (unsigned short)33865))))));
    var_16 = ((/* implicit */unsigned int) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) (unsigned short)240);
                var_18 = ((/* implicit */long long int) ((unsigned long long int) ((signed char) ((((/* implicit */_Bool) (unsigned short)65271)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)31922)) * (((/* implicit */int) (short)-14296))))), (((((arr_0 [(unsigned short)7]) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-31441))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0]))))))))));
            }
        } 
    } 
}
