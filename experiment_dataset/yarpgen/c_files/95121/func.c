/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95121
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 2026448010530378048ULL)) ? (((/* implicit */int) (unsigned short)51389)) : (((/* implicit */int) (signed char)-79))));
                var_14 = 17617107892710880ULL;
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_2)) ? (((long long int) var_12)) : (var_10))))))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))), (var_4)));
    var_17 = ((/* implicit */unsigned short) var_0);
}
