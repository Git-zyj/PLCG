/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88032
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
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 78451828636358038LL))))), (var_16))))));
    var_19 = ((/* implicit */unsigned short) ((long long int) ((unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_6)) : (-1275014570724647501LL)))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 19; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 21; i_2 += 4) 
            {
                {
                    arr_9 [i_0] [i_2] [17U] [3U] = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) arr_5 [i_2 + 1] [i_1 - 3])), ((~(0U))))) >> (((var_8) - (2128653594117818860LL)))));
                    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) ((unsigned long long int) max((arr_6 [i_1 - 3] [i_1 - 1] [i_0]), (arr_7 [i_1 + 1] [i_2 - 1] [i_2 + 1])))))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) min((var_21), (var_17)));
}
