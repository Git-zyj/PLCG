/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56748
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56748 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56748
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
    var_12 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((short) var_7))) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) (+(98628013U)))))));
    var_13 = ((/* implicit */_Bool) ((unsigned int) ((unsigned int) (unsigned char)2)));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */long long int) ((unsigned int) max((((unsigned char) var_2)), (((/* implicit */unsigned char) ((signed char) var_6))))));
                    arr_8 [i_0] [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((unsigned int) max((((((/* implicit */_Bool) 883243349U)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))))));
                    var_15 &= ((/* implicit */signed char) ((min((1042600360), (((/* implicit */int) (signed char)3)))) & (((/* implicit */int) ((unsigned short) ((unsigned int) var_4))))));
                    arr_9 [i_2] [i_2] [i_1] = ((/* implicit */long long int) var_9);
                }
            } 
        } 
    } 
}
