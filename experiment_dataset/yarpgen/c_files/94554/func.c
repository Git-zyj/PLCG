/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94554
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) var_12))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)60))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) || (((/* implicit */_Bool) arr_2 [i_0])))))) : (max((arr_1 [i_0] [i_1]), (((/* implicit */long long int) arr_2 [i_0])))))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) arr_4 [i_0] [i_1 + 2]));
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_1 [i_1 + 2] [i_1 + 1]) + (arr_1 [i_1 + 2] [i_1 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 4294967295U)) > (arr_1 [i_1 + 2] [i_1 + 2]))))) : (((unsigned int) var_15))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */int) var_11)) < (782611448))));
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) var_14)) : (((/* implicit */int) ((signed char) ((unsigned short) var_11))))));
}
