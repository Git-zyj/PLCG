/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72121
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
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                var_15 = max((((/* implicit */unsigned long long int) ((long long int) min((var_9), (((/* implicit */unsigned long long int) var_6)))))), (((((15298238367698185079ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)8000))))))));
                arr_5 [i_0] [i_0] = ((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) & (var_6))) > (((/* implicit */unsigned int) ((((/* implicit */int) var_14)) & (((/* implicit */int) var_10))))));
                var_16 = min(((~(853375489054316777ULL))), (17593368584655234838ULL));
                arr_6 [i_0] [i_0] = ((/* implicit */int) (+(max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1331386876U))))), (((((/* implicit */_Bool) (unsigned char)164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))) : (var_12)))))));
                arr_7 [i_0] [i_0] = ((/* implicit */short) var_13);
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) (unsigned short)21289);
}
