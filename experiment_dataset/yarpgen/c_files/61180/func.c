/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61180
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61180 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61180
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
    var_17 = ((/* implicit */short) ((unsigned short) var_9));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                var_18 -= ((/* implicit */short) min((((((/* implicit */int) (signed char)-80)) / (((/* implicit */int) arr_3 [i_0] [i_1])))), (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) min((((/* implicit */short) var_7)), (var_3)))) : (max((((/* implicit */int) arr_1 [(short)18] [i_1])), (arr_0 [i_1])))))));
                arr_4 [i_1] |= ((/* implicit */signed char) max((((/* implicit */unsigned short) ((unsigned char) (~(((/* implicit */int) var_7)))))), (((unsigned short) ((((/* implicit */_Bool) (signed char)-78)) ? (arr_2 [i_0]) : (arr_2 [i_1]))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) max((((min((((/* implicit */long long int) var_1)), (var_15))) + (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_16))));
    var_20 = ((/* implicit */short) var_15);
}
