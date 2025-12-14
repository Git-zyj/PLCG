/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62019
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
    var_10 = ((/* implicit */signed char) var_0);
    var_11 *= ((/* implicit */unsigned int) var_1);
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_1] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(-4LL))))));
                    arr_9 [i_0 + 1] [i_0 + 1] [i_1] &= ((/* implicit */short) (_Bool)1);
                    var_12 = var_5;
                    arr_10 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) (_Bool)1);
                    arr_11 [i_0] = ((/* implicit */signed char) (~((((_Bool)0) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) min((((/* implicit */unsigned int) var_0)), ((+(max((524286U), (((/* implicit */unsigned int) (unsigned short)26963))))))));
}
