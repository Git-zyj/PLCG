/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72975
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
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_6 [i_0] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)127)))) : ((-(((/* implicit */int) var_2)))))));
                    arr_7 [i_0] [i_0] = ((/* implicit */signed char) max((min((max((arr_1 [i_2]), (((/* implicit */unsigned int) (unsigned char)7)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 129847492957959399ULL)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_4))))))), (((/* implicit */unsigned int) var_8))));
                    arr_8 [i_0] = ((/* implicit */short) arr_1 [i_1]);
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */signed char) var_3);
}
