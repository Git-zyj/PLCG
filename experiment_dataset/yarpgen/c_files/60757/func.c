/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60757
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
    var_12 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) ((_Bool) var_3))), (max((14395482671684706209ULL), (((/* implicit */unsigned long long int) (unsigned char)179))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [(unsigned short)11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) (~(var_4))))) ? (((/* implicit */unsigned long long int) (+(469762048U)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_2] [i_0])) ? (14395482671684706203ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) ? (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (14395482671684706214ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_0 [i_2]), (((/* implicit */unsigned short) var_11))))))))));
                    arr_10 [i_2] = ((short) ((_Bool) (unsigned char)247));
                    arr_11 [i_0] [i_1] [i_2] |= ((short) max(((((_Bool)1) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_0])) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((short) var_3)))));
                }
            } 
        } 
    } 
}
