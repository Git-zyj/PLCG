/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87744
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
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((3195403702U) ^ (4294967295U)))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)1))) : (3412314334U))) : ((-(3195403699U)))))))))));
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)252)) : (((/* implicit */int) (unsigned char)60))))) : (((1847300535U) - (arr_1 [i_2] [i_1]))))), (((/* implicit */unsigned int) (unsigned char)0))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) var_11))));
}
