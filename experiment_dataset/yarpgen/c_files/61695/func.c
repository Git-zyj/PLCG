/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61695
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
    var_15 = ((/* implicit */unsigned char) max((268419072LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)120))) >= (var_5))))));
    var_16 = ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) var_3)), (var_10)))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_1))));
    var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) - (min((var_0), (((/* implicit */unsigned long long int) var_2))))))) ? (((max((((/* implicit */unsigned long long int) var_14)), (var_9))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)98))))))) : (((/* implicit */unsigned long long int) var_2))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) ((long long int) (!(((/* implicit */_Bool) 6199816229888634480LL))))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
                var_19 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned char)120)))) ? (arr_1 [i_0]) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)16))) > (-268419073LL))))));
            }
        } 
    } 
}
