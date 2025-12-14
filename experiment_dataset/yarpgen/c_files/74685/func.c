/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74685
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
    var_17 += ((/* implicit */_Bool) max((max((18015511993325066173ULL), (((/* implicit */unsigned long long int) (unsigned char)8)))), (((/* implicit */unsigned long long int) var_9))));
    var_18 -= ((/* implicit */unsigned long long int) var_6);
    var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) ((int) max((((/* implicit */long long int) 3527617520U)), (var_6))))) ? (4026531840U) : ((((_Bool)1) ? (2665273152U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))))));
    var_20 = ((/* implicit */int) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 4) 
        {
            {
                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_4 [(unsigned short)19] [i_0] [i_0]), (((/* implicit */unsigned long long int) var_6))))) ? (((int) arr_0 [i_1 + 2] [i_0])) : (((/* implicit */int) var_13))));
                arr_7 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(arr_3 [i_0] [i_0]))))));
            }
        } 
    } 
}
