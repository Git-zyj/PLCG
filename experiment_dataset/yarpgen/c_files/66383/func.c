/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66383
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
    var_14 = 1331997968;
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))))), (max((((/* implicit */unsigned long long int) (+(1331997952)))), (140668768878592ULL)))));
    var_16 *= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))) > (1390941303))))) == (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_0)) : (var_4)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */int) (((!(((/* implicit */_Bool) ((unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (arr_4 [i_0])));
                var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) max((min(((~(-903716))), (-975792617))), (max((var_12), (var_12))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) max((12172864345912263263ULL), (12518749860666036336ULL))))), (var_4)));
}
