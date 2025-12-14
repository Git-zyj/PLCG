/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79275
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
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_15)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_1)) : (var_13))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)251))) : (var_13)))))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */short) arr_4 [i_0] [i_1] [i_1]);
                arr_7 [i_1] [i_1] = var_9;
                arr_8 [i_0] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((short)29730), (((/* implicit */short) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_8)))))) : ((-(var_10))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) (~(var_13)));
}
