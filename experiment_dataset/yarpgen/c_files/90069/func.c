/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90069
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
    var_10 = ((/* implicit */_Bool) var_8);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    var_11 = ((/* implicit */unsigned int) ((unsigned long long int) ((long long int) min((1028799734091112678LL), (-4805357152130541921LL)))));
                    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) -2526501079092061501LL)) ? (15830136016962156958ULL) : (((/* implicit */unsigned long long int) -5937666582253251712LL))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 576460752303423487LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33979))) - (var_8)))), (min((((/* implicit */unsigned long long int) -1028799734091112689LL)), (var_6)))))));
    var_14 = ((/* implicit */unsigned char) var_7);
}
