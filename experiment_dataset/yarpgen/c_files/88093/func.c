/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88093
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88093 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88093
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) min((((arr_3 [i_0]) / (arr_3 [i_0]))), ((((_Bool)1) ? (arr_3 [i_0]) : (arr_3 [i_0])))));
                    var_21 = ((/* implicit */unsigned short) ((((-1441144298) % (arr_3 [i_0]))) + ((-(331209650)))));
                }
            } 
        } 
    } 
    var_22 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && ((_Bool)1)))) & (((/* implicit */int) var_4)))) : (((/* implicit */int) ((unsigned char) var_0)))));
    var_23 = max((max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) var_8)), (var_9))))), (((((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_17))))) / (((((/* implicit */_Bool) (unsigned short)65535)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_17))))))));
}
