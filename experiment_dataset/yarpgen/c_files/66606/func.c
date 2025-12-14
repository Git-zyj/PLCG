/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66606
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((signed char) arr_5 [i_0] [i_1] [i_2] [i_1]))), (((unsigned int) var_3))))) ? ((+(((/* implicit */int) min((var_4), (var_14)))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= ((+(((/* implicit */int) arr_3 [i_1 - 1] [i_1]))))))))))));
                    var_17 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)117)), (arr_1 [i_1 - 2]))))));
                    var_18 = ((/* implicit */short) arr_4 [i_0] [i_0 - 2] [i_0 + 2] [i_1 + 1]);
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) max((var_8), (((/* implicit */unsigned long long int) (unsigned short)37727)))))) ? (((long long int) var_8)) : (((/* implicit */long long int) (+((~(((/* implicit */int) (short)127))))))))))));
    var_20 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-44)), (var_6)))) ? (var_2) : (((/* implicit */unsigned long long int) ((unsigned int) var_8))))));
}
