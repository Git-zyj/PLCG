/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70768
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */long long int) min((((((/* implicit */_Bool) 8926759525999186114LL)) ? (arr_2 [i_1 - 2] [5ULL]) : (((/* implicit */unsigned long long int) arr_0 [i_2 - 1])))), (max((arr_3 [i_1 - 1]), (arr_3 [i_1 - 2])))));
                    var_12 *= ((/* implicit */unsigned long long int) ((min((arr_3 [i_1 - 1]), (var_7))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((-5717790313576557094LL), (((/* implicit */long long int) var_5))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (!(((/* implicit */_Bool) 17990670527639146749ULL))))))))));
                    var_13 = max((arr_0 [i_0]), ((~(5717790313576557076LL))));
                    var_14 = ((/* implicit */unsigned int) ((long long int) (!(((/* implicit */_Bool) 1048575U)))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) 7606111292554627622LL))));
}
