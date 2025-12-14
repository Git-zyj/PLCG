/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90852
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90852 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90852
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
    for (int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) arr_1 [(signed char)4] [i_1]))));
                var_21 = ((/* implicit */unsigned int) var_10);
                var_22 = ((/* implicit */unsigned short) arr_1 [i_0] [i_1]);
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) (~((~((-(((/* implicit */int) (_Bool)1))))))));
    var_24 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) var_15)) : (var_13)))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (signed char)-118))))) ? (var_3) : (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) 7403671979253505973ULL))))), ((+(((/* implicit */int) (unsigned short)33236)))))))));
}
