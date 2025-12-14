/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96067
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
    var_16 = ((/* implicit */unsigned long long int) min((var_16), (((max(((+(var_4))), (((/* implicit */unsigned long long int) min(((unsigned char)0), (((/* implicit */unsigned char) var_7))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))));
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1)))) - ((((_Bool)0) ? (((/* implicit */int) (unsigned char)76)) : (((/* implicit */int) (unsigned char)79))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                arr_7 [i_0 - 4] = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned char)179))));
                var_18 = ((/* implicit */_Bool) var_3);
                arr_8 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1]))) : (arr_6 [i_0 - 3]))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_2 [i_0 - 2])))))));
                var_19 = ((/* implicit */short) ((min((((long long int) (_Bool)1)), (((/* implicit */long long int) var_3)))) == (((/* implicit */long long int) max((((/* implicit */int) max((arr_0 [i_0] [i_0]), (arr_4 [i_1])))), (((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))))))));
            }
        } 
    } 
    var_20 = var_13;
}
