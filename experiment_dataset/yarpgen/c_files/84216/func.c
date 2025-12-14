/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84216
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84216 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84216
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
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (signed char)-99)) : (((/* implicit */int) (_Bool)1)))) : (((((/* implicit */int) (signed char)99)) - (((/* implicit */int) arr_6 [i_2] [i_1 + 1] [i_0])))))));
                    var_17 += ((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_1]);
                    var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) -1)), (2214498622U)));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((var_12) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)62)))));
    var_20 = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)194))));
}
