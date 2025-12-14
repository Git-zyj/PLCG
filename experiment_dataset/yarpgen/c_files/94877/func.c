/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94877
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
    var_19 = ((/* implicit */long long int) var_17);
    var_20 = ((/* implicit */unsigned int) min((var_8), (((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) 3270013757U))))), (((251108988U) << (((var_7) - (1913533118U))))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                {
                    var_21 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (635111991U) : (107102505U)))) / (min((arr_3 [19U] [i_1] [i_2]), (((/* implicit */long long int) var_13)))))), (((/* implicit */long long int) var_16))));
                    var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) max((((/* implicit */long long int) ((unsigned int) arr_3 [i_2 - 1] [i_2 - 1] [i_2]))), (min((max((var_8), (((/* implicit */long long int) arr_0 [7LL])))), ((+(-3033193630446366821LL))))))))));
                    arr_7 [5U] = ((/* implicit */unsigned int) max((((((/* implicit */long long int) 4294963200U)) / (-4046994423893748025LL))), (((/* implicit */long long int) 852641170U))));
                }
            } 
        } 
    } 
}
