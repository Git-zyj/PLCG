/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59543
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59543 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59543
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
    var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) 509018231651523114ULL))));
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_14)) * (((((((/* implicit */_Bool) (short)-2066)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (17937725842058028502ULL))) | (((var_3) ? (509018231651523129ULL) : (((/* implicit */unsigned long long int) var_1))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) arr_2 [i_2]);
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) ((0ULL) <= (arr_0 [i_0] [i_2])))) : ((-(var_8)))))) ? (((/* implicit */int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (2ULL)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
                    var_21 = ((/* implicit */int) 2ULL);
                    arr_7 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (~(((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_6 [i_0] [i_2]))))))) : (max((((((/* implicit */_Bool) var_4)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) 952074537))))));
                }
            } 
        } 
    } 
}
