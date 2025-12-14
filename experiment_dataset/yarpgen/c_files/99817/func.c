/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99817
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
    var_14 = ((/* implicit */unsigned long long int) min((var_9), (((/* implicit */int) var_3))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 2) 
            {
                {
                    arr_6 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)-41)), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 545515814)) : (9948625714953359952ULL)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((3629265097811391049ULL), (4183857388577499718ULL)))) || (((/* implicit */_Bool) arr_0 [i_1 - 1]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1 + 2] [i_2] [i_1])))))));
                    arr_7 [i_1] [i_1] [6ULL] = ((((/* implicit */_Bool) 1449766648264934271ULL)) ? (((((12768372600657032551ULL) != (arr_0 [10]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */int) arr_5 [i_0] [i_1 - 1] [i_0] [i_0])))))) : (((arr_0 [i_2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [(signed char)16] [2ULL]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) || (((/* implicit */_Bool) 4662390805418591396ULL)))))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) max((((int) ((4183857388577499740ULL) | (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))), (((/* implicit */int) arr_5 [i_0] [10ULL] [i_0] [i_1 + 1])))))));
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */int) 18285340355222156959ULL);
    var_17 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)44)) ? (-545515805) : (-187483074)))) ? (((((/* implicit */_Bool) 10141034849264791281ULL)) ? (var_10) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_13)))))))) ^ (max((13071131161056540073ULL), (((/* implicit */unsigned long long int) var_6)))));
}
