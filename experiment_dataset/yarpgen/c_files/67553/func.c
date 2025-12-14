/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67553
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
    for (long long int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 15; i_2 += 2) 
                {
                    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) 
                    {
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_10 = min((max((arr_6 [7LL] [i_2] [i_3]), (((var_1) - (arr_3 [i_4] [i_3] [i_0]))))), ((+(4257986602921021306LL))));
                                arr_13 [i_0] [i_0] [i_2] [i_2] [i_3] [i_4] &= min((5443882904398459195LL), (-5443882904398459184LL));
                            }
                        } 
                    } 
                } 
                var_11 = ((/* implicit */long long int) min((var_11), (((((/* implicit */_Bool) ((arr_1 [i_1]) << (((arr_7 [i_0] [i_1] [4LL] [i_0]) - (5786348393020046354LL)))))) ? (min((arr_7 [i_1] [i_1] [i_1] [i_0]), (var_4))) : (((long long int) arr_1 [i_0]))))));
                arr_14 [i_0] [i_0] [8LL] &= (+(((((/* implicit */_Bool) arr_2 [i_1])) ? (arr_2 [i_0]) : (arr_2 [i_0]))));
                var_12 = ((/* implicit */long long int) ((max((((var_8) >> (((5443882904398459195LL) - (5443882904398459144LL))))), (arr_6 [i_1] [i_0] [i_0]))) == (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1]) >= (-7117554658590975092LL))))) : (max((-5443882904398459199LL), (7955605017287460540LL)))))));
            }
        } 
    } 
    var_13 = var_4;
}
