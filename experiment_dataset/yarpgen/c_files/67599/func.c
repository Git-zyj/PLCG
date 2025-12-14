/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67599
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67599 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67599
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
    var_17 = (!((_Bool)1));
    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_5))));
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((_Bool) (+(arr_4 [i_1] [i_1] [i_0])))) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)90))))), (var_5))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((1485629123671975370ULL) >> (((1425587963U) - (1425587962U)))))))))))))));
                arr_5 [(unsigned char)8] = ((/* implicit */signed char) var_2);
                var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2869379307U)) && ((!(((/* implicit */_Bool) ((int) 2869379336U)))))));
            }
        } 
    } 
}
