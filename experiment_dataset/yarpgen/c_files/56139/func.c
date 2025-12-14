/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56139
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
    var_12 += ((/* implicit */short) max((var_7), (((/* implicit */long long int) min((((/* implicit */unsigned char) var_5)), (var_1))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 13; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((unsigned int) (unsigned short)0)))));
                var_14 -= ((/* implicit */_Bool) ((unsigned long long int) var_0));
            }
        } 
    } 
    var_15 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) var_3)), ((short)-32753)))) ? (((/* implicit */int) max(((short)0), (((/* implicit */short) var_11))))) : (((/* implicit */int) ((signed char) var_6)))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) max((min((((/* implicit */short) (unsigned char)129)), (var_0))), ((short)22)))));
    var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((min((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_4)), (var_10))))) == (min((((16760832U) + (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) var_2)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
}
