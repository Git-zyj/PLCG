/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64919
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */unsigned char) min((var_11), (((/* implicit */unsigned char) ((unsigned int) arr_4 [i_2 - 4] [4] [i_2 - 4])))));
                    var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0] [(unsigned char)12] [i_0])) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) 196810230)) ? (((/* implicit */int) (unsigned short)29912)) : (((/* implicit */int) (short)-28225)))), (((/* implicit */int) min((arr_1 [i_2 - 1]), (((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_2 - 2])))))))))))));
                    arr_9 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((var_8) * (((/* implicit */unsigned long long int) arr_2 [i_2 - 3])))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_2 - 2]))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned char) var_0)))));
}
