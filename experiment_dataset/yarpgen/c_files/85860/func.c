/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85860
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85860 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85860
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */int) min((var_19), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (+(arr_1 [i_0])))))))))));
                var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (-((~((+(var_18))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)41260)))))))));
    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (~((-((-(((/* implicit */int) (_Bool)0)))))))))));
    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-((-(var_2)))))))))));
}
