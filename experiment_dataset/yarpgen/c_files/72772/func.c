/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72772
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
    var_16 = ((/* implicit */int) max((((var_5) << (((((2391671583U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32082))))) - (2391639493U))))), (((/* implicit */unsigned int) (~(((/* implicit */int) ((var_7) != (var_8)))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_0] [(signed char)1] [i_1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (short)-15125)) ? ((-(((/* implicit */int) arr_1 [i_0])))) : (max((var_0), (var_3))))), (min((((/* implicit */int) arr_1 [i_1])), ((+(((/* implicit */int) (unsigned short)48535))))))));
                arr_5 [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_15) + (arr_0 [i_0])))), (((unsigned long long int) (-(var_8))))));
            }
        } 
    } 
    var_17 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_14))) ? (((/* implicit */int) max((var_1), (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65533))) == (-1LL)))))) : (((/* implicit */int) (signed char)(-127 - 1)))));
    var_18 = ((/* implicit */signed char) min((((short) ((((/* implicit */int) (short)-15533)) / (-525471470)))), (((/* implicit */short) ((signed char) var_3)))));
    var_19 = -250165834;
}
