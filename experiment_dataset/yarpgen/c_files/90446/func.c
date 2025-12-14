/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90446
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
    var_17 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) var_6)), (var_5)));
    var_18 = ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)1389)) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_1]))))))) > (var_14)));
                var_20 = min((((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1] [i_1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))), (max((((/* implicit */unsigned long long int) var_9)), (arr_5 [i_0] [i_0] [i_1]))));
                var_21 = ((/* implicit */unsigned int) ((max(((~(((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)1389))))))) - (max((((/* implicit */int) arr_2 [i_0])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_0 [i_0])) : (134086656)))))));
            }
        } 
    } 
}
