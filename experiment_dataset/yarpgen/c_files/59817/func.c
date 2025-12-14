/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59817
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
    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) max((min((((/* implicit */int) (_Bool)0)), (1280872721))), (((/* implicit */int) var_7)))))));
    var_19 = ((/* implicit */short) (-(((/* implicit */int) (signed char)65))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) << (((/* implicit */int) (!(((arr_4 [i_0]) == (((/* implicit */long long int) ((/* implicit */int) (short)27335))))))))));
                var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_2 [i_0 - 1]) ? (((((/* implicit */_Bool) (short)19583)) ? (arr_4 [i_1]) : (arr_4 [i_1]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (arr_3 [i_1]))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : ((-((((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_14)))))))))));
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((signed char) -1LL)))));
}
