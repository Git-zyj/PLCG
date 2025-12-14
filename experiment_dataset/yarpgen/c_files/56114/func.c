/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56114
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56114 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56114
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
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((unsigned int) 1388727113377522846ULL);
                    arr_8 [i_0 - 3] [i_0] [i_0] = ((/* implicit */short) arr_1 [i_0] [i_0]);
                    var_20 = ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                    arr_9 [i_0] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((min((((/* implicit */long long int) var_15)), (var_2))) << (((2719817237U) - (2719817237U)))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */signed char) 8555392408907936791ULL);
    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((max((min((163485827555194273ULL), (((/* implicit */unsigned long long int) (_Bool)0)))), (((/* implicit */unsigned long long int) 30393162506247928LL)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5))))))))));
}
