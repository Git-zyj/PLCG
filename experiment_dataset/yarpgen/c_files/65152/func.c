/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65152
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
    for (int i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)116)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) var_0)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (_Bool)1))))))), (min((((/* implicit */unsigned long long int) (unsigned char)221)), (4870206781814551289ULL))))))));
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) max((var_8), (((/* implicit */int) ((((_Bool) var_9)) && (var_2))))));
                arr_6 [i_0] &= ((/* implicit */_Bool) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)59135)) : (((/* implicit */int) arr_4 [i_0]))))), ((-(11082242964615069424ULL)))))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (682629579U)))))) * (var_7)));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]);
            }
        } 
    } 
    var_12 *= ((/* implicit */unsigned short) var_7);
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (_Bool)0))));
}
